//#include <bits/stdc++.h>
//using namespace std;
//bool isParenthesis(char c){
//    return ((c == '(') || (c == ')'));
//}
//bool isValidString(string str)
//{
//    int cnt = 0;
//    for (int i = 0; i < str.length(); i++)
//    {
//        if (str[i] == '(')
//            cnt++;
//        else if (str[i] == ')')
//            cnt--;
//        if (cnt < 0)
//            return false;
//    }
//    return (cnt == 0);
//}
//void removeInvalidParenthesis(string str){
//    if (str.empty())
//        return ;
//    set<string> visit;
//    queue<string> q;
//    string temp;
//    bool level;
//    q.push(str);
//    visit.insert(str);
//    while (!q.empty()){
//        str = q.front();  q.pop();
//        if (isValidString(str)){
//            cout << str << " ";
//            level = true;
//        }
//        if (level)
//            continue;
//        for (int i = 0; i < str.length(); i++)
//        {
//            if (!isParenthesis(str[i]))
//                continue;
//            temp = str.substr(0, i) + str.substr(i + 1);
//            if (visit.find(temp) == visit.end())
//            {
//                q.push(temp);
//                visit.insert(temp);
//            }
//        }
//    }
//}
//int main(){
//	int t;cin>>t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin,s);
//		bool ngoacMo=false,ngoacDong=false,chu=false;
//		for(int i=0;i<s.length();i++){
//			if(s[i]=='(') ngoacMo=true;
//			if(s[i]==')') ngoacDong=true;
//			if(s[i]!='('&&s[i]!=')') chu=true;
//		}
//		if(ngoacDong&&ngoacMo) removeInvalidParenthesis(s);
//		else if(chu==true)removeInvalidParenthesis(s);
//		else{
//			cout<<-1;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//bool check=false;
//void print_vector(vector<string> v){
////   cout << "[";
//   for(int i = 0; i<v.size(); i++){
//      cout << v[i] << " ";
//   }
////   cout << "]"<<endl;
//}
//class Solution {
//   public:
//   string s;
//   map <string ,int> m;
//   void solve(int pos, int left, int right,int l, int r, vector <string> &res, string temp=""){
//      if(pos == s.size()){
//         if(left==0 && right==0 && l==r){
//            if(!m[temp])
//               res.push_back(temp);
//            m[temp] = 1;
//         }
//         return;
//      }
//      if(s[pos] =='(' && right>0 ){
//         solve(pos+1,left,right-1,l,r,res,temp+"");
//      } else if(s[pos] ==')' && left>0) {
//         solve(pos+1,left-1,right,l,r,res,temp+"");
//      }
//      if(s[pos] =='(')solve(pos+1,left,right,l+1,r,res,temp+"(");
//      else if(s[pos] == ')' && l>r)solve(pos+1,left,right,l,r+1,res,temp+')');
//      if(s[pos]!='(' && s[pos]!=')')solve(pos+1,left,right,l,r,res,temp+s[pos]);
//   }
//   vector<string> removeInvalidParentheses(string s) {
//      vector <string > res;
//      int l = 0;
//      int r=0;
//      this->s = s;
//      for(int i =0;i<s.size();i++){
//         if(s[i] == '('){
//            r++;
//         } else if(s[i]==')') {
//            if(r)r--;
//            else l++;
//         }
//      }
//      solve(0,l,r,0,0,res);
//      return res;
//   }
//};
//main(){
//	int t;cin>>t;
//    Solution ob;
//    cin.ignore();
//    while(t--){
//    	string s;
//   		getline(cin,s);
//   		print_vector(ob.removeInvalidParentheses(s));
//   		cout<<endl;
//    }
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
bool ngoac(char c)
{
    return ((c == '(') or (c == ')'));
}
bool compare(string x, string y)
{
    for (int i = 0; i < x.length(); i++)
    {
        if (int(x[i]) == int(y[i]))
            continue;
        return (int(x[i]) < int(y[i]));
    }
}

bool check(string str)
{
    if (str.empty())
        return false;
    if (str.length() == 1 && !ngoac(str[0]))
        return false;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            cnt++;
        else if (str[i] == ')')
            cnt--;
        if (cnt < 0)
            return false;
    }
    return (cnt == 0);
}

void solve()
{
    vector<string> res;
    string str;
    cin >> str;
    if (str.empty())
    {
        cout << "-1" << endl;
        return;
    }
    if (str.length() == 1 and !ngoac(str[0]))
    {
        cout << "-1" << endl;
        return;
    }
    set<string> visit;
    queue<string> q;
    bool found = false;
    int maxLength = INT_MIN;
    q.push(str);
    visit.insert(str);
    while (!q.empty())
    {
        string str1 = q.front();
        q.pop();
        if (check(str1))
        {

            if (!found)
            {

                maxLength = str1.size();
                res.push_back(str1);
                found = true;
            }
            else
            {

                if (str1.size() == maxLength)
                {
                    res.push_back(str1);
                }
            }
        }
        if (found)
            continue;
        for (int i = 0; i < str1.length(); i++)
        {
            if (!ngoac(str1[i]))
                continue;
            string temp = str1.substr(0, i) + str1.substr(i + 1);
            if (visit.find(temp) == visit.end())
            {
                q.push(temp);
                visit.insert(temp);
            }
        }
    }
    if (found == false)
        cout << "-1";
    else
    {
        sort(res.begin(), res.end(), compare);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
