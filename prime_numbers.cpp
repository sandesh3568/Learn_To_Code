#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    bool flag=0;
    for(int i=2;i<n;i++) {
        if(n%i==0) {
            cout<<"Non prime\n";
            flag=1;
            break;
        }
    }
    if(flag==0) {
        cout<<"Prime\n";
    }
    return 0;
}