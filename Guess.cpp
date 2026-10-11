#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    cout << "Random Number: " << randomNumber << endl;

    return 0;
}