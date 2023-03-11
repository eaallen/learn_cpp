#include <iostream>
#include <string>
#include <logger.cpp>

using namespace std;

int main(){
    logger::success("Hello user! Please enter your name.");

    string name;

    cin >> name;

    logger::success("Nice to meet you,", name);
}

