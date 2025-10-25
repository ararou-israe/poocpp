
#include <iostream>
#include<stdlib.h>
using namespace std;
int incrementer_adr(int *p){
    return(*p)++;
}
void permuter_adr(int*a, int*b){
   int tmp=*a;
    *a=*b;
    *b=tmp;
}
int incrementer_ref( int &x){
    return x++;
    
}
void permuter_ref(int &a, int &b){
   int tmp=a;
    a=b;
    b=tmp;
}
int main(){
    int x=5;
    int y=7;
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<x<<endl;
    incrementer_adr(&x);
    cout<<"incrementer par adresse de x, x:"<<x<<endl;
    permuter_adr(&x,&y);
    cout<<"permutation par adresse de x et y, x:"<<x<<"  y:"<<y<<endl;
    incrementer_ref(x);
    cout<<"incremnter par reference de x, x:"<<x<<endl;
    permuter_ref(x,y);
    cout<<"permutation par reference de x et y, x:"<<x<<"  y:"<<y<<endl;
    
    
}