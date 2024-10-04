// Pass by ref and value add one to first number and 2 to second and returning vector

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        vector<int> ans;
        ans.push_back(a+1);
        ans.push_back(b+2);
        return ans;
    }
};