#include<iostream>

using namespace std;

void encode(){

    string s;
    int j,i;
    char ch;
    cout << "Enter the String:";
    getline(cin,s);

    cout << "skip character:";
    cin>>j;

    //int size=s.length();

    for(i=0; i<s.length() ; i++){

        i=i+2;
        ch=s[i];

        if(ch>='a' && ch<'z') {
            ch=ch+2;

            if(ch >'z') {
                ch=ch-'z'+'a'-1;
            }
            s[i]=ch;
        }
        else if (ch>='A' && ch<'Z'){
            ch=ch+2;

            if(ch >'Z'){
                ch=ch-'Z'+'A'-1;
            }
            s[i]=ch;
        }
    }
    cout << s;
}
    int main(){

        encode();

   return 0;

}
