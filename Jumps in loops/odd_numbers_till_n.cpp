#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"Enter the last number\n";
 cin>>n;

 for(int i=1;i<=n;i++)
   {
    if(i%2==0) {
        continue;
    }
    cout<<i;
 }

 return 0;
 }
