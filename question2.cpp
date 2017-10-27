#include<iostream>
using namespace std;

int main()
{
    int a ,b;
    int *p;
    p = &a;

    cout<<"enter a = ";
    cin>>a;

    cout<<"enter b = ";
    cin>>b;

    cout<< "\nvalue of a = "<<a<<endl<<"value of b = "<<b<<endl<<"value of pointer *p = a ="<<*p<<endl;
    cout<< " "<<endl<<" "<<endl;

    p=&b;

    cout<< "value of a = "<<a<<endl<<"value of b = "<<b<<endl<<"value of pointer *p = b ="<<*p<<endl;

return 0;
}
