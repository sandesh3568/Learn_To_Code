#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int space=1;space<=n-i;space++) {
            cout<<" ";
        }
        for(int j=1;j<=n;j++) {
            if(i==1 || j==1 || i==n ||j==n) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}