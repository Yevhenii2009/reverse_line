#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    string text;
    getline(input, text);      

    reverse(text.begin(), text.end()); 

    int words = 1;
    for (char c : text)
        if (c == ' ') words++;

    output << text;               

    cout << "Text: " << text << endl;
    cout << "Words: " << words << endl;

    input.close();
    output.close();

    return 0;
}
