#include<iostream>

using namespace std;

class Student{
 public:
     string name;
     int Id;
     double cgpa;
     int creditcmplt;

     Student(){
     }

     Student(string x, int y, double z, int c){
        name=x;
        Id=y;
        cgpa=z;
        creditcmplt=c;
     }
     void showDetails(){
        cout << "Name:" << name << endl;
        cout << "ID:" << Id << endl;
        cout << "Cgpa:" << cgpa << endl;
        cout << "Credit complete:" << creditcmplt << endl;
    }
};
int main(){
     Student *s1=new Student[5];

     string name;
     int Id;
     double cgpa;
     int creditcmplt;

     for (int i=0; i<5; i++){
        cout << "Enter name , Id , cgpa , credit complete for student:"<< i+1 << endl;
        cin >> name;
        cin >> Id;
        cin >> cgpa;
        cin >> creditcmplt;
        s1[i]=Student(name,Id,cgpa, creditcmplt);
     }

     cout << endl << endl;

     for (int i=0; i<5; i++){
        s1[i].showDetails();

        cout << endl;
     }
        double tmp;
        int count=0;
        int option;
        cout << "Select option:1.bouble sorting\n2.selection sorting\n"  << endl;
        cin >> option;

 switch(option){

 case 1:

     for(int i=0; i<(5-1); i++){
        for (int j=0; j<(5-i-1);j++){
            if(s1[j].cgpa>s1[j+1].cgpa){
                tmp=s1[j].cgpa;
                s1[j].cgpa=s1[j+1].cgpa;
                s1[j+1].cgpa=tmp;
            }
        }
        count++;
    }
    /* cout << "Bouble sorting for cgpa:" << endl;
    for (int i=0; i<5; i++ ){
        cout << s1[i].cgpa << " " ;
        cout << endl;
   }*/
    cout << "Bouble sorting for Details:" << endl;
     for (int i=0; i<5; i++){
        s1[i].showDetails();

        cout << endl;
     }
        break;

 case 2:

    int min_index=0 , i, j;

    for(int i=0; i<5; i++){
        min_index = i;

        for(int j=i+1; j<5; j++){
            if(s1[min_index].creditcmplt > s1[j].creditcmplt){
                min_index = j;
            }
        }

        tmp = s1[min_index].creditcmplt;
        s1[min_index].creditcmplt = s1[i].creditcmplt;
        s1[i].creditcmplt = tmp;
    }
        cout << "Selection sorting for Credit complete:" << endl;
        for (int i=0; i<5; i++){
        s1[i].showDetails();

        cout << endl;
     }
        break;
    /*for(int i=0; i<5;i++){
        cout<<s1[i].creditcmplt << "  " ;
        cout << endl;
    }
    break;*/

 /*case 3:
     cout << "Number of passes " << count << endl;
     break;*/
 }

    /* cout << "Bouble sorting for Details:" << endl;
     for (int i=0; i<5; i++){
        s1[i].showDetails();

        cout << endl;
     }*/

     return 0;

}

