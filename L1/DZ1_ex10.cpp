#include <iostream>
#include <math.h>



using namespace std;


void var_a(int n) {
    cout << "  x |  ";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " |  ";
    }
    cout << "\n";
    for (int i = 0; i < (n+1)*5; i++){
        if ((i+1) % 5 == 0) {
            cout << "+";
        } else {
            cout << "-";
        }
    }
    cout << "\nF(x)|";
    for (int i = 0; i < n; i++) {
        printf("%.2f", exp(-(i+1)*(i+1)));
        cout << "|";
    }
}


void var_b(int n) {
    cout << "  x |  ";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " |  ";
    }
    cout << "\n";
    for (int i = 0; i < (n+1)*5; i++){
        if ((i+1) % 5 == 0) {
            cout << "+";
        } else {
            cout << "-";
        }
    }
    cout << "\nF(x)|";
    for (int i = 0; i < n; i++) {
        printf("%.2f", sqrt(i+1));
        cout << "|";
    }
}

int main() {
    int n;
    cin >> n;
    var_a(n);
    cout << "\n\n";
    var_b(n);
    return 0;
}