
#include<iostream>
using namespace std;
#include<cmath>

template<class T>
T carre_temp(T a){
    return pow(a,2);
}
int main(){
    int a,b;
    cout<<"valeur de a:"<<endl;
    cin>>a;
    cout<<"caree de a est "<<carre_temp(a)<<endl;
   return 0;


}
