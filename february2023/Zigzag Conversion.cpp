class Solution {
public:
    string convert(string s, int numRows) {
        int n=numRows;
        int val=s.size();
        if(n==1)return s;
        if(val<=n)return s;
        map<int,vector<char>>m;
        int i=0;
        for(i=0;i<n;i++){
            m[i].push_back(s[i]);
        }
        while(i<val){
            for(int j=n-2;j>=0&&i<val;j--){
                m[j].push_back(s[i]);
                i++;
            }
            for(int j=1;j<=n-1&&i<val;j++){
                m[j].push_back(s[i]);
                i++;
            }
        }
        string ans="";
        for(auto i:m){
            string res="";
            for(int j=0;j<i.second.size();j++){
                res=res+i.second[j];
            }
            ans=ans+res;
        }
        return ans;
    }
};
