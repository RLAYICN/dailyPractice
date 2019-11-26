#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	string str;
	int size = strs.size();
	str = size?strs[0]:"";
	for(int i = 0; i < size; i ++){
		for(int j = 0; j < str.size(); j ++){
			if(str[j] == strs[i][j])
				continue;
			else{
				str = str.substr(0,j);
				break; 
			}
		}
	}
	return str; 
}

int main(){
	string str;
	vector<string> strs;
	for(int i = 0; i < 3; i ++){
		getline(cin,str);
		strs.push_back(str);
	}
	str = longestCommonPrefix(strs);
	cout << str << endl;
	return 0;
}
