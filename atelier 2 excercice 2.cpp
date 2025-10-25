
#include <iostream>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int multiple2(int a)
{
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}
int multiple3(int a)
{
    if(a%3==0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int a;
    cout<<"entrer la valeur de a : ";
    cin>>a;
    if(multiple2(a)){
        cout<<" il est pair"<<endl;
    }
    if(multiple3(a)){
        cout<<" il est multiple de 3"<<endl;
    }
    if(multiple3(a)&&multiple2(a)){
        cout<<" il est divisible par 6"<<endl;
    }
    

    return 0;
}