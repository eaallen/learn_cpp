#include <cstdio>

class Door {
   public:
    const double height{};
    const double width{};
    const double area{};
    bool is_open{};

    Door(double height, double width, bool is_open)
        : height{height}, width{width}, area{height * width}, is_open{is_open} {
        printf("door is created %fx%f = %lf", height, width, area);
    }

    void open() { is_open = true; }
    void close() { is_open = false; }
};

int main() { Door door = Door(7, 3, true); }