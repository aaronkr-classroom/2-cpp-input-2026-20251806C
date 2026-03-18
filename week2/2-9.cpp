//2-9.cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "두 숫자 입력: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << "가 더 큽니다." << endl;
    }
    else if (b > a) {
        cout << b << "가 더 큽니다." << endl;
    }
    else {
        cout << "두 수는 같습니다." << endl;
    }

    return 0;
}