// #include <iostream>
// #include <vector>
// #include <fstream>

void printGrid(const std::vector<std::vector<char>>& grid) {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<char>> grid = {
        {'-', '-', '-'},
        {'|', 'X', '|'},
        {'-', '-', '-'}
    };

    std::cout << "Knot Game Backend Test:\n";
    printGrid(grid);

    return 0;
}
