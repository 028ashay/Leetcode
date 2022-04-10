class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int n=ops.size() , ans=0;
        for(int i=0;i<n;i++)
        {
            if(ops[i]=="C")
            {
                ans-=s.top();
                s.pop();
            }
            else if(ops[i]=="D")
            {
                s.push(2*s.top());
                ans+=(s.top());
            }
            else if(ops[i]=="+")
            {
                int k1=s.top();
                s.pop();
                int k2= s.top()+k1;
                s.push(k1);
                s.push(k2);
                ans+=k2;
            }
            else
            {
                s.push(stoi(ops[i]));
                 ans+=s.top();
            }
            
        }
        return ans;
    }
};