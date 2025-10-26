#include <iostream>
#include<string>
using namespace std;
class voiture
{
    private:
    string marque;
    string model;
    int annee;
    float kilometrage;
    float vitesse;
    public:
    voiture():marque("dacia"),model("inconnu"),annee(0),kilometrage(0.0f),vitesse(0.0f){}//constructeur par defaut
    
    voiture(const string &mar,const string &mod,int ann,float km,float vit){
        marque=mar;
        model=mod;
        annee=ann;
        kilometrage=km;
        vitesse=vit;
    }//constructeur avec parametres
    
    void accelerer(float valeur){
        vitesse+=valeur;
    }
    void freiner(float valeur){
        if(vitesse>0){
           vitesse-=valeur;  
        }else{vitesse=0;}
           
          
    }
    void afficherinfo(){
        cout<<"marque:"<<marque<<endl;
        cout<<"modele:"<<model<<endl;
        cout<<"annee:"<<annee<<endl;
        cout<<"kilometrage:"<<kilometrage<<endl;
        cout<<"vitesse:"<<vitesse<<endl;
    }
    void avancer(float distance){
        if(distance>0){
            
            kilometrage+=distance;
            
        }
    }
    
    
};
int main(){
    voiture v1("dacia","inconnue",2010,2000.0f,2.0f);
    
   
v1.accelerer(6.2);
v1.freiner(4.5);
v1.afficherinfo();
v1.avancer(3.5);
return 0; 
}
