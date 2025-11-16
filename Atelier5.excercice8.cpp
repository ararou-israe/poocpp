


#include <iostream>
using namespace std;

class Stack {
    int* tableau;
    int taille;
    int tete;
    int capacite;

public:
    Stack(int cap = 20) {  
        capacite = cap;
        tete = 0;           
        taille = 0;
        tableau = new int[capacite];
    }

    ~Stack() {             
        delete[] tableau;
    } 

    Stack& operator<<(int n) {
        if (taille >= capacite) {
           
        } else {
            tableau[tete++] = n;
            taille++;
        }
        return *this;  
    }

    Stack& operator>>(int& n) {
        if (taille == 0) {
          
        } else {
            n = tableau[--tete];
            taille--;
        }
        return *this;  
    }

    int operator++() {
        if (taille >= capacite) {
            return 1;
        } else {
            return 0;
        }
    }

    int operator--() {
        if (taille == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    void afficher() const {
        cout << "Pile : ";
        for (int i = 0; i < taille; i++) {
            cout << tableau[i] << " " << endl;
        }
        cout << endl;
    }
};

int main() {
  Stack  s(5); 

    
    s << 1 << 2 << 9;    
    s.afficher();

    
    int x;
    s >> x;
    s.afficher();

    
    s << 3 << 5 << 7; 
  
}

