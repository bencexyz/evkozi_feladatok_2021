#include <iostream>

using namespace std;

int main()
{
    int foo [100][100],n,i,k;
    cout << "n=";
    cin >>  n;
    for (i=0;i<n;i++) {
        for (k=0;k<n;k++) {
            cin >> foo [i][k];
        }
    }
    for (i=0;i<n;i++) {
        for (k=0;k<n;k++) {
            if (foo[i][k]%2==0) {
                cout << foo [i][k] << " ";
            }
        }
    }
    return 0;
}
