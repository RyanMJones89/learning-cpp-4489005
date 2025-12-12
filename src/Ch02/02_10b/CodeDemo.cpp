// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt;
    unsgn = sgn; // this will run but will not provide correct inforatmion because an unsigned int can't be converted to a signed in 

    std::cout << "float: " << std::endl;
    std::cout << "int32: " << std::endl;
    std::cout << "uint32: " << std::endl;
    return (0);
}
