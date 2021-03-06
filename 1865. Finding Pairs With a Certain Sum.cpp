class FindSumPairs {
public:
    unordered_map<int,int>mp;
    vector<int>v1,v2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2)     
    {
        v2=nums2;
        v1=nums1;
        for(int i=0;i<nums2.size();i++)
        {
            mp[nums2[i]]++;
        }
    }
    
    void add(int index, int val) 
    {
        mp[v2[index]]--;
        v2[index]+=val;
        mp[v2[index]]++;
    }
    
    int count(int tot) 
    {
        int count=0;
        for(int i=0;i<v1.size();i++)
        {
            if(mp.count(tot-v1[i]))
            count+=mp[tot-v1[i]];
        }
        return count;
    }
};
