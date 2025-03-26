#include <iostream>

class Test {
public:
    void show() {
        std::cout << "Objeto ativo!" << std::endl;
    }
};

int main() {
    Test* ptr = new Test();
    delete ptr; // Object is moved
    ptr->show(); // Invalid pointer usage (Use-After-Free)
    return 0;
}

// The object is deleted, but the pointer is still used, leading to undefined behavior and possibly arbitrary code execution.
