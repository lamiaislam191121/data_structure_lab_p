#include<iostream>

using namespace std;

int main() {

    int i,j,m,n;

    cout << "Enter the row size:";
    cin >>n;
    cout << "Enter the column size:";
    cin >>m;

    int arr[m][n];
    int rev[n][m];

    cout << "Enter the matrix " ;
    for (int i=0; i<n; i++){
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Transpose Matrix:"<< endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
