
#include <iostream> 
using namespace std; 
class Test{ 
public:
 static int tableau[] ; 
public :
 static int division(int indice, int diviseur){ 
 return tableau[indice]/diviseur; 
 }
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main() {
    int x, y;
    try {
        cout << "Entrez l’indice de l’entier à diviser: ";
        cin >> x;
        cout << "Entrez le diviseur: ";
        cin >> y;

        if (x < 0 || x >= 10) throw "Indice hors limites";
        if (y == 0) throw "Division par zero";

        cout << "Le résultat de la division est: " << Test::division(x, y) << endl;
    } catch (const char* msg) {
        cout << "Erreur : " << msg << endl;
        return 1; // arrêter le programme
    }
    return 0;
}