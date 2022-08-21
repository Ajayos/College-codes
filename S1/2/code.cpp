#include<iostream.h>
using namespace std;
int main()
{
    int number1,number2,add,substract,multipication,divide; /// inputing environments
    cin>>"Enter number1">>number1; /// inputing number1
    cin>>"Enter number2">>number2; /// inputing number2
    add = number1 +number2; /// adding number1 and number2
    substract = number1 - number2; ///subtract number1 and number2 
    multipication = number1 * number2; /// multiplying number1 and number2
    divide = number1 / number2; /// divide number1 and number2
    cout<<"add = "<<add<<"substract = "<<substract<<"multipication = "<<multipication<<"divide = "<<divide; /// printing all outputs
    return 0;
}