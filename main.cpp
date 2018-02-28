#include <iostream>
#include <string.h>
using namespace std;
void husvet (char s[50])
{
    for(int i=1;i<=40;i++)
        cout<<" ";
    cout<<"#"<<"Kellemes husvetot"<<" ";
    if (strlen(s)==NULL)
    cout<<"my friend"<<"!"<<"#"<<endl;
    else
        cout<<s<<"!"<<"#"<<endl;
}
void keret(char s[50])
{
    cout<<"   ";
    for (int i=1;i<=80;i++)
    {
        cout<<"#";
    }
    cout<<"   ";
    cout<<endl;
}
void keret2(char s[50])
{
    cout<<"   ";
    cout<<"#";
    for (int i=1;i<=78;i++)
        cout<<" ";
    cout<<"#";
    cout<<"   ";
    cout<<endl;

}

int main()
{
    char s[50];
    cin>>s;
    cout << "Good morning!" << endl;
    keret(s);
    keret(s);
    keret2(s);
    husvet(s);
    keret2(s);
    keret(s);
    keret(s);
    return 0;
}
