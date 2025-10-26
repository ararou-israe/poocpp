
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class vecteur{
private:
    float x;
    float y;
    float z;
public:
    // Constructeur par défaut
    vecteur() : x(0.0f), y(0.0f), z(0.0f) {}

    // Constructeur avec paramètres 
    vecteur(float x_new, float y_new, float z_new) {
        x=(x_new);
        y=(y_new);
        z=(z_new); 
        
    }

   
    void afficher() {
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }

    
    vecteur som(const vecteur& v) const {
        return vecteur(x + v.x, y + v.y, z + v.z);
    }

   
    float produit_scalaire(const vecteur& v) const {
        return (x * v.x + y * v.y + z * v.z);
    }
    bool coincide(const vecteur& v) const {
        
        if ((x == v.x) && (y == v.y) && (z == v.z)) {
            return true;
        } else {
            return false;
        }
    }

    
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }
};

int main(){
   
    vecteur v1(1.0f, 1.0f, 1.0f);
    vecteur v2(2.0f, 2.0f, 2.0f);

    v1.afficher();
    v2.afficher();
    vecteur v3 = v1.som(v2); 
    v3.afficher();

    float produit_scalaire = v1.produit_scalaire(v2); 
    cout << "Produit Scalaire: " << endl;


    bool c = v1.coincide(v2);
    if (c=true){
        cout<<"les deux vecteurs sont coincides"<<endl;
        
    }else{ cout<<"les deux vecteurs ne sont pas coincides"<<endl;}

    float norm1 = v1.norme(); 
    cout << "Norme de v1: " << norm1 << endl;

    

    return 0;
}
