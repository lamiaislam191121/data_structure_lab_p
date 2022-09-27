
#include<iostream>

using namespace std;

int main() {

    void name() {

        for (int i=0; i<10; i++) {

            cout << "Lamia Islam" << endl;
        }
    }


    void array() {

        int array[10]={12,23,45,68,78,98,89,76,65,44};
        int i;

        for(i=0;i<10;i++){

            cout << array[i] << " ";
        }


    }


    void arr() {

     int arr[10];
     int i,n;

     for(i=0;i<10;i++) {

        cin >> n;

        arr[i]=n;
     }

        for(i=0;i<10;i++) {

            cout << arr[i] <<" ";
        }
    }

    void reverse() {

        int arr[10];
        int i,n;

        for (i=0;i<10;i++){

            cin >> n;

            arr[i]=n;
        }
        for (i=9;i>=0;i--) {

            cout << arr[i] <<" ";
        }
    }

return 0;
}
