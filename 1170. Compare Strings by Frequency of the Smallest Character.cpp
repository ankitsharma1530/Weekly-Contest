class Solution {
public:
    int f(string word) {
    vector<int>dict(26,0);
    for(auto w: word) {
        dict[w-'a']++;
    }
    for(auto t: dict) {
        if(t != 0) {
            return t;
        }
    }
    return 0;
}
vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
    vector<int>table1;
    for(int i = 0; i <words.size(); i++) {
        int freq = f(words[i]);
        table1.push_back(freq);
    }
    sort(table1.begin(),table1.end());
    vector<int>result;
    for(auto query : queries) {
        int key = f(query);
        int left = 0;
        int right = table1.size()-1;
        while(left < right) {
            int mid = (left+right)/2;
            if(table1[mid] <= key) {
                left = mid+1;
            }else {
                right = mid;
            }
        }
        if(key < table1[left]) {
            result.push_back(table1.size()-left);
        }else {
            result.push_back(0);
        }
        
    }
    return result;
}
};
