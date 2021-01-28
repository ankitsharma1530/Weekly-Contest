class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<long long int,int> mp1;
        unordered_map<long long int,int> mp2;
        for(auto i:nums1)
            mp1[(long long int)i*i]++; //count of square of element of nums1
        for(auto i:nums2)
            mp2[(long long int)i*i]++; // count of square of element of nums2
    
        
        int count=0; // stores count of triplets
        
        long long int tmp;
		//count of triplets of type 2.
        for(int i=0;i<nums1.size();i++){
            for(int j=i+1;j<nums1.size();j++){
                tmp=(long long int)nums1[i]*nums1[j];
                if(mp2.find(tmp)!=mp2.end())
                    count+=mp2[tmp];
            }
        }
        //count of triplets of type 1.
        for(int i=0;i<nums2.size();i++){
            for(int j=i+1;j<nums2.size();j++){
                tmp=(long long int)nums2[i]*nums2[j];
                if(mp1.find(tmp)!=mp1.end())
                    count+=mp1[tmp];
            }
        }
        return count;
    }
};
