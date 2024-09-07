/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    double num1, num2 ;
    
    std::cout << "Masukkan 2 angka yang terpisah oleh spasi :"  << std::endl;
    std::cin >> num1 >> num2 ;
    
    if (num1 > num2) {
        std::cout << num1 << ">" << num2 << std::endl;
    }
    
    else if (num1 < num2) {
        std::cout << num1 << "<" << num2 << std::endl;
    }
    
    else {
        std::cout <<  num1 << "=" << num2 << std::endl;
    }
    return 0;
}