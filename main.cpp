#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,foo[100][100];
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;

    for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
            cout << "foo[" << i << "][" << j << "]";
            }
    }
    for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                    cout << foo[i][j] << " ";
            }
            cout << endl;

    }

        return 0;
}
