#include <vector>
#include <iostream>
#include "cube.h"

int main(){
    std::vector <int> v;
    for(int i = 0; i < 100; i++){
        v.push_back(i*i);
    }

    std::cout << v[6] << std::endl;
    return 0;
}