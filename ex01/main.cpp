#include "iter.hpp"

int main( void )
{
    int array1[] = { 1, 2, 3, 4, 5, 6, 7 };

    std::cout << "array1: " << std::endl;
    iter(array1, 7, &print);

    double array2[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };

    std::cout << "array2: " << std::endl;
    iter(array2, 7, &print);

    char array3[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };

    std::cout << "array3: " << std::endl;
    iter(array3, 7, &print);

    std::string array4[] = { "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete" };

    std::cout << "array4: " << std::endl;
    iter(array4, 7, &print);

    return 0;
}