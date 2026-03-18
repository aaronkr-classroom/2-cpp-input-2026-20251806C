//2-5.cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // 정사각형
    cout << "[정사각형]" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 직사각형 (5x3)
    cout << "\n[직사각형]" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // 삼각형
    cout << "\n[삼각형]" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}