#include<iostream>
#include<vector>
using namespace std;

//DESCRIBE
/*
//给定一个整数数组nums和一个目标值target，
//请你在该数组中找出和为目标值的那两个整数，
//并返回他们的数组下标。
//你可以假设每种输入只会对应一个答案。
//但是，你不能重复利用这个数组中同样的元素。

//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/two-sum
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
