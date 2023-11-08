class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = n+m-1;
        m--; n--;
        while(n>=0 and last>=0){
            if(m>=0 and nums1[m]>nums2[n]){
                nums1[last] = nums1[m];
                m--;
            }
            else{
                nums1[last] = nums2[n];
                n--;
            }
            last--;
        }
    }
};