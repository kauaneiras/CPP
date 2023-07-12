#include <iostream>
using namespace std;

int main(){
    int x, y, *px, *py;
    px = &x; py = &y;
    cin >> *px >> *py;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    return 0;
};
