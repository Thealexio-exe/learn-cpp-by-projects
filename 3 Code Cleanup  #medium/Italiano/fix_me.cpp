#include <iostream> 
using namespace std;
int Somma(int var1, int var2) {
    int var = var1 + var2;
    cout << "somma calcolata";
    return var;
}
int main() {
    int a, b, var;
    cout<<"inserisci num:";
    cin >> a;
    cin >> b;
    var = Somma(a, b);
    cout<<"il risultato è:"<< var <<endl;
    if (var <= 10) {cout << "somma minori di dieci\n";} 
    else  {cout << "somma maggiore di 10\n";}
    return 0;
}

// ammetiamolo questo codice è brutto da vedere e da leggere.

// immagina una cosa del genere, ma lunga 100 volte tanto:
// dopo una settimana nemmeno chi ha creato questo programma riuscirebbe a rimetterci mano facilmente.