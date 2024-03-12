#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include <iomanip>
#include <cstdlib>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string, double> _exchangeRate;
    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &src);
        ~BitcoinExchange();

        BitcoinExchange &operator=(BitcoinExchange const &src);

        void exchange(std::ifstream &file);

        class NoFile : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NoExchangeRate : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class InvalidDataFormat : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class InvalidFileFormat : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class NotPositiveValue : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class OutOfRange : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class InvalidDateFormat : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
#endif