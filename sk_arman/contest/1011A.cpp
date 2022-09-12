#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define db double
//#define vec(a) vector<int>a
int ar[27];
int main ()
{
    string s;
    int n,k,pos,cnt=0,ck=0,MIN=111111111,ck1=-1111;
    cin>>n>>k;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        ar[s[i]-'a']++;
    }
    for(int ii=0; ii<27; ii++)
    {
        if(ar[ii])
        {

            ck=0;
            cnt=0;
            cnt+=ii+1;
            pos=ii;
            ar[ii]=0;
            ck++;
            //cout<<(char)(ii+'a')<<" "<<cnt<<" ";
            for(int i=ii; i<27&&ck<k; i++)
            {
                for(int j=i+1; j<27&&ck<k; j++)
                {
                    if(ar[j]&&j>pos+1)
                    {
                        pos=j;
                        cnt+=j+1;
                        ar[j]=0;
                        ck++;
                        //cout<<(char)(j+'a')<<" "<<cnt<<" ";
                    }
                }
            }
            //cout<<" "<<MIN<<endl;
            if(ck==k)
                MIN=min(MIN,cnt);
            ck1=max(ck1,ck);
            memset(ar,0,sizeof(ar));
            for(int i=0; i<n; i++)
            {
                ar[s[i]-'a']++;
            }
        }
    }
    if(ck1>=k)
        cout<<MIN<<endl;
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}