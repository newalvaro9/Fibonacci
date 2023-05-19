#include <iostream>

int main()
{
    int max = 6000;

    int output = 0;
    int latest1 = 1;

    do
    {
        std::cout << output << " ";

        output = latest1 + output;
        latest1 = output - latest1;
    } while (output < max);

    return 0;
}