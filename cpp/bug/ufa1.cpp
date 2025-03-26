#include <iostream>

class Test {
public:
    void show() {
        std::cout << "Active object!" << std::endl;
    }
};

int main() {
    Test* ptr = new Test();
    delete ptr;
    ptr = nullptr; // Prevent use after release
    if (ptr) {
        ptr->show();
    } else {
        std::cout << "Invalid pointer!" << std::endl;
    }
    return 0;
}
