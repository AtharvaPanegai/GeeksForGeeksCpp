#include "bits/stdc++.h"
using namespace std;

struct myStack
{
    stack<int> s;
    int minEle;

    void getMin()
    {
        if (s.empty())
        {
            cout << "Stack is Empty";
            return;
        }
        else
        {
            cout << "The min element is : " << minEle<<"\n";
            return;
        }
    }

    void push(int x)
    {
        if (s.empty())
        {
            s.push(x);
            minEle = x;
            cout << "the element pushed is : " << x << "\n";
            return;
        }
        else
        {
            if (x < minEle)
            {
                minEle = x;
                s.push(2 * x - minEle);
                cout << "the element pushed is : " << x << "\n";
                return;
            }
            else
            {
                s.push(x);
                cout << "the element pushed is : " << x << "\n";
            }
        }
    }

    void pop(){
        if(s.empty()){
            cout<<"Stack is Empty nothing to pop\n";
            return;
        }
        int t = s.top();
        s.pop();
        if(t<minEle){
            minEle = 2*minEle-t;
            cout<<"Popped element is : "<<minEle<<"\n";
            return;
        }
        else{
            cout<<"The popped element is : "<<t<<"\n";
            return;
        }
    }

    void peek(){
        if(s.empty()){
            cout<<"Stack is empty\n";
            return;
        }
        int t = s.top();
        (t<minEle)?cout<<minEle : cout<<t<<"\n";
        return;
    }
};

int main()
{
    myStack s;
    s.push(1);
    s.push(34);
    s.getMin();
    s.push(0);
    s.push(-34);
    s.push(123);
    s.push(5);
    s.getMin();
    return 0;
}