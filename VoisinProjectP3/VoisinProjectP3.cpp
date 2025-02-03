#include <iostream>
#include "Statistiques.h"
#include "ResourceLoader.h"


int main() {
    try {
        // Test des méthodes de Statistiques
        std::vector<double> valeurs = { 1.2, 2.5, 3.8, 4.0, 5.6 };
        std::cout << "Moyenne: " << Statistiques::moyenne(valeurs) << std::endl;
        std::cout << "Médiane: " << Statistiques::mediane(valeurs) << std::endl;
        std::cout << "Écart type: " << Statistiques::ecart_type(valeurs) << std::endl;

        std::vector<double> pointA = { 1.0, 2.0, 3.0 };
        std::vector<double> pointB = { 4.0, 6.0, 8.0 };
        std::cout << "Distance Euclidienne: " << Statistiques::distance_euclidienne(pointA, pointB) << std::endl;
        std::cout << "Distance Manhattan: " << Statistiques::distance_manhattan(pointA, pointB) << std::endl;

        // Test de ResourceLoader
        ResourceLoader loader("./binary-winequality-white.csv");
        auto trainData = loader.getTrainData(0.8);
        auto testData = loader.getTestData(0.8);

        std::cout << "Train data size: " << trainData.size() << std::endl;
        std::cout << "Test data size: " << testData.size() << std::endl;

        return 0;


    }
    catch (const std::exception& e) {
        std::cerr << "Erreur : " << e.what() << "\n";
    }
    

    return 0;
}
