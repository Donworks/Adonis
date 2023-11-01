#include "Cards"
#include <iostream>
using namespace std;

string Card::to_string() const
{
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Ace" , "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "Queen", "King"};

    return rank_strings [rank] + " of " + suit_strings[suit];
}

int main()
{
    Card card(1, 11);
    cout << card.to_string() << endl;

    return = 0
}
