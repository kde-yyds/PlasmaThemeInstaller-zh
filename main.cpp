#include <iostream>
#include <fstream>
int number_of_packages;
using namespace std;
void init()
{
    system("rm -rf /tmp/plasmathemeinstaller-zh");
    system("mkdir /tmp/plasmathemeinstaller-zh -p");
//    system("clear");
}
void downloadlist()
{
    system("cd /tmp/plasmathemeinstaller-zh&&git clone https://ghproxy.com/github.com/kde-yyds/PlasmaThemeInstaller-zh 1>/dev/null 2>/dev/null");
}
void displaydesktopthemes()
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/desktoptheme");
    char a='a';
    int i=0;
    while(1)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        i++;
        if(list.eof()) break;
        cout<<endl<<i<<" . ";
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'')
            { 
                if(j==1||j==2)cout<<a;
                list>>a;       
            }list>>a;   
            while(a!='\'') 
            {
                list>>a;
            }
            if(j==1||j==2)cout<<"\n";
        }
    }

        
 
    }

int main()
{
//    init();
//    downloadlist();
    displaydesktopthemes();
}