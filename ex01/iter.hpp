#include <iostream>

template < typename T >
void    iter( T *array, size_t lenght, void (*f)(T &) )
{
    for ( size_t i = 0; i < lenght; i++ )
        f( array[i] );
}

template < typename T >
void    print( T &i )
{
    std::cout << i << std::endl;
}