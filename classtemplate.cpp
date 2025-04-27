#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;  

public:
    void push(const T& element) {
        elements.push_back(element);
    }

    void pop() {
        if (elements.empty()) {
            std::cout << "Stack is empty, cannot pop." << std::endl;
            return;
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            std::cout << "Stack is empty, no top element." << std::endl;
            exit(1);  
        }
        return elements.back();
    }

    bool isEmpty() const {
        return elements.empty();
    }

    size_t size() const {
        return elements.size();
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Top element of intStack: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;

    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");

    std::cout << "Top element of stringStack: " << stringStack.top() << std::endl;
    stringStack.pop();
    std::cout << "Top element after pop: " << stringStack.top() << std::endl;

    return 0;
}
