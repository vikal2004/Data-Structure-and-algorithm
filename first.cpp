#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *arr;
    int size;
    int top;
    public:
    Stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }

    //push
void push(int value){
    if(top==size-1){
          cout<<"Stack overflow";
          return;
    }else{
        top++;
        arr[top]=value;
        cout<<"pushed"<< " "<<value<<" "<<"into the stack"<<endl;
    }
}

//pop
void pop(){
    if(top==-1){
        cout<<"Stack underflow";
        return;
    }else{
        cout<<"popped"<<arr[top]<<endl;
        top--;
    }
}

//peek
int peek(){
    if(top==-1){
        cout<<"stack is empty";
        return -1;
    }else{
      return arr[top];
    }
}

//isEmpty
bool isEmpty(){
    return top==-1;
}


//isSize
int IsSize(){
    return top+1;
}
};


int main(){
Stack S(5);
S.push(1);
S.push(2);
S.push(3);
S.push(6);




cout<<S.peek()<<endl;
cout<<S.isEmpty()<<endl;
cout<<S.IsSize()<<endl;
}