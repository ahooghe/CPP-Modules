/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahooghe <ahooghe@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:17:55 by ahooghe           #+#    #+#             */
/*   Updated: 2023/11/07 20:22:27 by ahooghe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cerrno>
#include <cstring>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cerr << "Correct usage: " << argv[0] << " <input file path> <string to replace> <string to replace with>." << std::endl;
        return (1);
    }
    std::string fileName = argv[1];
    std::ifstream inFile(fileName);
    if (!inFile.is_open()) {
        std::cerr << "An issue accurred with the input file: " << strerror(errno) << "." << std::endl;
        return (1);
    }
    fileName.append(".replace");
    std::ofstream outFile(fileName);
    if (!outFile.is_open()) {
        std::cerr << "An issue accurred with the output file: " << strerror(errno) << "." << std::endl;
        return (1);
    }
    std::string line;
    while (std::getline(inFile, line)) {
        if (line == argv[2])
            outFile << argv[3] << std::endl;
        else
            outFile << line << std::endl;
    }
    inFile.close();
    outFile.close();
    return (0);
}
