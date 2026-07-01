#include <iostream>

using namespace std;

int main() {

    int giri = 0;
    
    while (true) {

        cout << "numero di giri: " ;
        cin >> giri;
        cout << endl;

        for (int i = 1; i <= giri; i++) {
            

            for (int j = 0; j < giri - i; j++) {
                cout << " ";
            }

            for (int j = 0; j < 2*i-1; j++) {
                cout << "*";
            }
            cout << endl;
        } 
        

    }

    return 0; 
}