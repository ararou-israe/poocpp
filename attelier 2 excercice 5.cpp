
#include <iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int a=5;
    int &r=a;
    int *p=&a;
    cout<<"variable a:"<<a<<endl;
    cout<<"adresse de a:"<<&a<<endl;
    cout<<"variable r:"<<r<<endl;
    cout<<"adresse de  r:"<<&r<<endl;
    cout<<"variable p:"<<p<<endl;
    cout<<"adresse de p:"<<&p<<endl;
    cout<<"valeur pointee  *p:"<<*p<<endl;
    return 0;
}