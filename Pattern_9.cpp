#include<iostream>
using namespace std;
int main(){
    int i,j,row,col=0;
    cout<<"Enter the rows";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            (i+j)%2==0?cout<<"1 ":cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}