#include<iostream>
using namespace std;

int main() 
{
    int rows,columns;
    cout<<"Enter no. of rows";
    cin>>rows;
    cout<<"Enter no. of columns";
    cin>>columns;

    for(int i=1;i<=rows;i++) {
        for(int j=1;j<=columns;j++) {
            if(i==1 || j==1 || i==rows || j==columns) {
                 cout<<"*"<<"";
            }
            else {
                cout<<" ";
            }            
        }
            cout<<endl;
    }
    return 0;
}
