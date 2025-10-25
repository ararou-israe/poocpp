
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 void num_appel(){
    static int compter =0;
     compter++;
     cout<<"appel numero"<<(compter)<<endl;
 }
 int main()
 {
     num_appel();
      num_appel();
       num_appel();
       return 0;
     
 }