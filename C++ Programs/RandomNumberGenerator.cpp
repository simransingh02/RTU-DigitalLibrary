#include <iostream>

using namespace std;


int generate(int first_nr, int second_nr)
{
    return rand() % second_nr + first_nr;
}

int main()
{
    int first, second;

    cout << "             How to use               " << endl;
    cout << " _____________________________________" << endl;
    cout << "| To generate number simply type in   |" << endl;
    cout << "| two numbers between which generator |" << endl;
    cout << "| will generate random number. Enjoy! |" << endl;
    cout << " _____________________________________" << endl;

    cout << endl << "First number:";
    cin >> first;

    cout << "Second number:";
    cin >> second;

    cout << endl << "Your auto-generated number: " << generate(first, second) << endl;

    return 0;
}
