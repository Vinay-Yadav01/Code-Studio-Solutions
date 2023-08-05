bool isValidParenthesis(string s)
{
        stack<char> st;

        for(int i=0;i<s.size();i++){

            char ch=s[i];

            if(ch=='(' || ch=='{' || ch=='['){

                st.push(ch);

            }

            else{

                if(!st.empty()){

                    char element=st.top();

                    if((element=='('&& ch==')')||( element=='{' && ch=='}')||( element=='[' && ch==']')){

                        st.pop();

                    }

                    else return false;

                }

                else return false;

            }

        }

        if(st.empty()) return true;

        else return false; 
}
