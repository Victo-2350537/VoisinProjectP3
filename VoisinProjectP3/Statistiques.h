#pragma once
#define STATISTIQUES_H

#include <vector>
#include <cmath>

namespace Statistiques {
    double moyenne(const std::vector<double>& values);
    double mediane(std::vector<double> values);
    double ecart_type(const std::vector<double>& values);
    double distance_euclidienne(const std::vector<double>& point1, const std::vector<double>& point2);
    double distance_manhattan(const std::vector<double>& point1, const std::vector<double>& point2);
}
