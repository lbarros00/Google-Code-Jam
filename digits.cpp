#include <iostream>
#include <algorithm>
using namespace std;

// Google Code Jam 2016: Round 1B - Getting the Digits

string makeUpper(string& s) {
    for(size_t i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

string nozero(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'Z') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'O') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string notwo(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'W') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'O') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string nofour(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'O') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'U') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string nofive(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'F') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'V') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string nosix(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'S') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string noone(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'O') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'N') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}
string nonine(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'N') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'N') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string noeight(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'I') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'G') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'H') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string nothree(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'H') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

string noseven(string& s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'S') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'V') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'E') {
            s.erase(s.begin()+i);
            break;
        }
    }
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == 'N') {
            s.erase(s.begin()+i);
            break;
        }
    }
    return s;
}

bool fin(string& s, char c) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == c) {
            return true;
        }
    }
    return false;
}


void find_digits(string& s) {
    string upper = makeUpper(s);
    string emp = "";

    for(size_t i = 0; i <= upper.length()*2; i++) {
        if (fin(upper,'Z')) {
            emp += '0';
            upper = nozero(upper);
        }
        if (fin(upper,'W')) {
            emp += '2';
            upper = notwo(upper);
        }
        if (fin(upper,'U')) {
            emp += '4';
            upper = nofour(upper);
        }
        if (fin(upper,'X')) {
            emp += '6';
            upper = nosix(upper);
        }
        if (fin(upper,'G')) {
            emp += '8';
            upper = noeight(upper);
        }
    }

    while (upper.length()*2 > 0) {
        if (fin(upper,'O')) {
            emp += '1';
            upper = noone(upper);
        }
        if (fin(upper,'H')) {
            emp += '3';
            upper = nothree(upper);
        }
        if (fin(upper,'F')) {
            emp += '5';
            upper = nofive(upper);
        }

        if (fin(upper,'V')) {
            emp += '7';
            upper = noseven(upper);
        }
        if (fin(upper,'I')) {
            emp += '9';
            upper = nonine(upper);
        }
    }

    sort(emp.begin(), emp.end());
    cout << emp << endl;
}

int main()
{
    int i = 1;
    int testCases;
    string input;

    cin >> testCases;

    while (i <= testCases && cin >> input) {
        cout << "Case #" << i << ": ";
        find_digits(input);
        i++;
    }

    return 0;
}
