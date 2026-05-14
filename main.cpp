#include <iostream>
#include "vector_ops.hpp"

int main() {
    std::vector<int> numbers = {45, 23, 67, 12, 89, 34, 56};
    
    std::cout << "Vector: ";
    VectorOps::printVector(numbers);
    
    std::cout << "Maximum: " << VectorOps::findMax(numbers) << std::endl;
    std::cout << "Minimum: " << VectorOps::findMin(numbers) << std::endl;
    std::cout << "Average: " << VectorOps::calculateAverage(numbers) << std::endl;
    
    return 0;
}
