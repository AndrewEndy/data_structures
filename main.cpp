#include <iostream>
#include "Lists/SinglyLinkedList.h"
#include "Lists/DoubleLinkedList.h"
#include "Lists/Queue.h"
#include "Lists/InputRestrictedQueue.h"
#include "Lists/Stack.h"
#include "Lists/QueueOnMassifs.h"
#include "Lists/InputRestrictedQueueOnMassifs.h"
#include "Lists/StackOnMassifs.h"

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
void exampleQueue(){
    try{
        Queue<int> a;
        cout<<"is empty: "<<a.IsEmpty()<<endl;

        cout<<"Enqueue:"<<endl;
        a.Enqueue(4);
        a.Enqueue(7);
        a.Enqueue(12);
        cout<<a<<endl;

        cout<<"Dequeue: "<<a.Dequeue()<< endl<<a<<endl;

        cout<<"Peek: "<<a.Peek()<<endl<<a<<endl;

        cout<<"Size: "<<a.getSize()<<endl;

        cout<<"is empty: "<<a.IsEmpty()<<endl;

        cout<<"Dequeue: "<<a.Dequeue()<< endl<<a<<endl;
        cout<<"Dequeue: "<<a.Dequeue()<< endl<<a<<endl;
        a.Dequeue();
    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}
void exampleInputRestrictedQueue(){
    try{
        InputRestrictedQueue<int> a;
        cout<<"Enqueue: "<<endl;
        a.Enqueue(12);
        a.Enqueue(5);
        a.Enqueue(8);
        a.Enqueue(15);
        a.Enqueue(3);

        cout<<a<<endl;

        cout<<"Dequeue: "<<a.Dequeue()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;

        cout<<"Peek: "<<a.Peek()<<" --- "<<a<<endl;
        cout<<"Peek from end: "<<a.PeekFromEnd()<<" --- "<<a<<endl;

        cout<<"is empty: "<<a.IsEmpty()<<endl;

        cout<<"size: "<<a.getSize()<<endl;

        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}
void exampleStack(){
    try{
        Stack<int> a;
        cout<<"Push: "<<endl;
        a.Push(12);
        cout<<a<<endl;
        a.Push(7);
        cout<<a<<endl;
        a.Push(9);
        cout<<a<<endl;
        a.Push(15);
        cout<<a<<endl;
        a.Push(4);
        cout<<a<<endl;

        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Peek: "<<a.Peek()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Peek: "<<a.Peek()<<" --- "<<a<<endl;

        cout<<"is empty: "<<a.IsEmpty()<<endl;
        cout<<"size: "<<a.getSize()<<endl;

        cout<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;

    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}
void exampleQueueOnMassifs(){
    try{
        QueueOnMassifs<int> a;
        cout<<"is empty: "<<a.isEmpty()<<endl;

        cout<<"is full: "<<a.isFull()<<endl;

        cout<<"Enqueue:"<<endl;
        a.Enqueue(4);
        a.Enqueue(7);
        a.Enqueue(12);
        cout<<a<<endl;

        cout<<"Dequeue: "<<a.Dequeue()<< endl<<a<<endl;

        cout<<"Peek: "<<a.Peek()<<endl<<a<<endl;

        cout<<"Size: "<<a.getSize()<<endl;

        cout<<"is empty: "<<a.isEmpty()<<endl;

        cout<<"Dequeue: "<<a.Dequeue()<< endl<<a<<endl;
        cout<<"Dequeue: "<<a.Dequeue()<< endl<<a<<endl;
        a.Dequeue();

//        cout<<"Enqueue: "<<endl;
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        cout<<a;
//
//        cout<<"is full: "<<a.isFull()<<endl;

    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}
void exampleInputRestrictedQueueOnMassifs(){
    try{
        InputRestrictedQueueOnMassifs<int> a;
        cout<<"Enqueue: "<<endl;
        a.Enqueue(12);
        a.Enqueue(5);
        a.Enqueue(8);
        a.Enqueue(15);
        a.Enqueue(3);

        cout<<a<<endl;

        cout<<"Dequeue: "<<a.Dequeue()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;

        cout<<"Peek: "<<a.Peek()<<" --- "<<a<<endl;
        cout<<"Peek from end: "<<a.PeekFromEnd()<<" --- "<<a<<endl;

        cout<<"is empty: "<<a.isEmpty()<<endl;

        cout<<"size: "<<a.getSize()<<endl;

        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;
        cout<<"DeleteFromEnd: "<<a.DeleteFromEnd()<<" --- "<<a<<endl;

//        cout<<"Enqueue: "<<endl;
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        a.Enqueue(12);
//        cout<<a;
//
//        cout<<"is full: "<<a.isFull()<<endl;
    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}
void exampleStackOnMassifs(){
    try{
        StackOnMassifs<int> a;
        cout<<"Push: "<<endl;
        a.Push(12);
        cout<<a<<endl;
        a.Push(7);
        cout<<a<<endl;
        a.Push(9);
        cout<<a<<endl;
        a.Push(15);
        cout<<a<<endl;
        a.Push(4);
        cout<<a<<endl;

        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Peek: "<<a.Peek()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Peek: "<<a.Peek()<<" --- "<<a<<endl;

        cout<<"is empty: "<<a.isEmpty()<<endl;
        cout<<"size: "<<a.getSize()<<endl;

        cout<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;
        cout<<"Pop: "<<a.Pop()<<" --- "<<a<<endl;

//        cout<<"Enqueue: "<<endl;
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        a.Push(12);
//        cout<<a;
//
//        cout<<"is full: "<<a.isFull()<<endl;

    }
    catch (const runtime_error &e){
        cerr<<e.what()<<endl;
    }
}


int main() {
    //exampleSingleList();
    //exampleDoubleList();
    //exampleQueue();
    //exampleInputRestrictedQueue();
    //exampleStack();
    //exampleQueueOnMassifs();
    //exampleInputRestrictedQueueOnMassifs();
    //exampleStackOnMassifs();
}
