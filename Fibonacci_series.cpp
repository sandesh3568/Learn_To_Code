#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a=0,b=1,sum;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++) {
        sum=a+b;
        a=b;
        b=sum;
        cout<<b<<" ";
    }
    cout<<endl;
    return 0;
}