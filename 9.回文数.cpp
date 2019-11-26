#include<iostream>
using namespace std;

bool isPalindrome(int x) {
	if(x < 10 && x >= 0)
		return true;
    if(x < 0 || x%10 == 0)
        return false;
	int y = 0;
	while(x > y){
		y = y * 10 + x % 10;
		if(y == x)
			return true;
		x /= 10;
		if(y == x)
			return true;
	}
	return false;
}

int main(){
	int a;
	while(cin >> a){
		cout << isPalindrome(a) << endl;
	}
	return 0;
}
