#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int* array;
    int size;
    int top;

    Stack(int size){
        array = new int [size];
        this->size = size;
        this->top = -1;
    }

    void push(int data){
        if(top == size-1){
            cout<<"stack overflow"<<endl;
            return; 
        }else{
        top++;
        array[top] = data;
        }
    }


    void pop(){
         if(top == -1){
            cout<<"stack underflow, cannot remove further element"<<endl;
            return; 
        }
        else{
            top--;
        }
         
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    } 

    int getTop(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
        }
        return array[top];
        
    }

    int getSize(){
        return top+1;
    }

    void printStack(){
        cout<<"Stack elements are --->>"<<endl;
        for (int i = 0; i < size; i++)
        {
            cout<<array[i]<<" , ";
        }
        cout<<endl;
        
    }

};

void solve(stack<int> &st,int& pos,int &ans){
    if (pos == 1)
    {
        ans = st.top();
        return;
    }
    pos--;
    int temp = st.top();
    st.pop();
    solve(st,pos,ans);
    st.push(temp);
    
}

int getMiddle(stack<int>&st){
    int size = st.size();
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else {
    // cout<<"Stack is not empty"<<endl;
    int pos = 0;
    if(size & 1){
        pos = size/2+1;
    }
    else{
        pos = size/2;
    }
    int ans = -1;
    solve(st,pos,ans);
    return ans;
}
}

int main(){
    // static creating stacks --->>
    // stack<int>stack1;

    // static creating stacks --->>
    // Stack st(4);  

    //insert element in the stack --->>
    // st.push(12);
    // st.push(14);
    // st.push(16);
    // st.push(18);

    // printing stack elements ---->>
    // st.printStack();

    // cout<<"Size of the stack is : "<<st.getSize()<<endl;

    //remove element from the stack --->>
    // st.pop();

    //fetching the size of the stack --->>
    // cout<<"Size of the stack is : "<<st.getSize()<<endl;

    // if(st.isEmpty()){
    //     cout<<"Given stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Given stack is not empty"<<endl;

    // }

    //fetching top most element of the stack --->>
    // cout<<"Top element is : "<<st.getTop() <<endl;


    //Reversing string using stack --->>>

    // stack<char>stck2;
    // string str = "VIKAS";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     char ch = str[i];
    //     stck2.push(ch);
    // }

    // while (!stck2.empty())
    // {
    //     cout<<stck2.top();
    //     stck2.pop();
    // }


    //Gettinging middle element from the stack --->>
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    int ans = -1;

    int mid = getMiddle(st);
    cout<<"Middle Element : "<<mid<<endl;

    
    

    return 0;
}