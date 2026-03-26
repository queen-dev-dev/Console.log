// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Terminal{
    public:
      void log(string message){
        cout << message << endl;}
};

int main(void){
    Terminal Console;
    Console.log("sigma!");
    return 0;
}
