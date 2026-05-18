// leetcode 125 valid palindrome
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
    int st = 0, end = s.length() - 1;
    if (end == 0)
        return true;
    while (st < end)
    {
        if (!isalnum(s[st]))
        {
            st++;
        } else if (!isalnum(s[end])) {
            end--;
        } else {
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    cout << isPalindrome(s) << endl;

    return 0;
}