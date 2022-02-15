#define DEBUG 1

#if DEBUG
    #define OUTPUT_NAME "/Users/aleksandrorlov/ITMO/IS-2021-algo-2-sem/Lab8/C/output.txt"
    #define INPUT_NAME "/Users/aleksandrorlov/ITMO/IS-2021-algo-2-sem/Lab8/C/input.txt"
#else
    #define OUTPUT_NAME "output.txt"
    #define INPUT_NAME "input.txt"
#endif

#include <iostream>
#include <vector>
#include <fstream>

int main() {
    int n;

    std::ofstream out(OUTPUT_NAME);
    std::ifstream in(INPUT_NAME);

    //in >> n;

    //std::vector<std::vector<int>> table(n, std::vector<int>(n, 0));

    return 0;
}