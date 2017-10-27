#include<iostream>
using namespace std;

int main()
{
    int i;
    int *I;
    I = &i;

    bool b;
    bool *B;
    B = &b;

    float f;
    float *F;
    F = &f;

    char c;
    char *C;
    C = &c;

    cout << "Size of integer variable = " << sizeof(i) << " ;    Size of integer pointer variable = " << sizeof(I)<<endl;
    cout << "Size of boolean variable = " << sizeof(b) << " ;    Size of double pointer variable = " << sizeof(B)<<endl;
    cout << "Size of float variable = " << sizeof(f) << " ;   Size of float pointer variable = " << sizeof(F)<<endl;
    cout << "Size of character variable = " << sizeof(c) << " ;    Size of character pointer variable = " << sizeof(C)<<endl;
return 0;
}
