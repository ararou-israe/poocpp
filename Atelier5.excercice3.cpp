
#include <iostream>
using namespace std;


class vect {
protected:
    int nelem;
    int* adr;
public:
    vect(int n) {
        nelem = n;
        adr = new int[nelem];
    }
    ~vect() {
        delete[] adr;
    }
    int& operator[](int i) {
        return adr[i];
    }
};

// Classe vectok dérivée avec constructeur par copie et opérateur =
class vectok : public vect {
public:
    vectok(int n) : vect(n) {}
    
    // constructeur par copie
    vectok(const vectok& v) : vect(v.nelem) {
        for (int i = 0; i < nelem; i++) adr[i] = v.adr[i];
    }

    // opérateur d’affectation
    vectok& operator=(const vectok& v) {
        if (this != &v) {
            delete[] adr;
            nelem = v.nelem;
            adr = new int[nelem];
            for (int i = 0; i < nelem; i++) adr[i] = v.adr[i];
        }
        return *this;
    }

    int taille() {
        return nelem;
    }
};


int main() {
    vectok v1(5);
    for (int i = 0; i < v1.taille(); i++) v1[i] = i * 2;

    vectok v2 = v1; // copie
    vectok v3(3);
    v3 = v1; // affectation

    for (int i = 0; i < v2.taille(); i++)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}