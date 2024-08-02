#include<iostream>
#include<stack>
using namespace std;

void insert_in_sorted_stack(stack<int> &st,int &element){
    //base case --->>
    if(element > st.top() || st.empty()){
        st.push(element);
        return;
    }
    
        int temp = st.top();   
        st.top();

        //recursion --->>
        insert_in_sorted_stack(st,element);

        //backtracking ---->>
        st.push(temp);
   
}

int main(){


    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 12;

    insert_in_sorted_stack(st,element);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}