#include<iostream>
#include<string>
#include<stack>
using namespace std; 

bool isValid(string s) {
	stack<char> left;
    for(int i = 0; i < s.size(); i ++){
   		if(s[i] == 40 || s[i] == 123 || s[i] == 91){
   			left.push(s[i]);
		}	
		else if(!left.empty() && s[i] - left.top() <= 3 && s[i] - left.top() > 0){
			left.pop();
		}
		else
		return false;
    }   
    if(!left.empty())
        return false;
    else
        return true;
}

int main(){
	string s;
	while(getline(cin,s)){
		cout << isValid(s) << endl;
	}
	return 0;
}
/*
{}{}[[]]
({}[])
( -- 40
{ -- 123
[ -- 91
) -- 41
} -- 125
] -- 93
*/
