#include <iostream>

void sol(){
    int n, k, m;
    std::cin >> n >> k >> m;
    if (k > m){
        std::cout << "NO\n";
    }
    else if (k < m){
        std::cout << "YES\n";
        for (int i = 0; i < n - 1; i++){
            std::cout << 1 << " ";
        }
        std::cout << m + 1 - k;
    }
    else if (k == m){
        std::cout << "YES\n";
        for (int i = 0; i < n; i++){
            std::cout << 1 << " ";
        }
    }
    std::cout << "\n";
}

int main(){
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++){
        sol();
    }
    return 0;
}