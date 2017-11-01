
#include <iostream>
#include <cstdlib>
#include <ctime>
#define RED 0
#define GREEN 1
#define BLUE 2
#define YELLOW 3
using namespace std;
int main() {
    int die;
    int count = 0;
    int randomNumber;
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    const string colors[4] = { "RED", "GREEN", "BLUE", "YELLOW"};
    while (count < 10) {
        randomNumber = rand();
        die = (randomNumber % 4);
        cout << count << ":" << colors[die] << endl;
        count++;
}
return 0; }
