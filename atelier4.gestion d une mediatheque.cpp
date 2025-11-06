#include<string>
#include<iostream>
using namespace std;
class Ressource
{
 friend class Mediatheque;
protected:
int id;
string titre;
string auteur;
int annee;
    
public:
Ressource(int n_id,string n_titre,string n_auteur,int n_annne):id(n_id),titre(n_titre),auteur(n_auteur),annee(n_annne){}
virtual void afficherinfos ()const{
     cout<<"id:"<<id<<endl;
     cout<<" titre:"<< titre <<endl;
     cout<<"auteur:"<< auteur<<endl;
     cout<<"annee:"<< annee<<endl;
    }
virtual void telecharger(){
    cout<<"telechargement de ressource"<<endl;
}



bool operator == (const Ressource &autre){
    return id==autre.id;
}
string getTitre() { return titre; }
string getAuteur() { return auteur; }
int getAnnee() { return annee; }

};
class Telechargeable{
    public:
    virtual void telecharger ()=0;
    virtual void affichermessage(){
        cout<<"telechargement disponible"<<endl;
    }

};


class Livre:public Ressource, public Telechargeable{
    
    private:
    string genre;
    int isbn;
    public:
    Livre(int n_id,string n_titre,string n_auteur,int n_annee,string n_genre,int n_isbn):Ressource(n_id,n_titre,n_auteur,n_annee),genre(n_genre),isbn(n_isbn){}
     void afficherinfos() {
     Ressource::afficherinfos();
     cout<<"genre de livre:"<< genre<<endl;
     cout<<"ISBN:"<< isbn<<endl;
    };
    void telecharger(){
        affichermessage();
    }

};

class Magazine:public Ressource, public Telechargeable{    private:
    string mois_publi;
    int numero;
    public:
    Magazine(int n_id,string n_titre,string n_auteur,int n_annee,string n_mois_publi,int n_numero):Ressource(n_id,n_titre,n_auteur,n_annee),mois_publi(n_mois_publi),numero(n_numero){}
    void afficherinfos() {
        Ressource::afficherinfos();
     
     cout<<"mois de publicitation:"<<mois_publi<<endl;
     cout<<"numro d edition"<<numero<<endl;
    };
    void telecharger(){
       
        affichermessage();
    
    }

};
class Vedios:public Ressource,public Telechargeable{
private:
float duree;
string format;
public:
Vedios(int n_id,string n_titre,string n_auteur,int n_annee,float n_duree,string n_format):Ressource(n_id,n_titre,n_auteur,n_annee),duree(n_duree),format(n_format){}
void afficherinfos() {
     Ressource::afficherinfos();
     cout<<"duree"<<duree<<endl;
     cout<<"format"<<format<<endl;
    };
void telecharger(){
        affichermessage();
    }

};

class Mediatheque {
    private :
    int nmbre_ressources;
    int taille;
    Ressource ** tableau_resource;
    public:
    Mediatheque(int taill){
        nmbre_ressources=0;
        taille=taill;
        tableau_resource = new Ressource*[taille];
    }

    void ajouter_ressource(Ressource*R1){
        if(nmbre_ressources<taille){
           tableau_resource[nmbre_ressources] = R1 ;
           nmbre_ressources++; 
        }
   
    }
    void afficher_ressource(){
        for(int i=0;i<nmbre_ressources;i++){
             tableau_resource[i]->afficherinfos();

        }
    }
    void rechercher(string titre){
        for(int i=0;i<nmbre_ressources;i++){
            if (tableau_resource[i]->getTitre()==titre){
                cout<<"ressource exciste"<<endl;
            }else{cout<<"ressource n exciste pas"<<endl;}
              

        }

    }
    void rechercher(int annee){
        for(int i=0;i<nmbre_ressources;i++){
            if (tableau_resource[i]->getAnnee()==annee){
                cout<<"ressource exciste"<<endl;
            }else{cout<<"ressource n exciste pas"<<endl;}
        }              
    }
    void rechercher(string auteur,int annee){
        for(int i=0;i<nmbre_ressources;i++){
            if (tableau_resource[i]->getAnnee()==annee && tableau_resource[i]->getAuteur()==auteur){
                cout<<"ressource exciste"<<endl;
            }else{cout<<"ressource n exciste pas"<<endl;}
        }              
    }


};
int main(){
    Livre L1(1,"miserable","victor hugo",1984,"roman",123);
    Magazine M1(2,"majid","el jazera",2014,"novembre",1234);
    Vedios V1(3,"beautiful","one direction",2011,3,"musique");
   
    L1.afficherinfos();
     L1.telecharger();

    M1.afficherinfos();
     M1.telecharger();

    V1.afficherinfos();
     V1.telecharger();

    Mediatheque m1(3);
    m1.ajouter_ressource(&L1);
   
    m1.ajouter_ressource(&M1);
    m1.ajouter_ressource(&V1);
    
    m1.afficher_ressource();
    m1.rechercher("majid");
    m1.rechercher("mesirable",1984);

    return 0;
}
