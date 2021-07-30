#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        int c=n-i;
        for(int space=1;space<=c;space++) {
            cout<<" ";
        }
        for(int j=1;j<=n;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}