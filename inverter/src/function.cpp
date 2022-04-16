#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    int ln = lista.size();
    for(i=0;i<ln/2;i++){
    std::swap(lista[i], lista[ln-i-1]);
  }
}
