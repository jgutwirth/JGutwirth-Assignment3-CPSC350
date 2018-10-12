#include <iostream>
using namespace std;

template <class T>

class GenStack{
private:
    int size;
    int top;
    T* myArray;
    T* tempArray;

public:
    GenStack(){
        top = -1;
    }
    GenStack(T maxSize){
        myArray = new T[maxSize];
        size = maxSize;
        top = -1;
        tempArray = new T[maxSize];
    }
    ~GenStack(){
        delete myArray;
        delete tempArray;
        cout<<"Stack Deleted."<<endl;
    }
    bool isFull(){
        return(top == size-1);
    }
    bool isEmpty(){
        return(top == -1);
    }
    void Push(T item){
        if(isFull()){
            cout<<"Stack is full."<<endl;
            return;
        }
        myArray[++top] = item;
    }
    T Pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return NULL;
        }

        return myArray[top--];
    }
    T peek(){
        return myArray[top];
    }

    int increaseSize(int sizeToIncrease){
        tempArray = new T[size];

        for(int i=top;i>-1;i--){
            tempArray[i] = myArray[i];
        }

        size+=sizeToIncrease;
        myArray = new T[size];

        for(int i=top;i>-1;i--){
            myArray[i] = tempArray[i];
        }
        return size;
    }
};
