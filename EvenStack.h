#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>
using namespace std;

class EvenStack
{
    private:
        stack<int> m_evenStack;

    public:
        EvenStack();
        EvenStack(stack<int>&);
        void getEvenNumbers(stack<int>);
        void emptyStack();
        void pop();
        void push(int);
        int top();
        void setEvenStack(stack<int>);
        

};
#endif // EVENSTACK_H