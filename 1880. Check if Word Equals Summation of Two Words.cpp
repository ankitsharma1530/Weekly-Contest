class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string n1,n2,n3;
        for(int i=0;i<firstWord.length();i++){
            int x = firstWord[i]-'a';
            n1+=to_string(x);
        }
        for(int i=0;i<secondWord.length();i++){
            int x = secondWord[i]-'a';
            n2+=to_string(x);
        }
        for(int i=0;i<targetWord.length();i++){
            int x = targetWord[i]-'a';
            n3+=to_string(x);
        }
        return (stoi(n1)+stoi(n2)==stoi(n3));
    }
};
