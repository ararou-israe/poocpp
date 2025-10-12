
#include <iostream>
using namespace std;
int main() {
    


/*excercice 2*/
char c = '\x05' ;
int n = 5 ;
long p = 1000 ;
float x = 1.25 ;
double z = 5.5 ;

cout<<"n + c + p="<<(n+c+p)<<endl; /* 1 le type de resultat est un long int et la valeur c est 1010*/
cout<<"2 * x + c="<<(2*x+c)<<endl; /* 2le type de resultat est un float et la valeur c est 7,5 */
cout<<"(char) n + c="<<((char)n+c)<<endl; /* 3 le type de resultat doit etre un int de valeur 10*/
cout<<"(float) z + n / 2="<<((float) z + n / 2)<<endl; /* 4 le type de resultat doit etre un float et le resultat c est 7,5*/




    return 0;
}