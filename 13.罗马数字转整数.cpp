#include<iostream>
#include<string>
using namespace std;

int romanToInt(string s){
	int sum = 0, tem = 0;
	for(int i = 0; i <= s.size(); i ++){
		int cur = 0;
		if(i < s.size()){
			switch(s[i]){
				case 73: cur = 1;break;
				case 86: cur = 5;break;
				case 88: cur = 10;break;
				case 76: cur = 50;break;
				case 67: cur = 100;break;
				case 68: cur = 500;break;
				case 77: cur = 1000;break;
			}
		}
		if(cur <= tem){
			sum += tem;
			tem = cur;
			continue;
		}
		if(cur > tem)
			tem = cur - tem;	
	}    
	return sum; 
}

int main(){
	string s;
	while(getline(cin,s))
	cout << romanToInt(s) << endl;
	return 0;
}
