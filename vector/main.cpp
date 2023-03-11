#include <logger.cpp>
#include <vector>

template <typename T>
std::vector<T> zorro(const std::vector<std::vector<T>> matrix) {
    std::vector<T> vec{};
    std::vector<T> lastPart = matrix[matrix.size() - 1];

    vec.insert(vec.end(), matrix[0].begin(), matrix[0].end());

    for (unsigned i = 1; i < matrix.size() - 2; i++) {
        vec.push_back(std::move(matrix[i][matrix[i].size() - 1 - i]));
    }

    vec.insert(vec.end(), lastPart.begin(), lastPart.end());

    return vec;
}

int main() {
    std::vector<std::vector<int>> matrix{{1, 3, 4}, {9, 9, 3}, {6, 7, 8}};
    logger::warn(zorro(matrix));
    return 0;
}