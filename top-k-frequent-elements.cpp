class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>q;
        
        for(auto x:mp)
        {
            q.push({ x.second, x.first });
            if(q.size()>k)
            {
                q.pop();
            }
        }
        while(q.size()>0)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
