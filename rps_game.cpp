#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int user = 0;
    int cpu = 0;

    // Initialize the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    cout << "Rock Paper Scissors shoot" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cin >> user;

    // Validate user input
    if (user < 1 || user > 3) {
        cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
        return 1;  // Exit the program with an error code
    }

    if (user == 1) {
        cout << "You choose Rock!" << endl;
    } else if (user == 2) {
        cout << "You choose Paper!" << endl;
    } else {
        cout << "You choose Scissors!" << endl;
    }

    cpu = rand() % 3 + 1;

    if (cpu == 1) {
        cout << "CPU chooses Rock" << endl;
    } else if (cpu == 2) {
        cout << "CPU chooses Paper" << endl;
    } else {
        cout << "CPU chooses Scissors" << endl;
    }

    if (user == cpu) {
        cout << "It's a tie" << endl;
    } else if ((user == 1 && cpu == 3) || (user == 2 && cpu == 1) || (user == 3 && cpu == 2)) {
        cout << "You win!" << endl;
    } else {
        cout << "CPU wins!" << endl;
    }

    return 0;
}
