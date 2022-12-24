#include <iostream>
#include <stack>
using namespace std;

int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' ||c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
       return -1;
    }
}

string infix_to_postfix(string s)         //string s is input string which stores infix expression.
{ 
        stack<char>st;      //declare stack name st;
        string out;
        for(int i=0;i<s.length();i++)
         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
           {
              out=out+s[i];
           }
          else if(s[i]=='(')
           {
            st.push(s[i]);
           }
          else if (s[i]==')')
           {
              while(!st.empty() && st.top()!='(')
               {
                out=out+st.top();        //res me top element ko add kar denge.
                st.pop();               //aur stack me se wo operand pop kar do until you get "(".
               }
              if (!st.empty())
              {
               st.pop();                //for poping the opening bracket '('.
              }

           }
         else 
         {
            while(!st.empty() && prec(st.top())>prec(s[i]))
            {
               out=out+st.top();
               st.pop(); 
            }
            st.push(s[i]);      //current operator ko stack me push karo.
         }

    
    
    while(!st.empty())     //to checkmif something is remain in stack.
    {
        out=out+st.top();   //pop every remaining element in output.
        st.pop();
    }

    return out;
}


int main()
{   string s;
    cout<<"enter the infix expression:"<<endl;
    cin>>s;
    cout<<infix_to_postfix(s)<<endl;



    return 0;
}