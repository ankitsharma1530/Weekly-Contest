// class Solution {
// public:
//      static bool comp(vector<int>& a, vector<int>& b)
//      {
//          int nn = a.size();
//          for(int i=0;i<nn-1;i++)
//          {
//              if(a[i]>b[i])
//              {
//                  return true;
//              }
//              else if(a[i]<b[i])
//              {
//                  return false;
//              }
//          }
//          if(a[nn-1]<b[nn-1])
//          {
//              return true;
//          }
//          else
//          {
//              return false;
//          }
//      }
//     string rankTeams(vector<string>& votes) {
//         int n = votes.size();
//         int m = votes[0].size();
//         // we will create a array of rows 26 and colums m+1 with all zeros
//         vector<vector<int>>v(26,vector<int>(m+1,0));
//          for(int i=0;i<26;i++)
//          {
//             v[i][m] = i;
//          }
//         for(int i=0;i<26;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 v[votes[i][j]-'A'][j]++;
//             }
//         }
        // auto comp = [&] (vector<int>& a, vector<int>& b) {
        //     for(int i=0; i<m; ++i) {
        //         if(a[i] > b[i])
        //             return true;
        //         else if(b[i] > a[i])
        //             return false;
        //     }
        //     return (a[m] < b[m]);
        // };
//         sort(v.begin(),v.end(),comp);
//         string res="";
//         for(int i=0;i<m;i++)
//         {
//             res+=v[i][m]+'A';
//         }
//         return res;
//     }
// };
class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n=votes.size(), m=votes[0].size();
        vector<vector<int>> arr(26, vector<int>(m+1, 0));
        
        for(int i=0; i<26; ++i)
            arr[i][m] = i;
        
        for(int i=0; i<n; ++i)
            for(int j=0; j<m; ++j)
                ++arr[votes[i][j]-'A'][j];
            
        auto comp = [&] (vector<int>& a, vector<int>& b) {
            for(int i=0; i<m; ++i) {
                if(a[i] > b[i])
                    return true;
                else if(b[i] > a[i])
                    return false;
            }
            return (a[m] < b[m]);
        };

        sort(arr.begin(), arr.end(), comp);
        string res;
        for(int i=0; i<m; ++i)
            res += arr[i][m] + 'A';
        return res;
    }
};
