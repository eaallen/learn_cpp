#include <iostream>

enum class HarryPotterCharectar {
    Harry,
    Ron,
    Herminie,
    Snape,
    Albus,
    Draco,
    Fred,
};

int main() {
    auto wizard = HarryPotterCharectar::Ron;

    switch (wizard) {
        case HarryPotterCharectar::Albus:
            printf("Head Master\n");
            printf("Elder Wand\n");
            break;
        case HarryPotterCharectar::Ron :
            printf("A good friend");
            break;
        default:
            break;
    }
}