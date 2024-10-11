#include <iostream>
#include <stdio.hh>

void printf(std::string text) {
    std::cout << text << std::endl;
}

std::string scanf() {
    std::string txtin;
    std::cin >> txtin;
    return txtin;
}