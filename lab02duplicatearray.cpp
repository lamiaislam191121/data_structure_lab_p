#include <iostream>

using namespace std;

int main() {

   /* int size , flag=0;

    cout << "Enter the Array: " << endl;
    cin >> size;

    int Array[size];

    cout << "Enter the elements : " << endl;

    for (int i=0; i<size; i++) {

        cin >> Array[i] ;
    }
    */
    int flag=0;

    int Array[5]={44,56,87,44,87};

    cout<< "The Array with duplicate element: " << endl;
    for (int i=0; i<4 ; i++) {
        cout << Array[i] << "  ";
    }

    cout << endl;



    for (int i=0; i<4; i++) {

        int j;
        for (j=0; j<i; j++){
            if (Array[i]==Array[j]) {
                flag=1;
                break;
            }
        }

        if(i==j) {
            cout << Array[i] << " ";
        }
    }

    cout << endl;

    if (flag==0) {
        cout << "Already unique" << endl;
    }
    return 0;
}
