#include <iostream>

using namespace std;

int main()
{
    int v[100][100],n,i,j;
    cout<<"n=";
    cin>>n;
    for(i=0;i<n;i++){
        for( j=0;j<n;j++){
            cout<<"v["<<i<<"]["<<j<<"]=";
            cin>v[i][j];

        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<< v[i][j]<<" ";
        }
    }
    cout << endl;
    return 0;
}
