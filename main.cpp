#include <iostream>
#include "Lists/SinglyLinkedList.h"
#include "Lists/DoubleLinkedList.h"

void exampleSingleList(){
    try{
        SinglyLinkedList<int> a;
        a.AddToBack(5);
        a.AddToBack(10);
        a.AddToBack(20);
        a.AddToBack(12);
        a.AddToBack(13);
        a.AddToBack(14);

        cout<<"added six elements to the emd of list" << endl;
        cout<<endl<<a << endl;

        a.AddToBeginning(7);

        cout<<"added an element to the beginning"<<endl;
        cout<<endl<<a << endl;


        a.AddAtIndex(4,123);

        cout<<"added an element by index 4"<<endl;
        cout<<a << endl;

        cout<<"Search 123 in list: "<<a.Search(123) << endl << endl;

        cout<<"Size of list: "<<a.getSize()<<endl << endl;

        cout<<"IS empty: "<<a.IsEmpty()<<endl << endl;

        a.DeleteFromBeginning();

        cout<<"deleted an object from the beginning"<<endl;
        cout<<a<<endl;

        a.DeleteFromEnd();

        cout<<"deleted an object from the end"<<endl;
        cout<<a<<endl;

        a.DeleteAtIndex(4);

        cout<<"deleted an obj by index 4"<<endl;
        cout<<a<<endl;

        cout<<"used operator[] with index 2"<<endl;
        cout<<a[2]<<endl << endl;

        cout<<"used operator[] with index 100"<<endl;
        cout<<a[100]<<endl;
    }
    catch (const out_of_range &e){
        cerr<<e.what()<<endl;
    }

}
void exampleDoubleList(){
    try {
        DoubleLinkedList<int> a;
        a.AddToBack(5);
        a.AddToBack(10);
        a.AddToBack(20);
        a.AddToBack(12);
        a.AddToBack(13);
        a.AddToBack(14);

        cout << "added six elements to the emd of list" << endl;
        cout << endl << a << endl;

        a.AddToBeginning(7);

        cout << "added an element to the beginning" << endl;
        cout << endl << a << endl;


        a.AddAtIndex(4, 123);

        cout << "added an element by index 4" << endl;
        cout << a << endl;

        cout << "Search 123 in list: " << a.Search(123) << endl << endl;

        cout << "Size of list: " << a.getSize() << endl << endl;

        cout << "IS empty: " << a.IsEmpty() << endl << endl;

        a.DeleteFromBeginning();

        cout << "deleted an object from the beginning" << endl;
        cout << a << endl;

        a.DeleteFromEnd();

        cout << "deleted an object from the end" << endl;
        cout << a << endl;

        a.DeleteAtIndex(4);

        cout << "deleted an obj by index 4" << endl;
        cout << a << endl;

        cout << "used operator[] with index 2" << endl;
        cout << a[2] << endl << endl;

        cout << "used operator[] with index 100" << endl;
        cout << a[100] << endl;
    }
    catch (const out_of_range &e){
        cerr<<e.what()<<endl;
    }
}


int main() {
    //exampleSingleList();
    //exampleDoubleList();


}
