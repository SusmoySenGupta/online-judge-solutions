/* 
	problem no: 5A
	problem name: Chat Server's Outgoing Traffic
	problem link: https://codeforces.com/problemset/problem/5/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: May/24/2021 09:22
*/

#include<iostream>
int main()
{
	int users=0,total=0;
	std::string str;
	while(getline(std::cin, str))
		if(str[0] == '+') ++users;
		else if(str[0] == '-') --users;
		else total += users * (str.size() - str.find(':') - 1);
	std::cout<<total<<std::endl;
	return 0;
}
