#include <iostream>
#include<stdlib.h>
using namespace std;

void tab_avec_pointeur (){
     int n=10;
  
  int*arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"veuillez entrer la valeur de "<<(i+1)<<endl;
        cin>>*(arr+i);
    }
    int *max=arr;
    int *min=arr;
    for(int i=1;i<n; i++){
        if(*max<*(arr+i)){
            max=(arr+i);
        }
    }
    for(int i=1;i<n; i++){
        if(*min>*(arr+i)){
            min=(arr+i);
        }
    }

    cout<<"maximum est:" <<*max<<endl;
    cout<<"minimum est:" <<*min<<endl;
    delete[] arr;
}
void tab_sans_pointeur(){
    
   int T[10];
    for(int i=0;i<10;i++){
        cout<<"donnez l element de"<<i+1<<endl;
        cin>>T[i];
    }
    int maximum=T[0];
    
    int minimum=T[0];
    for(int i=1;i<10; i++){
        if(maximum<T[i]){
             maximum=T[i];
        }
    }
     for(int i=1;i<10; i++){
        if(minimum>T[i]){
            minimum=T[i];
        }
    }

    cout<<"maximum est:" <<maximum<<endl;
    cout<<"minimum est:" <<minimum<<endl;
    
    
}
  

        
int main() {
    cout<<"tableau avec pointeur"<<endl;
tab_avec_pointeur()  ;
    cout<<"tableau sans pointeur"<<endl;
tab_sans_pointeur();
 
    return 0;
}