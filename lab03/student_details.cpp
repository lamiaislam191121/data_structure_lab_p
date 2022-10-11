#include<iostream>

using namespace std;

void details(){

    int n=3;
    int m,i,j;
    cout << "Students:"<< " ";
    cin >> m;

    string str[m][n];
    for (i=0; i<m; i++){
        cout << "Enter student details:(ID, Credit Complete,CGPA)"<< endl;
        for (j=0;j<n;j++){
            cin >> str[i][j];
        }
    }
    cout << "ID   credit complete CGPA"<< endl;
    for(i=0; i<m; i++){
        for (j=0; j<n ; j++){
            if(str[i][1]>="50" && str[i][2]>="3.75")
                cout << str[i][j]<< "         ";
        }
        cout << endl;
    }
 }

    int main(){

        details();

    return 0;
}
