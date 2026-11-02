#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>

using namespace std;

float gelu(float x)
{
    return (0.5 * x) * (1 + tanh(sqrt(2 / (M_PI)) * (x + (0.044715 * pow(x, 3)))));
}

void load_weights()
{
    fstream fs;

    fs.open("./weights/")
}

int main()
{

    return 0;
}