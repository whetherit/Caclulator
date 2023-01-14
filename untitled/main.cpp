#include "iostream"
int main(){
    long long a, b, c;
    char d;
   std::cout << "(support: +, -, *, /)" << std::endl << "Write 1 nunmber >> ";
   std::cin >>a;
   std::cout << "Write 2 nunmber> >";
   std::cin >>b;
   std::cout << "Choice >>";
   std::cin >> d;
   if (d == '+')
   {
        c = a + b;
        std::cout << c;
    }
   if (d == '-')
   {
       c = a - b;
       std::cout << c;
   }
    if (d == '*')
    {
        c = a * b;
        std::cout << c;
    }
    if (d == '/')
    {
        c = a / b;
        std::cout << c;
    }
    if (d != '+' && d != '-' && d != '*' && d != '/')
        std::cout << "ERROR";
}








