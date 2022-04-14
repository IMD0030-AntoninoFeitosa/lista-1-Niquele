/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int m=0;
  int n=0;
  int termo_geral_pa = 0;
  int saida = 0;

  std::cin >> m ;
  std::cin >> n ;

  if(n==0){
    std::cout<<m<<std::endl;
  }
  else if (n>0){
    for(int i=1; i<=n+1; i++){
      termo_geral_pa = m +(n-1)*i; //formula PA
    }
    std::cout<<termo_geral_pa;
  }
  else if (n<0){
    for(int i=0; i<(n); i++){
      saida += m ;
      m--;
    }
    std::cout<<saida;
  }
return 0;
}