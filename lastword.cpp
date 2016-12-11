#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

// Google Code Jam 2016: Round 1A - The Last Word

string makeUpper(string& s) {
    for(size_t i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

bool compareChar(char c1, char c2) {
    return c1 > c2;
}

void lastWord(string& s) {
    string upper = makeUpper(s);
    if (upper.length() == 1) {
        cout << upper << endl;
        return;
    }

    char temp = upper[0];
    string bigChar = "";
    string sub = "";
    sub += temp;

    for(size_t i = 1; i < upper.length(); i++) {
        if (compareChar(upper[i],temp)) {
            temp = upper[i];
            bigChar += temp;
        }
        else if (temp == upper[i]) {
            bigChar += upper[i];
        }
        else {
            sub += upper[i];
        }
    }
    sort(bigChar.rbegin(), bigChar.rend());
    cout << bigChar + sub << endl;
}

string word(string& s) {
    for(size_t i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

int main()
{
    int i = 1;
    int testCases;
    string input;

    cin >> testCases;

    while (i <= testCases && cin >> input) {
        cout << "Case #" << i << ": ";
        lastWord(input);
        i++;
    }

    return 0;
}
