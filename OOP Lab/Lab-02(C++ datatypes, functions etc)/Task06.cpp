#include <iostream>
using namespace std;

bool isAnagram(string first, string last) {
    // transform the strings to lowercase
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(last.begin(), last.end(), last.begin(), ::tolower);

    // sort both strings
    sort(first.begin(), first.end());
    sort(last.begin(), last.end());

    // compare the sorted strings
    return first == last;
}

int main() {
    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    if (isAnagram(firstName, lastName)) {
        cout << "The first and last name are anagrams." << endl;
    } else {
        cout << "The first and last name are not anagrams." << endl;
    }
    return 0;
}