// Implement DP computed nth Fibonacci number using a vector

#include<iostream>
#include <vector>

using namespace std;

int fibonacci(int);

int main() {
    string str;
    cout << "Enter a number: ";
    cin >> str;
    int num = stoi(str);

    cout << fibonacci(num);

    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);

    for (int i = 2; i <= n; i++) {
        fib.push_back(fib[i-2] + fib[i-1]);
    }

    return fib[n];
}