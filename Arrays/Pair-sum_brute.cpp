// their is a sorted array we have to return the pair which is equal to the target sum
//Brute force approch =
// find all pairs sum return the pair which matches  the target sum the pair wil be stored in a vector
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n ; i++){
        for (int j = i+1; j <n ; j++){

            if (nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
       }
    }
    return ans;

}
int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 7;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] <<  endl;
    return 0; 
}