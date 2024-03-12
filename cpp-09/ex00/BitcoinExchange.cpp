#include "BitcoinExchange.hpp"

bool validateDate(const std::string &date)
{
    if (date.size() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    for (size_t i = 0; i < date.size(); i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (date[i] < '0' || date[i] > '9')
            return false;
    }
    return true;
}

bool validateRate(const std::string &s)
{
    std::istringstream iss(s);
    double value;
    if (!(iss >> value))
        return false;
    return iss.eof();
}

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file("data.csv");
    if (!file.is_open())
        throw NoFile();
    std::string line;
    std::getline(file, line);
    if (line != "date,exchange_rate")
        throw InvalidDataFormat();
    while (std::getline(file, line))
    {
        std::string date = line.substr(0,line.find(','));
        std::string rate = line.substr(line.find(',') + 1);
        if (date.empty() || rate.empty() || !validateDate(date) || !validateRate(rate))
            throw InvalidDataFormat();
        if (_exchangeRate.find(date) != _exchangeRate.end())
            throw InvalidDataFormat();
        _exchangeRate[date] = std::strtod(rate.c_str(), NULL);
    }
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
    *this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
    _exchangeRate = src._exchangeRate;
    return (*this);
}

void BitcoinExchange::exchange(std::ifstream &file)
{
    std::string line;
    std::getline(file, line);
    if (line != "date | value")
        throw InvalidFileFormat();
    while (std::getline(file, line))
    {
        try
        {
            std::string date = line.substr(0,line.find('|') - 1);
            std::string value = line.substr(line.find('|') + 2);
            if (date.empty() || value.empty())
                throw InvalidFileFormat();
            if (!validateDate(date))
                throw InvalidDateFormat();
            if (_exchangeRate.find(date) == _exchangeRate.end())
                throw NoExchangeRate();
            if (std::strtod(value.c_str(), NULL) <= 0)
                throw NotPositiveValue();
            if (std::strtod(value.c_str(), NULL) > 1000)
                throw OutOfRange();
            std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << std::strtod(value.c_str(), NULL) * _exchangeRate[date] << " BTC" << std::endl;
    
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
        }
}

const char *BitcoinExchange::NoFile::what() const throw()
{
    return "Error: could not open file";
}

const char *BitcoinExchange::NoExchangeRate::what() const throw()
{
    return "Error: no exchange rate for this date";
}

const char *BitcoinExchange::InvalidDataFormat::what() const throw()
{
    return "Error: invalid data format";
}

const char *BitcoinExchange::InvalidFileFormat::what() const throw()
{
    return "Error: invalid file format";
}

const char *BitcoinExchange::NotPositiveValue::what() const throw()
{
    return "Error: value must be positive";
}

const char *BitcoinExchange::OutOfRange::what() const throw()
{
    return "Error: value is out of range";
}

const char *BitcoinExchange::InvalidDateFormat::what() const throw()
{
    return "Error: invalid date format";
}

