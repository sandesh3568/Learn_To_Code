#include <iostream>
using namespace std;

int indexsearch(int array[],int key,int n) {
    for(int i=0;i<n;i++) {
    if(array[i]==key){
        return i;
    }
 }
        return 5;
}

int main() {
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++) {
        cin>>array[i];
    }
    
    int key;
    cin>>key;

    cout<<indexsearch(array,key,n)<<endl;
    
    return 0;
}