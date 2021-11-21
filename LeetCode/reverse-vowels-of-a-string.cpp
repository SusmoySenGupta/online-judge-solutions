/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: 345. reverse-vowels-of-a-string
	problem name: 345. Reverse Vowels of a String
	problem link: https://leetcode.com/problems/reverse-vowels-of-a-string

	Tags: Array
    
    Technique, time & space complexity: 
    Runtime: 8 ms, faster than 69.75% of C++ online submissions for Reverse Vowels of a String.
    Memory Usage: 8.5 MB, less than 12.27% of C++ online submissions for Reverse Vowels of a String.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;

    return false;
}

string reverseVowels(string s)
{
    vector<int> vowels;

    for (auto i : s)
        if (isVowel(i))
            vowels.push_back(i);

    int i = 0, j = vowels.size() - 1;

    while (i < j)
        swap(vowels[i++], vowels[j--]);

    for (int i = 0, j = 0; i < s.size(); i++)
        if (isVowel(s[i]))
            s[i] = vowels[j++];

    return s;
}

int main()
{
    string s = "hello";

    cout << "Output: " << reverseVowels(s) << endl;
    return 0;
}
