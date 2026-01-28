// Leetcode Problem: 1910. Remove All Occurrences of a Substring
// Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include <iostream>
using namespace std;

void removeOccurrences(string& s,string part)
{
    while(s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
}

int main()
{
    string str, part;
    cout << "Enter the String: ";
    getline(cin, str);

    cout << "Enter the Substring to remove (part): ";
    getline(cin, part);

    removeOccurrences(str, part);

    cout << "String after removing all occurrences of the substring: " << str << endl;
    
    return 0;
}