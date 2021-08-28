#include<bits/stdc++.h>
using namespace std;
int ch;
vector<string>vec;
string prod_name,search_prod;
string del_prod;
string mod_prod;
string mod,prod;
map<string,int>mp;

int StoreKeeper()
{
    cout<<"Which operation you want to perform ?"<<endl;
    cout<<"1)Add new Product 2)Delete Product 3)Modify Product 4)Exit ";
    cin>>ch;
    if(ch==1){
            cout<<"Product Name ?";
            cin>>prod_name;
            vec.push_back(prod_name);
            mp[prod_name]++;
    }
    else if(ch==2)
    {
        cout<<"Which Product you want to delete ";
        cin>>del_prod;
        vector<int>::iterator it;
        for(auto it=vec.begin();it!=vec.end();it++)
            {
                if(*it==del_prod)
                {
                    vec.erase(it);   
                }
            }
    }
    else if(ch==3){
            cout<<"Which Product you want to modify ";
            cin>>mod;
            cout<<"With what name you want to modify ";
            cin>>mod_prod;
            for(int i=0;i<vec.size();i++)
            {
                if(vec[i]==mod)
                {
                    vec[i]=mod_prod;
                }
            }
    }
         
}
int Manager()
{
    int ch;
    do{
    cout<<"1)Search product 2)View the product 3)Availabilty of product 4)Exit";
    cin>>ch;
    if(ch==1)
    {
        cout<<"Which product you want to search ";
        cin>>search_prod;
        int flag=0;
         for(int i=0;i<vec.size();i++)
            {
                if(vec[i]==search_prod)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"Product Found ";
            }else{
                cout<<"Not Found";
            }
    }
    else if(ch==2)
    {
            cout<<"Products are ";
            for(int i=0;i<vec.size();i++)
            {
                cout<<vec[i]<<" ";
            }
    }
    else if(ch==3)
    {
            map<int, int>::iterator itr;
            cout<<"Enter product name";
            cin>>prod;
            for(itr=mp.begin();itr!=mp.end();itr++)
            {
                if(itr->second==prod)
                {
                    cout<<itr->first;
                }
            }
    }
    }

}
int MaintenanceEngineer()
{
        cout<<"Products are ";
            for(int i=0;i<vec.size();i++)
            {
                cout<<vec[i]<<" ";
            }    
}

int main()
{
    int ch;
    do{
        cout<<"Select Type of User 1)StoreKeeper 2)Manager 3)MaintenanceEngineer 4)Exit";
        cin>>ch;
        switch(ch){
            case 1:
                StoreKeeper();
                break;
            case 2:
                Manager();
                break;
            case 3:
                MaintenanceEngineer();
                break;
        }
    }while(ch!=4);
}