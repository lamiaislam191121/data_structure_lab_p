#include <iostream>

using namespace std;

int main(){

    int i,j,m;

    int Array1[4]={1,2,3,4};
    int Array2[5]={7,9,2,3,8};
    int Array3[3];

    for (i=0; i<4; i++) {

        for (j=0;j<5; j++) {

            if (Array1[i]==Array2[j]) {

                Array3[i]=Array1[i];
                cout << Array3[i] << " " << endl;
                m=1;
            }
        }
    }
    if (m!=1){

        cout << "no common element is found! " << endl;
    }
return 0;

}
