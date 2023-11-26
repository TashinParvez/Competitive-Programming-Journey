#include <iostream> 
#include <bits/stdc++.h> 
#include <limits>

int main() {
    
    std::cout << "int: " << std::numeric_limits<int>::max() << " (10^" << static_cast<int>(log10(std::numeric_limits<int>::max())) << ")" << std::endl;
    
    std::cout << "long long: " << std::numeric_limits<long long>::max() << " (10^" << static_cast<int>(log10(std::numeric_limits<long long>::max())) << ")" << std::endl;

    std::cout << "float: " << std::numeric_limits<float>::max() << " (10^" << static_cast<int>(log10(std::numeric_limits<float>::max())) << ")" << std::endl;

    std::cout << "double: " << std::numeric_limits<double>::max() << " (10^" << static_cast<int>(log10(std::numeric_limits<double>::max())) << ")" << std::endl;

    return 0;
}
