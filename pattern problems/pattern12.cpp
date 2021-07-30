#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int space=1;space<=(n-i);space++) {
            cout<<"  ";
        }
        int count=i;
        for(int j=1;j<=i;j++) {
            cout<<count<<" ";
            count--;
        }
        int c=2;
        for(int j=1;j<i;j++) {
            cout<<c<<" ";
            c++;
        } 
        cout<<endl;
    }
}