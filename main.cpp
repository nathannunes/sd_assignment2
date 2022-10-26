#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    // Abstract Factory, Clone , Singleton
    // Inheritance , Abstract Classes

    string input;
    int pop,i=0;
    while(std::getline(std::cin, input)){
        cout << input << endl;
        i++;
    }
    return 0;
}