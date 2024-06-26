#include <bits/stdc++.h>
using namespace std;

int main()
{

    // constructor chara likhle, 
        // "<<" s theke ss er dike jabe. bam pashe ss thakbe r daan pashe s thakbe
    
    // R print korar(word ber korar somoy ss stream theke ber hobe ">>") 
    
    


    string s;
    getline(cin, s);

    // ekhon stringstream ekta class nibo
    // ei class er ekta object nibo. jar name dibo ss

    // stringstream ss(s);
    // ss er pore first bracket ta hoilo stringstream class er ekta constructor. je kina parameter hishebe string ney.

    stringstream ss;
    // othobar constructor chara eivabeu likha jay
    // s theke ss er dike asteche
    ss << s; 

    string word;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    int number_of_words = 0;
    while (ss >> word)
    {
        number_of_words++;
        cout << word << endl;
    }

    cout << number_of_words << endl;

    return 0;
}