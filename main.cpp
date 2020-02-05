#include <iostream>
using namespace std;
int main()
{

    string vardas, base, first, second;
    base="Sveikas, ";
    cin>>vardas;
    base+=vardas+"!";

    //cout<<base<<endl;
    for(int i=0;i<base.size()+4;i++)
    {
        first+="*";
    }
    first+='\n';
    second+="*";
    for(int i=0;i<base.size()+2;i++)
    {
        second+=" ";
    }
    second+="*";
    second+='\n';
    base="* "+base+" *";
    base+='\n';
    cout<<first<<second<<base<<second<<first;
}
