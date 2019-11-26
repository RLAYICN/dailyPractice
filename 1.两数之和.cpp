#include<iostream>
#include<vector>
using namespace std;

//DESCRIBE
/*
//����һ����������nums��һ��Ŀ��ֵtarget��
//�����ڸ��������ҳ���ΪĿ��ֵ��������������
//���������ǵ������±ꡣ
//����Լ���ÿ������ֻ���Ӧһ���𰸡�
//���ǣ��㲻���ظ��������������ͬ����Ԫ�ء�

//��Դ�����ۣ�LeetCode��
//���ӣ�https://leetcode-cn.com/problems/two-sum
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/
vector<int> twoSum(vector<int> &nums, int target){
	for(int i = 0; i < nums.size(); i ++){
            int rest = target - nums[i];
            for(int j = i+1; j < nums.size(); j ++){
                if(rest == nums[j])
                    return {i, j};
        }
    }
    return {0, 0};
    /*
	vector<int> answer;
	answer.push_back(0);
	answer.push_back(0);  
	for(int i = 0; i < nums.size(); i ++){
		int tem = target-nums[i];
		for(int j = i+1; j < nums.size(); j ++){
			if(tem == nums[j]){
				answer[0] = i;
				answer[1] = j;
				return answer;
			}	 
		}
	}
	return answer;*/
}

int main(){
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	vector<int> answer = twoSum(nums, 9);
	for(int i = 0; i < answer.size(); i ++)
	cout << answer[i] << " ";
	cout << endl;
	return 0;
} 
