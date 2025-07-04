// their is a sorted array we have to return the pair which is equal to the target sum
//Two Pointer approch
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n-1;
    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        } 
        else if (pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }

    

}
int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 7;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] <<  endl;
    return 0; 
}