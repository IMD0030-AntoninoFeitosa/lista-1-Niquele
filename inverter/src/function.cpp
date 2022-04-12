#include "function.h"
#include <iostream>
#include <array>
#include <vector>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    int primeiro_termo = 0;
    int segundo_termo = 1;
    int n_termo = 0;
  
    std::vector<unsigned int> v;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            v.push_back(primeiro_termo);
            continue;
        }
        if(i == 2) {
            v.push_back(segundo_termo);
            continue;
        }
        n_termo = primeiro_termo + segundo_termo;
        primeiro_termo = segundo_termo;
        segundo_termo = n_termo;

        v.push_back(n_termo);
    }

    return v;
}