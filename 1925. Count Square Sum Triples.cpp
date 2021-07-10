class Solution {
public:
    int countTriples(int n) {
        int c =0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=n;k++){
                    if((k*k==(i*i+j*j))){
                        c++;
                    }
                }
            }
        }
        return c;
//         int c = 0;
//         for (int i = 1; i <= n; ++i) {
//             for (int j = i; j <= n; ++j) {
//                 int x = i * i + j * j;
//                 int num = sqrt(x);
//                 if (num * num == x && num <= n)
//                     ++c;
//             }
//         }
 
//         return c;
                                           
    }
};
