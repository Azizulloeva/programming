std::string pig_it(std::string str)
{
    std::string s="",ss="";str+=" ";
    for(int i=0;i<str.length();++i)
    {
        if(isalpha(str[i]))
        {
            s+=str[i];
        }
        else
        {
            if(s.length()>0)
            {
                reverse(s.begin()+1,s.end());
                reverse(s.begin(),s.end());
                s+="ay";
                ss+=s;
                s="";
            }
            if(i!=str.length()-1) ss+=str[i];
        }
    }
    return ss;
}