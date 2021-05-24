/* 
	problem no: 208A
	problem name: Dubstep
	problem link: https://codeforces.com/contest/208/problem/A
	author: Susmoy Sen Gupta
	Status: __Accepted__
	Solved at: Apr/18/2020 13:54
*/
input_string = input()
msg = input_string.split("WUB")
output_string = ""
for i in msg:
    if i!='':
        output_string += i + " " 
print(output_string.strip())
