bool narcissistic( int value ){
    int n=value,m=value,l=0,sum=0;
    while(n>0)
    {
        l++;
        n/=10;
    }
    while(value>0)
    {
        int k=1;
        for(int i=1;i<=l;++i)
        {
            k*=value%10;
        }
        sum+=k;
        value/=10;
    }
    return m==sum;
}