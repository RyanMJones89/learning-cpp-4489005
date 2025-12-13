// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;    // -7.66
    sgn = flt;      // -7
    unsgn = sgn;    // this will run but will not provide correct information because an unsigned int can't be converted to a signed in 

    std::cout << "float: " << flt << std::endl;
    std::cout << "int32: " << sgn << std::endl;
    std::cout << "uint32: " << (int32_t)unsgn << std::endl; // casting the unsigned int to int32_t now shows -7
    return (0);
}
