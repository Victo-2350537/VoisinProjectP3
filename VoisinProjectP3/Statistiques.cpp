#include "Statistiques.h"
#include <algorithm>

namespace Statistiques {
    double moyenne(const std::vector<double>& values) {
        double sum = 0;
        for (double v : values) sum += v;
        return values.empty() ? 0 : sum / values.size();
    }

    double mediane(std::vector<double> values) {
        std::sort(values.begin(), values.end());
        size_t n = values.size();
        return (n % 2 != 0) ? values[n / 2] : (values[n / 2 - 1] + values[n / 2]) / 2;
    }

    double ecart_type(const std::vector<double>& values) {
        double mean = moyenne(values);
        double variance = 0;
        for (double v : values) variance += (v - mean) * (v - mean);
        return sqrt(variance / values.size());
    }

    double distance_euclidienne(const std::vector<double>& point1, const std::vector<double>& point2) {
        double sum = 0;
        for (size_t i = 0; i < point1.size(); ++i)
            sum += (point1[i] - point2[i]) * (point1[i] - point2[i]);
        return sqrt(sum);
    }

    double distance_manhattan(const std::vector<double>& point1, const std::vector<double>& point2) {
        double sum = 0;
        for (size_t i = 0; i < point1.size(); ++i)
            sum += fabs(point1[i] - point2[i]);
        return sum;
    }
}