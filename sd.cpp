//find sd (homework)
#include <iostream>


double calculateMean(const double data[], int size) {
    double sum = 0.0;
    for(int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum / size;
}


double customSqrt(double number) {
    if (number < 0) return -1; 
    double guess = number;
    double epsilon = 0.00001; 

    while (true) {
        double nextGuess = 0.5 * (guess + number / guess);
        if (std::abs(nextGuess - guess) < epsilon) {
            return nextGuess;
        }
        guess = nextGuess;
    }
}


double calculateStandardDeviation(const double data[], int size) {
    double mean = calculateMean(data, size);
    double variance = 0.0;

    for(int i = 0; i < size; ++i) {
        variance += (data[i] - mean) * (data[i] - mean);
    }
    
    variance /= size;

    return customSqrt(variance);
}

int main() {
  
    double data[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = sizeof(data) / sizeof(data[0]);

    
    double stdDev = calculateStandardDeviation(data, size);
    std::cout << "Standard Deviation: " << stdDev << std::endl;

    return 0;
}
