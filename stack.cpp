#include<iostream>
#include<string>

using namespace std;

class Stack{
    private:
        int top;
        int arr[5];

    public:
        Stack(){
            top = -1;
        for(int i=0; i < 5; i++){
            arr[i] = 0;
        }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }

        }

        bool isFull(){
            if(top==4){
                return true;
            }else{
                return false;
            }
        }

        void push(int val){
            if(isFull()){
                cout << "Stack Overflow";
            }else{
                top++;
                arr[top]=val;
            }
        }

        int pop(){
            if(isEmpty()){
                cout << "Stack Underflow";
                return 0;
            }else{
                int popvalue = arr[top];
                top--;
                return popvalue;
            }
        }

        int count(){
            return (top+1);
        }

        int peek(int position){
            
        }
}