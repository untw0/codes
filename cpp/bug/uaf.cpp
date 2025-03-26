#include <iostream>

class Test {
public:
    void show() {
        std::cout << "Active object!" << std::endl;
    }
};

int main() {
    Test* ptr = new Test();
    delete ptr; // Object is moved
    ptr->show(); // Invalid pointer usage (Use-After-Free)
    return 0;
}
