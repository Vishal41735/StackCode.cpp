#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
      int *arr;
      int size;
      int top;
  Stack(int size){
      arr = new int[size];
      this->size = size;
      top = -1;
    
  }
void push(int data){
  if(size-top >1){
    top++;
    arr[top] = data;
  }
  else{
    cout<<"Stack is overflow"<<endl;
  }
    
  
  
}
void pop(){
  if(top == -1){
    cout<<"Stack is empty";
  }
  else{
    top--;
  }
  
}
int gettop(){
  
  
}
int getsize(){
  
}

bool isempty(){
  
}
      

};






int main(){


  

//   // defined Stack by using Stl function;;;
//   stack<int> s;
//   s.push(10);
//   s.push(200);
//   s.push(300);
//   s.push(400);

//   cout<<"top element of an Stack is  : "<<s.top()<<endl;
//   cout<<s.size();
//   cout<<endl;
//   cout<<"Stack is empty or  not :: "<<s.empty()<<endl;


//   s.pop();

//   cout<<"by using pop function the top element is  :  "<<s.top()<<endl;




// cout<<"Whole array traversing  :  ";

//  while(!s.empty()){
//    cout<<s.top()<<"  ";
//    s.pop();
//  } 
  
  
}