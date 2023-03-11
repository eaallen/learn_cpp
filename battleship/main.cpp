#include <iostream>
#include <logger.cpp>
#include <vector>
#include <string>

int displayGrid(int grid[7][7]) {
    std::cout << ' ' << ' ' << 1 << ' ' << 2 << ' ' << 3 << ' ' << 4 << ' ' << 5 << ' ' << 6 << ' '
              << 7 << '\n';
    char letterMap[7]{'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    for (int i = 0; i < 7; i++) {
        std::cout << letterMap[i] << " ";
        for (int j = 0; j < 7; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}

int placeBoats(std::vector<std::vector<char>> ships) {
    std::cout << '\n';
    for (auto &&ship : ships) {
        if (ship[0] == 'A') {
            logger::log("Place your Aircraft Carrier");
        }
        logger::log("select a position (a1)");
        
        string answer = "a";
        std::cin >> answer;

        logger::warn("you chose", answer);
    }

    return 0;
}

int main() {
    logger::success("Welcome to battleship! It is time to place your ships");

    // grid
    int grid[7][7] = {
        {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0},
    };

    displayGrid(grid);

    // it is time to place our ships

    std::vector<std::vector<char>> ships = {
        {
            'A',
            'A',
            'A',
            'A',
            'A',
        },
        {
            'B',
            'B',
            'B',
            'B',
        },
        {
            'D',
            'D',
            'D',
        },
        {
            'S',
            'S',
            'S',
        },
        {'L', 'L'},
    };

    placeBoats(ships);

    // place boats in the grid

    return 0;
}