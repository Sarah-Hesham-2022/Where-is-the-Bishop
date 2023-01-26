#include <iostream>

using namespace std;

int main()
{
    int loop=0;
    cin>>loop;

    string line="";
    string *boards = new string [loop*8];

    int index=0;

    for(int i=0;i < loop*8;i++)
    {

        cin>>line;
        boards[index]=line;
        index++;
    }
    /*
    cout<<endl;
    for(int i=0 ;i<= index; i++)
    {
        cout<<boards[i]<<endl;

        if((i+1) % 8 == 0 && i!=0)
        {
            cout<<endl;
        }
    }*/
    int check=0;

    for(int i=0;i<loop*8;i++)
    {
            for(int j=0;j<8;j++)
            {
                if(boards[i][j]=='#' && boards[i][j+2]=='#')
                {
                    cout<<(i+1+1-check)<<" "<<(j+1+1)<<endl;
                    check+=8;
                    i=check-1;
                    break;
                }
            }

    }

    return 0;
}
