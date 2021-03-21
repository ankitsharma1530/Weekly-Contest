class AuthenticationManager {
public:
    int time ; 
    unordered_map<string,int>ump;
    AuthenticationManager(int timeToLive) {
        time = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        ump[tokenId] = currentTime+time;
    }
    
    void renew(string tokenId, int currentTime) {
        if(ump.count(tokenId))
        {
            int last_time = ump[tokenId];
            if(last_time>currentTime)
            {
                ump[tokenId] = currentTime+time;
            }
        }
        
    }
    
    int countUnexpiredTokens(int currentTime) {
        int count = 0;
        for(auto it=ump.begin();it!=ump.end();it++)
        {
            if(it->second>currentTime)
            {
                count++;
            }
        }
        return count;
    }
};
