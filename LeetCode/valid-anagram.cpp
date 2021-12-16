/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: valid-anagram
	problem name: Valid Anagram
	problem link: https://leetcode.com/problems/valid-anagram

	Tags: Array, Hashmap
    
    Technique, time & space complexity: 
    Bruteforce
    Runtime: 8 ms, faster than 82.66% of C++ online submissions for Valid Anagram.
    Memory Usage: 7.3 MB, less than 44.13% of C++ online submissions for Valid Anagram.

    Sorting
    Runtime: 12 ms, faster than 52.56% of C++ online submissions for Valid Anagram.
    Memory Usage: 7.4 MB, less than 44.13% of C++ online submissions for Valid Anagram.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> check(26, 0);

    for (auto ch : s)
        check[ch - 'a']++;

    for (auto ch : t)
    {
        if (check[ch - 'a'] == 0)
            return false;
        check[ch - 'a']--;
    }

    return true;
}

bool isAnagram2(string s, string t)
{
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main()
{

    return 0;
}
