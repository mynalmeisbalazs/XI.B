#include <iostream>
#include <fstream>
using namespace std;

int main()
{
int v[100][100],n,S=0,S2=0;
ifstream in("input.txt");
cin>>n;
    for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
            in>>v[i][j];
    }
    }
    for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
            if(i<j&&i+j<n-1){
    S=S+v[i][j];
            }
        if(i>j&&i+j>n-1){
    S2=S2+v[i][j];
        }
    }
    }
    if(S>S2)
    {
    cout<<"a deli a nagyobb";
    }else{
    cout<<"az eszaki nagzobb";
    }
    return 0;

}
