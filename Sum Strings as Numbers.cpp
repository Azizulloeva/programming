#include <string>

std::string sum_strings(const std::string& a, const std::string& b) {
  std::vector<int>v;
  std::string s;
  int i=a.length()-1,j=b.length()-1;
  while(i>=0||j>=0)
  {
      int k=0;
      if(i>=0)
      {
          int g=a[i]-48;
          v.push_back(g);
          k=1;
          i--;
      }
      if(j>=0)
      {
          int g=b[j]-48;
          if(k==1)
          {
              v[v.size()-1]+=g;
              k=0;
          }
          else
          {
              v.push_back(g);
          }
          j--;
      }
  }

  for(int i=0;i<v.size()-1;++i)
  {
      v[i+1]+=v[i]/10;
      v[i]%=10;
  }

  while(v[v.size()-1]>9)
  {
      v.push_back(v[v.size()-1]/10);
      v[v.size()-2]%=10;
  }
  for(int i=v.size()-1;i>=0;--i)
  s+=v[i]+48;
  return s;
}