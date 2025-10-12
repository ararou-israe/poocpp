
#include <iostream>
#include<stdlib.h>
using namespace std;

void remplir (int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<"veuillez entrer la valeur de "<<(i+1)<<endl;
        cin>>*(arr+i);
    }
}
void afficher(int*arr,int n){
    for(int i=0;i<n;i++){
        cout<<(*(arr+i))<<endl;
    }
    
}

int &maximum(int*arr,int n){
    int *max=arr;
    for(int i=1;i<n; i++){
        if(*max<*(arr+i)){
            max=(arr+i);
        }
    }

    return *max;
}
void inverser(int* arr, int n) {
 int* tete= arr;
    int* fin= arr + n - 1;

    while (tete < fin) {
        int tmp = *tete;
        *tete = *fin;
        *fin = tmp;

        tete++;
        fin--;
    }    
}

    

        
int main() {
  int n;
  cout<<"donnez la taille de tableau"<<endl;
  cin>>n;
  int*arr=(int*)malloc(n*sizeof(int));
 remplir(arr,n);
 afficher(arr,n);
 cout<<"le maximum est:"<<(maximum(arr,n))<<endl;
 inverser(arr,n);
 afficher(arr,n);
  

    return 0;
}