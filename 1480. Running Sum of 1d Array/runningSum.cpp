class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> resultados; 
       int x = 0;
        
        for (int i = 0; i < nums.size(); i++){
           x = x + nums[i];
            resultados.push_back(x);
        }
        return resultados;
    }
};