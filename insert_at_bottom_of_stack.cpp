#include<iostream>
#include<stack>
using namespace std;
void insert_at_bottom(stack<int> &st , int &element){
    if(st.empty()){
        cout<<"Stack is empty, now you can push your element at bottom"<<endl;
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_at_bottom(st,element);
    st.push(temp);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int element = 50;
    insert_at_bottom(st,element);
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    


    
    



    return 0;
}