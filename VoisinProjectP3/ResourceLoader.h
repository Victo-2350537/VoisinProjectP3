#pragma once


#define RESOURCELOADER_H

#include <vector>
#include <string>

class ResourceLoader {
public:
    ResourceLoader(const std::string& fichier_csv);
    std::vector<std::vector<std::string>> getTrainData(double k);
    std::vector<std::vector<std::string>> getTestData(double k);
private:
    std::vector<std::vector<std::string>> data;
    void charger_donnees(const std::string& fichier_csv);
};


    
    
     
    

