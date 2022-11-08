#include<iostream>

using namespace std;

class Product{
 public:
     string P_Name;
     int P_Id;
     double Unit_Price;
     string P_catagory;

     Product(){
     }

     Product(string x, int y, double z, string c){
        P_Name=x;
        P_Id=y;
        Unit_Price=z;
        P_catagory=c;
     }
     void showDetails(){
        cout << "Product Name:" << P_Name << endl;
        cout << "product ID:" << P_Id << endl;
        cout << "Unit price:" << Unit_Price << endl;
        cout << "Product catagory:" << P_catagory << endl;
    }
};
int main(){
     Product *P1=new Product[5];

     string P_Name;
     int P_Id;
     double Unit_Price;
     string P_catagory;
     string Name;

     for (int i=0; i<5; i++){
        cout << "Enter Product_Name , Product_Id , Unit_Price , Product_catagory for Product:"<< i+1 << endl;
        cin >>P_Name;
        cin >> P_Id;
        cin >> Unit_Price;
        cin >> P_catagory;
        P1[i]=Product(P_Name,P_Id,Unit_Price,P_catagory);
     }

     cout << endl << endl;

     for (int i=0; i<5; i++){
        P1[i].showDetails();

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
            if(P1[j].Unit_Price>P1[j+1].Unit_Price){
                tmp=P1[j].Unit_Price;
                P1[j].Unit_Price=P1[j+1].Unit_Price;
                P1[j+1].Unit_Price=tmp;
            }
        }
        count++;
    }
    /* cout << "Bouble sorting for Unit_price:" << endl;
    for (int i=0; i<5; i++ ){
        cout << P1[i].Unit_Price << " " ;
        cout << endl;
   }*/
    cout << "Bouble sorting for Unit_Price:" << endl;
     for (int i=0; i<5; i++){
        P1[i].showDetails();

        cout << endl;
     }
        break;

 case 2:

    int min_index=0 , i, j;

    for(int i=0; i<5; i++){
        min_index = i;

        for(int j=i+1; j<5; j++){
            if(P1[min_index].Unit_Price > P1[j].Unit_Price){
                min_index = j;
            }
        }

        tmp = P1[min_index].Unit_Price;
        P1[min_index].Unit_Price = P1[i].Unit_Price;
        P1[i].Unit_Price = tmp;
    }
        cout << "Selection sorting for Unit_Price:" << endl;
        for (int i=0; i<5; i++){
        P1[i].showDetails();

        cout << endl;
     }
        break;
    /*for(int i=0; i<5;i++){
        cout<<P1[i].Unit_Price << "  " ;
        cout << endl;
    }
    break;*/

 /*case 3:
     cout << "Number of passes " << count << endl;
     break;*/
 }

    /* cout << "Bouble sorting for Details:" << endl;
     for (int i=0; i<5; i++){
        P1[i].showDetails();
     }*/

        cout << endl;

        cout<< "Enter the Product's Name to search: ";
        cin >> Name;

            for(int i=0; i<5; i++){
                if(P1[i].P_Name==Name){
                        cout << "Product_Name: " <<  P1[i].P_Name << endl;
                        cout << "Product_Id: " << P1[i].P_Id << endl;
                        cout << "Unit_Price: " << P1[i].Unit_Price << endl;
                        cout << "Product_catagory:" << P1[i].P_catagory << endl;

                }
            }

        cout << endl;

     return 0;

}


