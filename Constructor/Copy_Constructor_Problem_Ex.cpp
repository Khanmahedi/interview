#include <iostream>

class MyClass {
private:
    int* data;

public:
    // Constructor
    MyClass() {
        data = new int;
        *data = 0;
    }

    // Destructor
    ~MyClass() {
        delete data;
    }

    // Setter for data
    void setData(int value) {
        *data = value;
    }

    // Getter for data
    int getData() const {
        return *data;
    }
};

int main() {
    // Create object A
    MyClass A;
    A.setData(5);

    // Create object B and copy from A
    MyClass B = A;

    // Modify data in A
    A.setData(10);

    // Print data from both objects
    std::cout << "Data in A: " << A.getData() << std::endl;
    std::cout << "Data in B: " << B.getData() << std::endl;

    return 0;
}
