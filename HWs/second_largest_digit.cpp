class Solution {
public:
    int secondHighest(string s) {

        int n=-1;
        set<int> v;

        for(int i=0; i<s.length(); i++)
        {
            if(isdigit(s[i]))
            {
               v.insert(s[i] - '0');
            }    
        }
        
        if(v.size()>=2)
        {
            auto it = v.end();
            --it;
            --it;

            n = *it;
        }

        return n;

    }
};
