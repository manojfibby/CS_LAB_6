#include<iostream>
using namespace std;

int main()
{
   int arr[10];
   cout<<"Enter the elements of array "<<endl;
   for(int i=0 ; i<10 ; i++)
   {
       cout << "element "<<i+1<<" : ";
       cin >> arr[i];
   }

   cout << "Index Method"<<endl;
   cout<<"{ ";
   for(int j=0 ; j<10 ; j++)
       {cout << arr[j] << "  ";}
   cout<<"} "<<endl;

   cout << "Pointer Method"<<endl;
   int *p;
   cout<<"{ ";
   for(int k=0 ; k<10 ; k++)
   {
       p = &arr[k];
       cout << *p << "  ";
   }
   cout<<"}";
   
return 0;
}
