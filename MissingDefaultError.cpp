#include <iostream>
using namespace std;

int main (int argvc, char* argv[]) {
    int a, b;
    cout << "Enter a number between 1 and 5";
    // nothing controls tghe case when a user enters a number outside the directed parameters
    cin >> a;
    switch(a) {
        case 1:
            b=1;
            break;
        case 2:
            b=2;
            break;
        case 3:
            b=3;
            break;
        case 4:
            b=4;
            break;
        case 5:
            b=5;
            break;
    }
    printf("100 divided by %d is %d\n",b,100/b);
    return 0;
}