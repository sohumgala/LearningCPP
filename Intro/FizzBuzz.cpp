// Prints answers to FizzBuzz game for user specified number of turns

#include<iostream>
#include<string>

using namespace std;

void fizzBuzz(int);

int main(int argc, char** argv) {
    
    string str;
    cout << "Enter a number: ";
    cin >> str;
    int num = stoi(str);

    fizzBuzz(num);

    return 0;
}

void fizzBuzz(int num) {
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz\n";
        } else if (i % 3 == 0) {
            cout << "fizz\n";
        } else if (i % 5 == 0) {
            cout << "buzz\n";
        } else {
            cout << i << '\n';
        }
    }
}
