#include<iostream>
#include<string>
using namespace std;
/*
����һ���ַ��� s���ҵ� s ����Ļ����Ӵ�������Լ��� s ����󳤶�Ϊ 1000��
*/

bool isPalindrome(string s){
	int size = s.size();
	if(size == 1)
	return true;
	for(int i = 0; i < size/2; i ++){
		if(s[i] == s[size-1-i])
		continue;
		else
		return false;
	}
	return true;
}

string longestPalindrome(string s) {
 	/*
 	//�ݹ�,��ʱ 
	if(s.size() == 1)
 		return s;
	if(isPalindrome(s))
		return s;
	string s1 = s, s2 = s;
	s1.erase(s1.begin());
	s2.erase(s2.end()-1);
	s1 = longestPalindrome(s1);
	s2 = longestPalindrome(s2);
	s = s1.size()>s2.size() ? s1 : s2;	  
	return s;
	*/
	
}

int main(){
	string s1, s;
	s = "babaddtattarrattatddetartrateedredividerb";
	s1 = longestPalindrome(s);
	cout << s1;
	return 0;
}
