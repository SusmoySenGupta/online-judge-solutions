/*
	author: Susmoy Sen Gupta
	email: susmoy.cse@gmail.com
	github: github.com/SusmoySenGupta

	Judge: Leetcode
	problem no: ransom-note
	problem name: 
	problem link: https://leetcode.com/problems/ransom-note

	Tags: Array, Hashmap
    
    Technique, time & space complexity: 
    Bruteforce
    Runtime: 8 ms, faster than 98.23% of C++ online submissions for Ransom Note.
    Memory Usage: 8.8 MB, less than 39.42% of C++ online submissions for Ransom Note.
*/

#include <iostream>
#include <vector>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    vector<int> charactersInMagazine(26, 0);

    for (auto m : magazine)
        charactersInMagazine[m - 'a']++;

    for (auto r : ransomNote)
        if (charactersInMagazine[r - 'a'])
            charactersInMagazine[r - 'a']--;
        else
            return false;

    return true;
}

int main()
{


    return 0;
}
