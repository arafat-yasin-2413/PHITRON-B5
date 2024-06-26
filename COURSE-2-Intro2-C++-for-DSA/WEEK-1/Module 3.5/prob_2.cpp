#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        char country[100];
};


int main()
{
    Cricketer *dhoni = new Cricketer;

    char country_name[100]="India";
    strcpy(dhoni->country,country_name);
    dhoni->jersey_no = 18;

    cout<<"Printing dhoni for the first time :"<<endl;
    cout<<dhoni->country<<" "<<dhoni->jersey_no<<endl;

    Cricketer *kohli = new Cricketer;
    // kohli = dhoni;

    strcpy(kohli->country, dhoni->country);
    kohli->jersey_no = dhoni->jersey_no;

    delete dhoni;

    cout<<"Printing Kohli : "<<endl;
    cout<<kohli->country<<" "<<kohli->jersey_no<<endl;
    

    cout<<"Printing dhoni after deleting"<<endl;

    cout<<dhoni->country<<" "<<dhoni->jersey_no<<endl;
    

    return 0;
}