// Pseudocode Project12
// Start
// Declarations
// num dollars
// output "Please enter the a whole dollar amount (no cents!). Input
//0 to terminate: "
// input dollars
// while ( dollars <> 0)
// displayBills(dollars)
// output "Please enter the a whole dollar amount (no cents!).
//Input 0 to terminate: "
// input dollars
// endwhile
// Stop
//
//
//
// displayBills(num dollars)
// Declarations
// num ones
// num fives
// num tens
// num twenties
// num temp
// twenties = dollars / 20
// temp = dollars % 20
// tens = temp / 10
// temp = temp % 10
// fives = temp / 5
// ones = temp % 5
// output "The dollar amount of ", dollars, " can be represented by
//the following monetary denominations"
// output " Twenties: ", twenties
// output " Tens: ", tens
// output " Fives: ", fives
// output " Ones: ", ones
// return

#include <iostream>
using namespace std;

void displayBills(int dollars);

int main() {
    int dollars;
    cout << "Please enter the a whole dollar amount (no cents!). Input 0 to terminate: " << endl;
    cin >> dollars;

    while (dollars != 0){
        displayBills(dollars);
        cout << "Please enter the a whole dollar amount (no cents!). Input 0 to terminate: " << endl;
        cin >> dollars;
    }
    return 0;
}

void displayBills(int dollars){
    int ones, fives, tens, twenties, temp;

    twenties = dollars / 20;
    temp = dollars % 20;
    tens = temp / 10;
    fives = temp / 5;
    ones = temp % 5;
    cout << "The dollar amount of " << dollars << " can be represented by the following monetary denominations " << endl;
    cout << "Twenties: " << twenties << endl;
    cout << "Tens: " << tens << endl;
    cout << "Fives: " << fives << endl;
    cout << "Ones: " << ones << endl;
}
