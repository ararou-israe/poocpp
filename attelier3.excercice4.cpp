#include<iostream>
#include<string>
using namespace std;

class Client{
private:
    int id;
    string nom;
    string prenom;
public:
    Client():id(0),nom("inconnu"),prenom("inconnu"){}
    Client(int id_n,string nom_n,string prenom_n){
        id=id_n;
        nom=nom_n;
        prenom=prenom_n;
    }
    Client (const Client &autre){
        id=autre.id;
        nom=autre.nom;
        prenom=autre.prenom;
    }
    ~Client(){}
    int getid(){ return id; }
    string getnom(){ return nom; }
    string getprenom(){ return prenom; }
};

class Compte{
private:
    int numero;
    float solde;
    Client *client;
    static int nbr_comptes;
public:
    Compte():numero(0),solde(0.0f),client(nullptr){
        ++nbr_comptes;
    }
    

   
    Compte(int numero_n, float solde_n, const Client &c){
        numero = numero_n;
        solde = solde_n;
        client = new Client(c);
        ++nbr_comptes;
    }

    Compte (const Compte &autre){
        numero=autre.numero;
        solde=autre.solde;
        client=new Client(*autre.client);
        ++nbr_comptes;
    }

    ~Compte(){
        delete client;
        client=nullptr;
        --nbr_comptes;
    }

    int getnumero(){ return numero;}
    float getsolde(){ return solde;}
    Client* getclient(){return client;}
    static int getnbr_comptes(){return nbr_comptes;}
};

int Compte::nbr_comptes= 0;

inline float calculintere(float solde,float taux){  
    return solde + (solde * taux / 100);
}

int main(){
    Client c1(1,"israe","aa");
    Client c2(2,"rania","rr");
    Client c3(3,"NISRINE","NN");
;

    Compte com1(1,10000000.0f,c1);
    Compte com2(2,200000000.0f,c2);
    Compte compteCopie=com1;

    {
        Compte compteTemp(1004, 1500.0f,c3);
        cout << "Nombre total de comptes pendant le bloc : " 
             << Compte::getnbr_comptes() << endl;
    } // compteTemp est détruit ici → destructeur appelé

    cout << "Nombre total de comptes apres destruction : " 
         << Compte::getnbr_comptes() << endl;

    float nouveauSolde = calculintere(com1.getsolde(), 5.0f); // 5% d’intérêt
    cout << "Ancien solde du compte1 : " << com1.getsolde() << " dh" << endl;
    cout << "Nouveau solde du compte1 apres interet : " << nouveauSolde << " dh" << endl;

    cout << "\nNombre final de comptes : " << Compte::getnbr_comptes() << endl;

    return 0;

}
//copie superficielle l utilisation de constructeur par defaut on copie dans la meme case memoire par contre copie profonde on utilise un constructeur de copie on veut copier aussi les adresses dans une autre casse memoire
//on a utiliser un variable static car on veut compter le nombre total des comptes crees
// quand il contient pas beaucoup d instructions
//on utilise un construteur a cause de risque de fuite memoire
