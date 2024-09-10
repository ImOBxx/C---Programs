#include <iostream>

int main() {
    int var = 10;        // A normal integer variable
    int* ptr = &var;     // A pointer variable that stores the address of 'var'

    std::cout << "Value of var: " << var << std::endl;       // Output the value of 'var'
    std::cout << "Address of var: " << &var << std::endl;    // Output the address of 'var'
    std::cout << "Value stored in ptr: " << ptr << std::endl; // Output the address stored in 'ptr'
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Output the value pointed to by 'ptr'

    *ptr = 20; // Change the value of 'var' using the pointer

    std::cout << "New value of var: " << var << std::endl; // Output the new value of 'var'

    return 0;
}
