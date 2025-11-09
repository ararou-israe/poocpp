
#include<iostream>
using namespace std;
class Client{
private:
    string nom;
    string CIN;
    int id;
   
public:
Client(string n_nom,string n_CIN,int n_id):nom(n_nom),CIN(n_CIN),id(n_id){}
~Client(){}  
 friend class Banque; 
 friend class CompteBancaire;

};

class CompteBancaire{
int numero;
float solde;
string codesecret;
Client * proprietaire;

public:
CompteBancaire(int n_numero,float n_solde,string n_codesecret,Client * n_propritaire){
    numero=n_numero;
    solde=n_solde;
    codesecret=n_codesecret;
    proprietaire = n_propritaire;
};
~CompteBancaire(){}
void depot(float montant){
    solde+=montant;

}
void retrait(float retrait){
    solde=solde-retrait;

}
friend class Agentbancaire;
friend class Banque;



};
class Agentbancaire{
    private:
    string nom_agent;

    public:
    Agentbancaire(string n_nom_agent):nom_agent(n_nom_agent){}
    void consultation( CompteBancaire & compte)const{
        cout<<"Agent :   "<<nom_agent<<"   consulte le compte: "<<compte.numero<<endl;
        cout<<"    code secret:"<<compte.codesecret<<  "    solde: "<<compte.solde<<endl;

    }
    void transfert(CompteBancaire &comp1 ,CompteBancaire &comp2,float montant){
        if (comp1.solde>=montant)
        {
         comp1.solde=comp1.solde - montant;
          comp2.solde=comp2.solde + montant;
          cout<<"transfet fait avec succes"<<endl;
        }

        else{cout<<"solde insufissant pour effectuer un transfert"<<endl;}
       
    }


};
class Banque{
    private:
    int nbres_compte;
    CompteBancaire **tableau_compte;
  
    int capacite;

    
    public:
    Banque(int n_capacite){
        capacite=n_capacite;
        nbres_compte=0;

        tableau_compte= new CompteBancaire*[capacite];
    }
    
    void ajout( CompteBancaire *comp){
        if(nbres_compte<=capacite){
            tableau_compte[nbres_compte]=comp;
            nbres_compte++;
        }else{cout<<"capacite maximale atteinte"<<endl;}
    }
    void affichage(){
       for(int i=0;i<nbres_compte;i++){
        cout<<"compte;  "<<tableau_compte[i]->numero<<endl;
        cout<<"solde: "<<tableau_compte[i]->solde<<endl;
        cout<<"proprietaire: "<<tableau_compte[i]->proprietaire->nom<<endl;
        cout<<"CIN: "<<tableau_compte[i]->proprietaire->CIN<<endl;

       }
    }
     friend class Agentbancaire;
};
int main(){
    Client C1("israe_ararou","aaa1233",12);
    Client C2("nisrine","bbb1233",23);
    CompteBancaire B1(11,90000.0f,"123",&C1);
    CompteBancaire B2(2,9000.0f,"1234",&C2);
    Banque ban(30);
    ban.ajout(&B1);
    ban.ajout(&B2);
    ban.affichage();
    cout<<"-------------------------------------"<<endl;

    B1.depot(400.0f);
    B2.retrait(500.0f)  ;  
    Agentbancaire a1("mona");
    a1.transfert(B1,B2,200);
    a1.consultation(B1);
    cout<<"---------------------------------"<<endl;
    ban.affichage();






}
