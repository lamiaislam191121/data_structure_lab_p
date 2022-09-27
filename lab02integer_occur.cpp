#include<iostream>

using namespace std;

int main() {

    int count=0, num;

    int Array[10]={56,98,78,45,78,34,78,56,98,45};

    cout << "Input a number to search" << endl;
    cin >> num;

    for (int i=0; i<8 ; i++) {

        if (Array[i]==num) {

            count++;
        }
    }

    cout << "The number occurs: " << count << " times in the array" << endl;

    return 0;

}
