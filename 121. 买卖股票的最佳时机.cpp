#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0, in = prices.empty()?0:prices[0], out = 0;
    for(int i = 0; i < prices.size(); i ++){
    	if(in > prices[i])
    		in = prices[i];
    	out = prices[i];
    	if(out-in > 0 && out-in > profit)
    		profit = out - in;
	}
	return profit;
}
    
int main(){
	vector<int> pricess;
	int a;
	while(cin >> a)
	pricess.push_back(a);
	cout << maxProfit(pricess) << endl;
	return 0;
}

/*
����һ�����飬���ĵ� i ��Ԫ����һ֧������Ʊ�� i ��ļ۸�
��������ֻ�������һ�ʽ��ף������������һ֧��Ʊ�������һ���㷨�����������ܻ�ȡ���������
ע���㲻���������Ʊǰ������Ʊ��

ʾ�� 1:
����: [7,1,5,3,6,4]
���: 5
����: �ڵ� 2 �죨��Ʊ�۸� = 1����ʱ�����룬�ڵ� 5 �죨��Ʊ�۸� = 6����ʱ��������������� = 6-1 = 5 ��
     ע���������� 7-1 = 6, ��Ϊ�����۸���Ҫ��������۸�

ʾ�� 2:
����: [7,6,4,3,1]
���: 0
����: �����������, û�н������, �����������Ϊ 0��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock
����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

