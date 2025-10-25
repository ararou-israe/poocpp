
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;
void swap(char*a,char*b){
    char tmp=*a;
    *a=*b;
    *b=tmp; 
}
void permutation(char*nom,int tete,int fin){
   if(tete==fin){
    cout<<nom<<endl;
       
   }//[]
else{
     for(int i=tete;i<=fin;i++)
     {
        swap(&nom[tete],&nom[i];
        permutation(nom,tete+1,fin);
        swap(&nom[tete],&nom[i];
        
        
     }
        
    }
  
}

int main(){
     char nom[]="israe";
    int a=strlen(nom);//calculer la longeur de la chaine
    cout<<"les permutations de cette chaine<<nom<<\n"
    permutation(nom,0,a-1);
    return 0;
}