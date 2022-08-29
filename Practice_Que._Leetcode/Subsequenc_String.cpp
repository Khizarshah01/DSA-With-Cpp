//Link
// https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087
// Coding Ninja
void sol( string str, int i, string o,vector<string>& ans)
{
    //base
    if(i>=str.length())
    {
        if(o.length()>0)
        
            ans.push_back(o);
            return ;
        
    }
    //exulding
    sol(str,i+1,o,ans);
    
    //including
    
    o.push_back(str[i]);
    sol(str,i+1,o,ans);

}

vector<string> subsequences(string str){
    vector<string> ans;
    string o="";
    sol(str,0,o,ans);
    return ans;
	
	// Write your code here
	
}
