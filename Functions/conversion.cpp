#include <iostream>
using namespace std;

int btd(int n) {
    int sum=0;
    int x=1;
    while(n>0) {
        int y=n%10;
        sum+=x*y;
        x*=2;
        n/=10;
    }
    return sum;
}

int otd(int n) {
    int sum=0;
    int x=1;
    while(n>0) {
        int y=n%10;
        sum+=x*y;
        x*=8;
        n/=10;
    }
    return sum;
}


int main()
{
    int n;
    cin>>n;

    cout<<btd(n)<<endl;
    cout<<otd(n)<<endl;
    return 0;
}