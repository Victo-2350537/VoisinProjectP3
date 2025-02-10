#pragma once


#include <vector>
#include <string>

struct Noeud {
    std::vector<std::vector<std::string>> data;
    Noeud* suivant;
};

class ResourceLoader {
public:
    ResourceLoader(const std::string& fichier_csv);
    std::vector<std::vector<std::string>> getTrainData(double k);
    std::vector<std::vector<std::string>> getTestData(double k);
    Noeud* getTrainDataLinked(double k);
    Noeud* getTestDataLinked(double k);
private:
    Noeud* premier;
    Noeud* m_premier;
    std::vector<std::vector<std::string>> data;
    void charger_donnees(const std::string& fichier_csv);
};


    
    
     
    

