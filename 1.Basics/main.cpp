#include <iostream>
int main(){
    int* p = new int[10];
    for (int i = 0; i < 10; i++){
        p[i] = i;
    }
    for (int j = 0; j < 10; j++){
        std::cout << p[j] << std::endl;
    }
    return 0;
}
