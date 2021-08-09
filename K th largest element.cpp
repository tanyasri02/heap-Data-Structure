class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        priority_queue<int,vector<int>, greater<int>>maxheap;

    for(int i=0;i<arr.size();i++)
    {
        maxheap.push(arr[i]);
        if(maxheap.size()>k)
        maxheap.pop();
    }
    return maxheap.top();
    }
};
