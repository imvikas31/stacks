#include<iostream>
#include<stack>

using namespace std;

void insert_at_bottom(stack<int> &st , int &element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_at_bottom(st,element);
    st.push(temp);
}

void reverse_stack(stack<int> &st){
    if(st.empty()){
        return;
    }
    else{
        int temp = st.top();
        st.pop();
        reverse_stack(st);
        insert_at_bottom(st,temp);
    }
    
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    reverse_stack(st);
    while (!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}