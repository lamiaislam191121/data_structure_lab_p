#include<iostream>

using namespace std;

int main() {

    int size1,size2;
    cout << "enter size1" << endl;
    cin >> size1;
    cout << "enter size2" << endl;
    cin >> size2;


    int Array1[size1], Array2[size2],Array3[size1+size2];



    cout << "Enter the element of size1 : " ;

    for(int i=0; i<size1; i++) {

        cin >> Array1[i];
    }


    cout << "Enter the element of size2 : " ;

    for (int i=0; i<size2; i++) {

        cin >> Array2[i];
    }





    int j=0;

    for (int i=0; i<(size1+size2); i++) {

        if(i<size1) {

            Array3[i]= Array1[i];
        }
        else {
            Array3[i]=Array2[j];
            j++;
        }
    }


     cout  << "The Array in marge order: " << endl;
    for(int i=0; i<size1+size2; i++){

        cout  << Array3[i]<<" ";
    }

    cout << endl;

    cout << "The marging array in reverse order:" << endl;
    for(int i=size1+size2-1 ; i>=0 ; i--) {

        cout << Array3[i] << " ";
    }

    return 0;


}
