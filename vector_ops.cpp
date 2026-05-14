#include "vector_ops.hpp"
#include <algorithm>
#include <numeric>

int VectorOps::findMax(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

int VectorOps::findMin(const std::vector<int>& vec) {
    return *std::min_element(vec.begin(), vec.end());
}

double VectorOps::calculateAverage(const std::vector<int>& vec) {
    if (vec.empty()) return 0.0;
    double sum = std::accumulate(vec.begin(), vec.end(), 0.0);
    return sum / vec.size();
}

void VectorOps::printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}
