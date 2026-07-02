#include <iostream>

// This tells main that pointer() is defined in another file
// void pointer(); 
void Increment( int& value ) {
    value++;
}
void classes();

int main() {
    // int values = 8;
    // int* ptr = &values;

    int a = 5;
    Increment(a);
    std::cout << "Value of a after increment: " << a << std::endl;



    // std::cout << "Value: " << values << std::endl; 
    // std::cout << "Pointer address: " << ptr << std::endl; 
    // std::cout << "Dereferenced pointer value: " << *ptr << std::endl; 

    // pointer(); // This will now link to your other file!
    // This will now link to your other file!

    classes();


    return 0;
}
