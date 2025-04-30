#include <iostream>
 
int main() {
 
    unsigned count = 0;
    std::cout << "Введите колличество строк: ";
    std::cin >> count;
 
    for (int i = 0; i < count; i++)
    {
        int sLength = 0;
        std::string str = "";
        std::cin >> str;
        
        sLength = str.length();
 
        if (sLength > 10)
        {
            std::cout << str[0] << (sLength - 2) << str[sLength - 1] << std::endl;
        } else
        {
            std::cout << str << std::endl;
        }
 
    }
}
