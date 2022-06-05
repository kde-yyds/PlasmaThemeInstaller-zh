#include <iostream>
#include <fstream>
int number_of_packages;
using namespace std;
void init()
{
    system("rm -rf ~/.tmp/plasmathemeinstaller-zh");
    system("mkdir ~/.tmp/plasmathemeinstaller-zh");
    system("clear");
}
void downloadlist()
{
    system("cd ~/.tmp/plasmathemeinstaller-zh&&git clone https://github.com/kde-yyds/PlasmaThemeInstaller-zh 1>/dev/null 2>/dev/null");
}
