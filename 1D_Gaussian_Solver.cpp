#include <iostream>
#include <math.h>

using namespace std;

double f(double mu, double sigma2, double x)
{
    /*
     * Code the 1 - dimensional Guassian 
     */
     // Probability variable 
    double prob;
    double sigma = sqrt(sigma2);
    prob = 1 / (sigma * sqrt(2*M_PI)) * exp (-0.5 * pow((x - mu), 2.0) / sigma2);
    return prob;
}

int main()
{
    double probability = f(10.0, 4.0, 8.0);
    cout << "Probability is: " << probability << ", or " << probability * 100 << "%" << endl;
    return 0;
}
