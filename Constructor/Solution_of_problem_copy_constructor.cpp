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

    // Copy constructor
    MyClass(const MyClass& other) {
        // Allocate new memory and copy data
        data = new int;
        *data = *other.data;
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

    // Create object B and copy from A using the copy constructor
    MyClass B = A;

    // Modify data in A
    A.setData(10);

    // Print data from both objects
    std::cout << "Data in A: " << A.getData() << std::endl;
    std::cout << "Data in B: " << B.getData() << std::endl;

    return 0;
}

/*In this modified code, I've added a copy constructor to MyClass. This copy constructor
 creates a new instance of MyClass and allocates memory for data, copying the value from
  the data member of the object being copied (other). This ensures that each object 
has its own separate memory allocation for data, preventing the issues that would arise from shallow copying.*/