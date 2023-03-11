#include <cstdint>
#include <string>
#include <iostream>
#include <logger.cpp>

#define CAPACITY 5000
#define DEBUG true

using namespace std;

int main() {
    int32_t large = CAPACITY;
    uint8_t small = 37;

    #ifdef DEBUG
     logger::warn("debugging");
    #endif

    large += small;  // shorthand for large = large + small
    cout << "The large integer is " << large << endl;
    return (0);
}