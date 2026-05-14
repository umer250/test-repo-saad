#ifndef VECTOR_OPS_HPP
#define VECTOR_OPS_HPP

#include <vector>
#include <iostream>

class VectorOps {
public:
    static int findMax(const std::vector<int>& vec);
    static int findMin(const std::vector<int>& vec);
    static double calculateAverage(const std::vector<int>& vec);
    static void printVector(const std::vector<int>& vec);
};

#endif
