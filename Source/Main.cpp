#include <iostream>
#include "AssemblyClass.h"

int main()
{
    std::cout << "15 + 12 = " << assembly_class::summarize(15, 12) << std::endl;
    std::cout << "10 - 1 = " << assembly_class::subtraction(10, 1) << std::endl;
    std::cout << "5 * 7 = " << assembly_class::multiply(5, 7) << std::endl;
    std::cout << "125 / 5 = " << assembly_class::divide(125, 5) << std::endl;

    std::cout << "2 > 1: " << assembly_class::more_than(2, 1) << std::endl;
    std::cout << "10 >= 10: " << assembly_class::more_than_equal(10, 10) << std::endl;
    std::cout << "15 < 5: " << assembly_class::less_than(15, 5) << std::endl;
    std::cout << "32 <= 31: " << assembly_class::less_than_equal(32, 31) << std::endl;
    std::cout << "1 = 1: " << assembly_class::equal(1, 1) << std::endl;
    std::cout << "3 != 3: " << assembly_class::not_equal(3, 3) << std::endl;

    std::cout << "not 1" << assembly_class::Not(1) << std::endl;                        
    std::cout << "59 and 15 is 11: " << assembly_class::And(59, 15) << std::endl;                  
    std::cout << "59 or 15 is 63: " << assembly_class::Or(59, 15) << std::endl;                    
    std::cout << "59 xor 15 is 52: " << assembly_class::Xor(59, 15) << std::endl << std::endl;     

    int a[] = { 0, 1, 2, 3, 4, 5, 6 };

    std::cout << "a[3]: " << assembly_class::array_index(a, 3) << std::endl << std::endl;

    std::cout << "Logic shift right (150 (10010110) on 2 pos is 37 (00100101)): " << assembly_class::logic_right(150, 2) << std::endl;  
    std::cout << "Logic shift left (150 (10010110) on 2 pos is 88 (01011000)): " << assembly_class::logic_left(150, 2) << std::endl;    

    std::cout << "Cicle shift right (150 (10010110) on 2 pos is 165 (10100101)): " << assembly_class::cicle_right(150, 2) << std::endl; 
    std::cout << "Cicle shift left (150 (10010110) on 2 pos is 90 (01011010)): " << assembly_class::cicle_left(150, 2) << std::endl;    
}
