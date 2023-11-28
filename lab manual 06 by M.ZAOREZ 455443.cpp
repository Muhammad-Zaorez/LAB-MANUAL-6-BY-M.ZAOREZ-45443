/*
                                   lAB MANUAL 06
                                 M.ZAOREZ (455443)
                                    ME-15 (A)
*/
#include<iostream>
using namespace std;
int main()
{
int n,  x, y, z;
 cout<<"Enter a number: ";
 cin>>n;
 for (int j = 0; j <n; j++) {
 x = 0;
 z = 1;
  for (int i = 0; i <= j; i++)
  {
   cout <<" " <<x<<" ";
   z = x + z;
   x = y;
   y = z;
   
  }
  cout << endl;
 }
 
 //                                                        lab manual 02
}
