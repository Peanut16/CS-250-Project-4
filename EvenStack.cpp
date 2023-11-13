#include "EvenStack.h"
#include <iostream>
#include <stack>
using namespace std;

EvenStack::EvenStack()
{
    
}

EvenStack::EvenStack(stack<int>& evenStack)
{
    m_evenStack = evenStack;
}

void EvenStack::setEvenStack(stack<int>) {
    m_evenStack = evenStack;
}

bool EvenStack::empty() {
    return m_evenStack.empty();
}

size_t EvenStack::size() const {
    return m_evenStack.size();
}

int EvenStack::top() const {
    if (!evenStack.empty()) {
        return evenStack.top();
    }
}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        evenStack.push(value);
    }
}

void EvenStack::pop() {
    if (!evenStack.empty()) {
        evenStack.pop();
    }
}

void EvenStack::getEvenNumbers(stack<int>& inputStack)
{
    stack<int> tempStack;
    while (!inputStack.empty()) {
        int current = inputStack.top();
        inputStack.pop();
        if (current % 2 == 0) {
            evenStack.push(current);
        }
        tempStack.push(current);
        }

    while (!tempStack.empty()) {
        inputStack.push(tempStack.top());
        tempStack.pop();
    }
}

void EvenStack::emptyStack() {
    while (!evenStack.empty()) {
        std::cout << evenStack.top() << " ";
        evenStack.pop();
    }
    std::cout << std::endl;
}