
#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
#include<list>
#include<vector>
#include<string>
using namespace std;


bool recherche(const set<int>&set1,int val){
    if(set1.find(val)!=set1.end())
    {
        return 1;
    } else{return 0;};

}
bool recherche2( set<int>:: iterator debut,set<int>::iterator fin,int valeur){
   if(find(debut,fin,valeur)!=fin) {return 1;
}else{ return 0;}
}
template < class T>
   bool recherche3( T ::iterator debut,T::iterator fin,int valeur){
    return find(debut,fin,valeur)!=fin;
}

int main(){
set<int>set1;
vector <string> vect1={"israe","nisrine"};
list<int>list1;
list1.push_back(1);
list1.push_back(2);
list1.push_back(3);



for(int i=1;i<=100;i++){
 set1.insert(i);
}
set1.recherche(1);
set1.recherche2(begin,end,2);
set1.recherche3(begin,end,3);
list1.recherche3(begin,end,2);
vect1.recherche3(begin,end,"israe");
return 0; 
}
