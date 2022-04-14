#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n ){
std::vector <unsigned int> v;
  
bool condicao = true;
int contador = 0;
int posicao_n = 0;

while(condicao){
   if(contador == 0 || contador == 1){
	  if (n>1){
	    v.push_back(1);
}
	  else{
	    return v;
	}
}
  else{
	  posicao_n = v[contador-1]+v[contador-2];
	    if (posicao_n < n){	
	      v.push_back(posicao_n);
}
	else{
		condicao=false;	
  }
}
  contador = contador +1;
}
  return v;
}