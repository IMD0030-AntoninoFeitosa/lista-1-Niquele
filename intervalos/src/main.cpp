/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
  int n;
  int intervalo_1 = 0;
  int intervalo_2 = 0;
  int intervalo_3 = 0;
  int intervalo_4 = 0;
  double fora_intervalo = 0;
  
  while(std::cin >> std::ws >> n) {
    if (n>=0 && n<25){
      intervalo_1++;
    }
    else if (n>=25 && n<50){
      intervalo_2++;
    }
    else if (n>=50 && n<75){
      intervalo_3++;
    }
    else if (n>=75 && n<100){
      intervalo_4++;
    }
    else{
      fora_intervalo++;
    }    
}
  double soma_total = intervalo_1+intervalo_2+intervalo_3+intervalo_4+fora_intervalo;
  double porce_1 = (intervalo_1/soma_total)*100;
  double porce_2 = (intervalo_2/soma_total)*100;
  double porce_3 = (intervalo_3/soma_total)*100;
  double porce_4 = (intervalo_4/soma_total)*100;
  double porce_5 = (fora_intervalo/soma_total)*100;
  
  std::cout << std::setprecision(4) << porce_1 << std::endl;
  std::cout << std::setprecision(4) << porce_2<< std::endl;
  std::cout << std::setprecision(4) << porce_3<< std::endl;
  std::cout << std::setprecision(4) << porce_4<< std::endl;
  std::cout << std::setprecision(4) << porce_5<< std::endl;
}