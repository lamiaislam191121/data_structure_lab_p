#include <iostream>
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
     void Getdetails(){
        cout<<"Enter prodect name:";
        cin>>P_Name;
        cout<< "Enter product id: ";
        cin>>P_Id;
        cout << "Enter unit price:";
        cin>>Unit_Price;
        cout << "Enter product catagory:";
        cin>>P_catagory;

        cout << endl << endl;
     }
     void showDetails(){
        cout  << P_Name <<   "     "  << P_Id <<   "    "  <<  Unit_Price <<    "    "  << P_catagory <<    "     " ;
        cout << endl;
    }
};

class Node{
public:
    Product data;
    Node *next;
};

class LinkedList{
private:
    Node *head;
    Node *tail;

public:
    LinkedList(){
        this->head = NULL;
        this->tail = NULL;
    }
    void createNewNode(Product data){
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;}
        else{
            tail->next = temp;
            tail = temp;}
        }

    void ShowList(){
        Node *pd=head;
         while(pd != NULL){
            pd ->data.showDetails();
            pd = pd->next;}
        }
};

int main(){

    Product P1,P2,P3,P4,P5;

    P1.Getdetails();
    P2.Getdetails();
    P3.Getdetails();
    P4.Getdetails();
    P5.Getdetails();

   LinkedList *myList = new LinkedList();

   myList->createNewNode(P1);
   myList->createNewNode(P2);
   myList->createNewNode(P3);
   myList->createNewNode(P4);
   myList->createNewNode(P5);

    cout << "P_Name    P_ID   Unit_Price   P_catagory " << endl;
   myList->ShowList();

    return 0;
}

