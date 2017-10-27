#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char str[20], *p;
cout << "Input about 20 characters of string : ";
cin >> str;
int n = strlen(str);
for(int i=0 ; i<=n ; i++)
   {
    p = &str[n-i];
    cout << p << "\n";
   }
}
