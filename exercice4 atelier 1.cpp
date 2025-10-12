
#include <iostream>
using namespace std ;
main () {
    
int i, j, n ;
i = 0 ;
n = i++ ;
cout << "A : i = " << i << " n = " << n << "\n" ;/*i=0 car i est incrementee et n=0 car on affiche n puis on incremente sa valeur*/

i = 10 ;
n = ++ i ;
cout << "B : i = " << i << " n = " << n << "\n" ;/*i=11 car il est incrementee n=11 aussi car on incremente puis on affiche dans cette fois */

i = 20 ;
j = 5 ;
n = i++ * ++ j ;
cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ;/*i=21 et j=6 car ils sont incremente n=20*6=120 car il prend la valeur incrementee de j * la valeur pre-incremente de i*/

i = 15 ;
n = i += 3 ;
cout << "D : i = " << i << " n = " << n << "\n" ; i = 3 ;/*n=i et i est mise a jour i=i+3=18 donc i et n = 18*/
j = 5 ;
n = i *= --j ;
cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ;/*j est decrementee alors j egale a 4
       n=i et i=l ancien valeur de i * j=18*4=72 
         d ou n=i=72*/



    return 0;
}