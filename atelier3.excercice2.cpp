
#include<iostream>
using namespace std;
class Fichier{
    private:
    int longeur;
    int *adresse;
    public:
    Fichier(int taille){
        longeur=taille;
        adresse=nullptr;
    }
    void creation(){
        if(adresse==nullptr){
            adresse=new int [longeur] ;
            cout<<"memoire allouee avec succession"<<endl;
        }else{
            cout<<"memoire est deja allouee"<<endl;
        }
    }
    
    void remplir(){
        if(adresse==nullptr){
            cout<<"memoire n est pas encore allouee pour la remplir"<<endl;
        }else{
            for (int i=0;i<longeur;i++){
                cout<<"donnez valeur"<<i+1<<endl;
                cin>>adresse[i];
            }
        }
    }
    
    void afficher(){
        if (adresse==nullptr)
        {
            cout<<"aucune valeur pou l afficher"<<endl;
            return;
        }
        
        for(int i=0;i<longeur;i++){
            cout<<"affichage de contenu"<<adresse[i]<<endl;
        }
    }
     
    ~Fichier(){
        delete[] adresse;
    }
};
// {} 
int main(){
    int longeur;
    cout<<" entrer la longeur de fichier "<<endl;
    cin>>longeur;
    Fichier *P=new Fichier(longeur);
    P->creation();
    P->remplir();
    P->afficher();
    delete P;
    return 0;
} 