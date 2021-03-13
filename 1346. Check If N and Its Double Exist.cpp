class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> numFreq;
        unordered_map<int, int> numDFreq;
        for (int i = 0; i < arr.size(); i++){
            if ((numFreq[arr[i]] == 0) || (arr[i] == 0)){
                if ((numDFreq[arr[i]] > 0) || (numFreq[2 * arr[i]] > 0))
                    return true;
                numFreq[arr[i]]++;
                numDFreq[arr[i] * 2]++;
            }
        }
        return false;
    }
};
