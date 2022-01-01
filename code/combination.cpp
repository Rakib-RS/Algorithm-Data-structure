#include<bits/stdc++.h>
#include <vector>

int main() {
    std::vector<int> test={1,2,3,4,5};
    while (next_combination(test.begin(), test.end(), 3)) {
        for (auto i : test) std::cout << i;
        std::cout << std::endl;
    }
}
