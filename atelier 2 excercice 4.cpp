
#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
   int a;
    cout<<"donnez la taille du tableau"<<endl;
    cin>>a;
     int*array1=new int [a];
     cout<<"veuillez entrer" <<a<<" valeur separes "<<endl;
     for(int i=0;i<a;i++){
         cin>>array1[i]; 
     }
        
      // []
     int*carre_array=new int[a];
      for(int i=0;i<a;i++){
       carre_array[i]=array1[i]*array1[i];   
      }
      delete[] array1;
      cout<< "affichage des carres "<<endl;
      for(int i=0;i<a;i++){
          cout<<carre_array[i]<<endl;  
      }
      delete[] carre_array;
      return 0;
        
     
          
}