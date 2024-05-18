#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            if (!isalnum(s[i]))
                i++;
            else if (!isalnum(s[j]))
                j--;
            else if (tolower(s[i]) != tolower(s[j]))
                return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};