#include <iostream>

template< typename T >
void swap( T &example1, T &example2 ) {
    T temp = example1;
    example1 = example2;
    example2 = temp;
}

template< typename T >
T       min( T &example1, T &example2 ) {
    if(example1<example2)
        return(example1);
    return (example2);
}

template< typename T >
T       max( T &example1, T &example2 ) {
    if(example1>example2)
        return(example1);
    return (example2);
}