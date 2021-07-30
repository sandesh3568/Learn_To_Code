#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++) {
        cin>>array[i];
    }
    int maxnum=INT_MIN;
    int minnum=INT_MAX;

    for(int i=0;i<n;i++) {
        maxnum=max(maxnum,array[i]);
        minnum=min(minnum,array[i]);
    }
    cout<<maxnum<<endl<<minnum<<endl;
    
    return 0;
} 
