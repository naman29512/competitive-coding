#include <iostream>
#include <algorithm>

void ans() {
    int a, n{0};
    std::string b;
    std::cin >> a >> b;
    for (int i = 1; i < a; i++){
        if (b[i] != b[i - 1]){
            n++;
        }
    }
    int l = n;
    for (int i = 1; i < a - 1; i++){
        int f = 0;
        if (b[i] != b[i + 1]){
            f--;
        }
        if (b[i] != b[i - 1]){
            f--;
        }
        if (b[i - 1] != b[i + 1]){
            f++;
        }
        if (l > n + f){
            l = n + f;
        }
    }
    std::cout << l << "\n";
}

int main() {
    int a;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        ans();
    }
    return 0;
}