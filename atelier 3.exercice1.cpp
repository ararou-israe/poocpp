#include <iostream>
using namespace std;
class Pile{
    private:
    int taille;
    int *tableau;
    int dernier_element;
    public:
    Pile(int t){  //ajouter a la fin 
        taille=t;
        tableau=new int[taille];
        dernier_element= -1;

    }
    void push(int valeur){ 
        if(dernier_element>=taille-1){ 
            cout<<"la pile est totalement pleine"<<endl;
        }else{ 
            tableau[++dernier_element]=valeur;
        }


    }
//[]
//{ }
    void pop(){
          if (dernier_element<0){
            cout<<" pile vide"<< endl;
           }else{ 
            tableau[dernier_element--];
           }


    }  
    void afficher() {
        if((dernier_element)<0){
            cout<<"pile vide"<<endl;
         }else{
            for(int i=0;  i<=dernier_element ;i++){
                cout<<tableau[i]<<endl;
             }
          }
    }   
};
int main(){
    int taille;
    cout<<"entrer la taille de la pile"<<endl;
    cin>>taille;

    Pile P1(taille);
    P1.push(1);
    P1.push(2);
    P1.push(3);
    P1.push(4);
    P1.push(5);
    P1.afficher();
    P1.pop();
    
    P1.afficher();
    return 0;
 }