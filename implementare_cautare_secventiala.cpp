#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Numarul de elemente: ";
    cin >> n;

    int v[100];
    cout << "Elementele vectorului:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Valoarea cautata: ";
    cin >> x;

   
    int poz = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            poz = i;  
            break;     
        }
    }

    if (poz == -1)
        cout << "Elementul nu a fost gasit.\n";
    else
        cout << "Element gasit pe pozitia " << poz << ".\n";

    return 0;
}