#include "function.h"
#include <vector>
#include <iostream>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max ( int V[], size_t n ){

  int j;
  int i = 0;
  for (i = 0; i < n; i++ ) {
      std::cin>>V[i]; // a função não deve receber valores
   } 

  int menor_valor = V[0];
  int maior_valor = V[0];
  int menor_posicao = V[0];
  int maior_posicao = V[0];
  if (n==0){
    return std::make_pair(-1,-1);
  }
  for(j = 0; j < n; j++) {
        if(V[j] < menor_valor) {  
            menor_valor = V[j];
            menor_posicao = j;
        }
        if(V[j] >= maior_valor) { 
            maior_valor = V[j];
            maior_posicao = j;
        } 
    }
   return std::make_pair(menor_posicao,maior_posicao); 
}
