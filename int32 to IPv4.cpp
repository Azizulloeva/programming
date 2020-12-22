std::string uint32_to_ip(uint32_t ip)
{
    std::vector<int>v;
    std::string s="";
    while(ip>0)
    {
        v.push_back(ip%2);
        ip/=2;
    }
    while(v.size()<32)
    {
        v.push_back(0);
    }
    reverse(v.begin(),v.end());
    int k=1,l=0;
    for(int i=7;i>=0;--i)
    {
        l+=v[i]*k;
        k*=2;
    }
    std:: string ss="";
    while(l>0)
    {
        ss+=(l%10)+48;
        l/=10;
    }
    if(ss.length()==0) ss+="0";
    reverse(ss.begin(),ss.end());
    
    s+=ss;s+=".";
    k=1;l=0;
    for(int i=15;i>=8;--i)
    {
        l+=v[i]*k;
        k*=2;
    }
    ss="";
    while(l>0)
    {
        ss+=l%10+48;
        l/=10;
    }
    if(ss.length()==0) ss+="0";
    reverse(ss.begin(),ss.end());
    s+=ss;s+=".";
  
    k=1;l=0;
    for(int i=23;i>=16;--i)
    {
        l+=v[i]*k;
        k*=2;
    }
    ss="";
    while(l>0)
    {
        ss+=l%10+48;
        l/=10;
    }
    if(ss.length()==0) ss+="0";
    reverse(ss.begin(),ss.end());
    s+=ss;s+=".";
  
    k=1;l=0;
    for(int i=31;i>=24;--i)
    {
        l+=v[i]*k;
        k*=2;
    }
    ss="";
    while(l>0)
    {
        ss+=l%10+48;
        l/=10;
    }
    if(ss.length()==0) ss+="0";
    reverse(ss.begin(),ss.end());
    s+=ss;
    return s;
}