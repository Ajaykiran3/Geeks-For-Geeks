class Solution {
  public:
    int findSum(int n) {
        // code here
        long long nn = n;
        long long ans = nn * (nn+1)/2;
        return static_cast<int>(ans);
    }
};
