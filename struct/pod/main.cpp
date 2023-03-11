enum class Difficulty {
    Hard = 1,
    Medium = 2,
    Easy = 3,

};

struct Professor {
    char name[256];
    char house[256];
};

struct Lesson {
    Professor professor;
    char title[256];
    char location[20];
    Difficulty level;
};

int main(){
    Professor snape;
    snape.name[0] = 'S';
    snape.name[1] = 'n';
    snape.name[2] = 'a';
    snape.name[3] = 'p';
    snape.name[4] = 'e';
    snape.house[0] = 's';

}