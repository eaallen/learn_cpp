#include <cstdio>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide,
};

struct Calculator {
    Calculator(Operation op) {
        operation = op;
    }

    int calculate(int a, int b) {
        switch (operation) {
            case Operation::Add :
                return a + b;
            case Operation::Subtract :
                return a - b ;
            case Operation::Multiply :
                return a * b ;
            case Operation::Divide :
                return a / b;
        }
    }

   private:
    Operation operation;
};

int main(){
    int a = 4;
    int b = 3;
    Calculator add{Operation::Add}; 
    Calculator subtract{Operation::Subtract}; 
    Calculator multiply{Operation::Multiply}; 
    Calculator divide{Operation::Divide}; 

    printf("value of calculator %d\n", add.calculate(a, b));
    printf("value of calculator %d\n", subtract.calculate(a, b));
    printf("value of calculator %d\n", multiply.calculate(a, b));
    printf("value of calculator %d\n", divide.calculate(a, b));
    
}