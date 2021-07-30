#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int space=1;space<=n-i;space++) {
            cout<<"  ";
        }
        int c=(i*2)-1;
        for(int j=1;j<=c;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--) {
        for(int space=1;space<=n-i;space++) {
            cout<<"  ";
        }
        int c=(i*2)-1;
        for(int j=c;j>=1;j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}