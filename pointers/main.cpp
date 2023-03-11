#include <cstdio>

void address() {
    int val{};

    printf("the value of val is %d \n", val);

    int* address{&val};

    printf("&val %p \n", address);
    printf("calue od the address %d\n", *address);
    *address = 12345;
    printf("value of the address %d\n", *address);
    printf("value of the val %d\n", val);
}

// values are coppied unless you use a pointer
void test() {
    int a{20};
    int* b{&a};

    printf("a: %d, b: %d \n", a, *b);

    *b = 12;

    printf("a: %d, b: %d \n", a, *b);
}

void problemsWithArrays() {
    int key_to_universe[]{3, 6, 9};
    int* key_ptr = key_to_universe;

    printf("value you of key_ptr: %d \n", *key_ptr);
}

struct College {
    char name[256];
};

void print_names(College* college_ptr, size_t number_of_colleges) {
    for (size_t i = 0; i < number_of_colleges; i++) {
        printf("%s College\n", college_ptr[i].name);
    }
}

void printChar() {
    char word[]{"Elijah Allen"};

    char* singleLetter = &word[0];
    printf("%s\n", (word + 0));

    for (size_t i = 0; i < sizeof(word) / sizeof(char); i++) {
        char* letter = &word[0] + i;
        printf("%s\n", letter);
    }
}

void readFrom(char* word, int idx) {
    printf("asd %lu\n", sizeof(*word) / sizeof(char));
    if (idx > sizeof(*word) / sizeof(char)) {
        printf("idx is our of range!\n");
        return;
    }
    printf("value: %s\n", word + idx);
}

void writeTo(char* word, int idx, char* val) {
      if (idx > sizeof(*word) / sizeof(char)) {
        printf("idx is our of range!\n");
        return;
    }
    
    *word = *val;

    printf("value: %s\n", word);
}

void example() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char insert[] ="z";
    char* upper_ptr = &upper[0];

    readFrom(lower, 2);
    writeTo(lower, 0, insert);

    // *(lower + 3) = 'd';
    // *(upper_ptr + 3) = 'D';

    // char letter_d = *(lower + 3);  // lower decays into a pointer when we add
    // char letter_D = *(upper_ptr + 3);

    // printf("lower: %s\nupper: %s", lower, upper);
}

void colleges() {
    College best_colleges[] = {"Magdalen", "Nuffield", "Kellogg"};
    College my_collage{"BYU"};
    print_names(best_colleges, sizeof(best_colleges) / sizeof(College));
}

void refAssess() {
    int original = 100;
    int& original_ref = original;
    printf("Original:  %d\n", original);
    printf("Reference: %d\n", original_ref);

    int new_value = 200;
    original_ref = new_value;
    printf("Original:  %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
}

int main() {
    int* my_ptr;

    printf("The value of my_ptr is %p. \n", my_ptr);

    address();

    printf("\n\n ------------------------ TEST ---------------------- \n\n");

    // test();
    // problemsWithArrays();
    // colleges();
    // printChar();
    example();

    // refAssess();
}
