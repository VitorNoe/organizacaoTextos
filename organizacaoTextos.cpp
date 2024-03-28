#include <iostream>
#include <string>

int main() {
    std::string nome, corFavorita;
    int idade;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cin.ignore();

    std::cout << "Digite sua cor favorita: ";
    std::getline(std::cin, corFavorita);

    printf("\033[1;32mSeu nome é: %s\n", nome.c_str());
    printf("\033[1;33mSua idade é: %d anos\n", idade);
    printf("\033[1;34mSua cor favorita é: %s\n", corFavorita.c_str());

    std::cout << "\033[1;35m\n"
                  "____                  __     __             _ \n"       
                 "| __ )  ___ _ __ ___   | |   / |(_)_ __   __| | ____ \n"  
                 "|  _ | / _ |  _ ` _ |   | | / / | |  _ | / _  |/ _  | \n"
                 "| |_) |  __/ | | | | |   | V /  | | | | | (_| | (_) | \n"
                 "|____/ |___|_| |_| |_|    |_/   |_|_| |_|(____|____/ \n" 
                 "\033[0m"; 

    return 0;
}