#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    string text;
    getline(input, text);              

    reverse(text.begin(), text.end());

    stringstream ss(text);
    string word;
    int words = 0;

    while (ss >> word)                
        words++;

    output << text;

    cout << "Text: " << text << endl;
    cout << "Words: " << words << endl;

    input.close();
    output.close();

    return 0;
}
