#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creating stacks --->>
    stack<int>stack1;

    //insert element in the stack --->>
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    cout<<"Size of the stack is : "<<stack1.size()<<endl;

    //remove element from the stack --->>
    stack1.pop();

    //fetching the size of the stack --->>
    cout<<"Size of the stack is : "<<stack1.size()<<endl;

    if(stack1.empty()){
        cout<<"Given stack is not empty"<<endl;
    }
    else{
        cout<<"Given stack is not empty"<<endl;

    }

    //fetching top most element of the stack --->>
    cout<<stack1.top() <<endl;


    return 0;
}