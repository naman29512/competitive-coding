#include <iostream>
#include <cmath>

void sol(){
    int n;
    std::cin >> n;
    if (n == 2){
        std::cout << -1 << " ";
    }
    else if(n == 1){
        std::cout << 1 << " ";
    }
    else{
        std::cout << 1 << " " << 2 << " ";
        for (int i = 0; i < n - 2; i++){
            std::cout << 3LL * (1LL << i) << " ";
        }
    }
    std::cout << "\n";
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int a;
    std::cin >> a;
    for(int i = 0; i < a; i++){
        sol();
    }
    return 0;
}