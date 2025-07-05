#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    // Iterating by popping elements (destroys stack)
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    //swap in stack = suppose their are two stacks a & b the value of a will be transfered to b and a will be empty

    std::stack<int> s3;
    s3.push(10);
    s3.push(20);
    s3.push(30);
    std::stack<int> s2;
    s2.swap(s3);

    std::cout << "size a stack s3 after swap()" << s3.size()<< std::endl;
    std::cout << "size a stack s2 after swap()" << s2.size()<< std::endl;

    return 0;
}
