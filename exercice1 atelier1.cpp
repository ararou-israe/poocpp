
#include <iostream>
using namespace std;
int main() {
    
/*excercice 1*/
char c = '\x01' ;
short int p = 10 ;

cout<<"p + 3= "<< (p+3) <<endl; /* 1le type de resultat est un entier et la valeur 13 */
cout<<"c + 1= " << (c+1) <<endl; /* 2 le type est int et la valeur c est 2*/
cout<<"p + c= " << (p+c) <<endl; /* 3 le type est int et la valeur c est 11 */
cout<<"3 * p + 5 * c=" << (3*p+5*c) <<endl; /* 4 le type est un int et la valeur c est 35 */




    return 0;
}