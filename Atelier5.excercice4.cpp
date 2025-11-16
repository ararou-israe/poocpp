#include <iostream>
using namespace std;

class A {
    int n;
    float x;
public:
    A(int p = 2) {
        n = p; x = 1;
        cout << "** construction objet A : " << n << " " << x << "\n";
    }
};

class B {
    int n;
    float y;
public:
    B(float v = 0.0) {
        n = 1; y = v;
        cout << "** construction objet B : " << n << " " << y << "\n";//n=1 et y=o.o
    }
};

class C : public B, public A {
    int n;
    int p;
public:
    C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : A(n1), B(v) {
        n = n3;
        p = n1 + n2;
        cout << "** construction objet C : " << n << " " << p << "\n";//n=3,p=2
    }
};

int main() {
    C c1;// objet A n=1,x=1          // objetB n=1 et y=o.o  // objet c n=3,p=3
    C c2(10, 11, 12, 5.0); // objet A n=10,x=1          // objetB n=1 et y=5.o  // objet c n=12,p=21
    return 0;
}