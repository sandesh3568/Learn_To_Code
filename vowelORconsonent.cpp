#include<iostream>
using namespace std;

int main()
{
 char c;
 cout<<"Enter the alphabet\n";
 cin>>c;

 if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') // ||is used as or
 {
     cout<<"Given alphabet is vowel\n";
 }
 else
    {
        cout<<"Given alphabet is consonant\n";
    }
 return 0;
 }
