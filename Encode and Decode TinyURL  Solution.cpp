    // Encodes a URL to a shortened URL.
    class Solution {
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {   
        size_t shortUrl = hash<string>()(longUrl);
        string shortUrl_str = to_string(shortUrl);
        map[shortUrl_str]= longUrl;
        return shortUrl_str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map[shortUrl];
    }
    unordered_map<string,string>map;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
