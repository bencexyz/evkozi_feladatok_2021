#include <iostream>
using namespace std;

int main () {
    int a[100][100],i,j,n,m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {

            cout << "a[" << i << "][" << j << "]:";
            cin >> a[i][j];
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << a[i][j]<< " ";
        }
        cout << endl;
    }


    return 0;
}
