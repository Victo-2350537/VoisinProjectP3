#include "resourceloader.h"
#include <fstream>
#include <sstream>

#include <iostream>


ResourceLoader::ResourceLoader(const std::string& fichier_csv) {
    charger_donnees(fichier_csv);
}

void ResourceLoader::charger_donnees(const std::string& fichier_csv) {
    std::ifstream file(fichier_csv);
    std::string line;
    while (std::getline(file, line)) {
        std::vector<std::string> row;
        std::stringstream ss(line);
        std::string value;
        while (std::getline(ss, value, ',')) {
            row.push_back(value);
        }
        data.push_back(row);
    }
}

std::vector<std::vector<std::string>> ResourceLoader::getTrainData(double k) {
    double split_index = (data.size() * k);
    return std::vector<std::vector<std::string>>(data.begin(), data.begin() + split_index);
}

std::vector<std::vector<std::string>> ResourceLoader::getTestData(double k) {
    double split_index = (data.size() * k);
    return std::vector<std::vector<std::string>>(data.begin() + split_index, data.end());
}

Noeud* ResourceLoader::getTrainDataLinked(double k) {
    
}

Noeud* ResourceLoader::getTestDataLinked(double k) { 
    
}



    