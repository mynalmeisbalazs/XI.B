#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int v[100][100],i,j,n,S1=0,S2=0,S3=0,S4=0;
    cin>>n;

    ifstream in("input.txt");

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            in>>v[i][j];
        }
    }
    while (in>>v[i][j]) {
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                if(i<j&&i+j<n-1) {
                    S1=S1+v[i][j];
                }
                if(i<j&&i+j>n-1) {
                    S2=S2+v[i][j];
                }
                if(i>j&&i+j<n-1) {
                    S3=S3+v[i][j];
                }
                if(i>j&&i+j>n-1) {
                    S4=S4+v[i][j];
                }
            }
        }
    }
    cout << S1 << endl << S2 << endl << S3 << endl << S4 << endl;
    in.close();
    return 0;
}
