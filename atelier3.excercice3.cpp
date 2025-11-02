
#include<iostream>
using namespace std;
typedef struct element{
    int valeur;
    struct element*next;
}element;
class Liste{
private:
element*tete;
public:
Liste(){
    tete=nullptr;
}
void ajouter_debut(int val){
    element*e=new element;//creation d un nouveau element pour l inserer
    e->valeur=val;
    e->next=tete;
    tete=e;

}
void suprimmer_debut(){
    if(tete==nullptr){
        cout<<"liste es deja vide"<<endl;
        
    }else{
        element*tmp=tete;
        tete=tete->next;
        delete tmp;
    }

    
}
//{}[]
void afficher(){
    element*tmp;
    tmp=tete;
    while (tmp!=nullptr)
    {
        cout<<tmp->valeur<<endl;
        tmp=tmp->next;    }
    
}
~Liste() {
        while(tete != nullptr) {
            element* temp = tete;
            tete = tete->next;
            delete temp;
        }
    }


};
int main(){
 Liste l1;
 l1.ajouter_debut(1);
 l1.ajouter_debut(2);
 l1.ajouter_debut(3);
 l1.ajouter_debut(4);
 l1.ajouter_debut(5);
 l1.afficher();
 l1.suprimmer_debut();
 l1.afficher();
 

    return 0;
}