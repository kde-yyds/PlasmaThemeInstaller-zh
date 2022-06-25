/*
此程序是自由软件；您可以以自由软件基金会发布的 GNU通用公共许可协议第三版或(您可以选择)更高版方式重新发布它和/或修改它。\n\n此程序是希望其会有用而发布，但没有任何担保；没有甚至是暗含的适宜销售或特定目的适用性方面的担保。详情参看GNU 通用公共许可协议。
*/
#include <iostream>
#include <fstream>
int number_of_packages;
using namespace std;
void init()
{
    system("rm -rf /tmp/plasmathemeinstaller-zh");
    system("mkdir /tmp/plasmathemeinstaller-zh -p");
}
void download_list()
{
    system("cd /tmp/plasmathemeinstaller-zh&&git clone https://ghproxy.com/github.com/kde-yyds/PlasmaThemeInstaller-zh 1>/dev/null 2>/dev/null");
}
void show_desktop_themes()
{
    cout<<"Plasma 视觉风格：";
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
        cout<<endl<<"["<<i<<"] . ";
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
    list.close();
}
void show_a_desktoptheme(int n)
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/desktoptheme");
    char a='a';
    for(int i=1;i<=n;i++)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        if(list.eof()) break;
        if(i==n) cout<<endl<<"["<<n<<"] . ";
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'')
            { 
                if((j==1||j==2)&&i==n)cout<<a;
                list>>a;       
            }list>>a;   
            while(a!='\'') 
            {
                list>>a;
            }
            if(j==1||j==2)cout<<"\n";
        }
    }
    list.close();
}
void download_a_desktop_theme(int n)
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/desktoptheme");
    char a='a';
    for(int i=1;i<n;i++)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        if(list.eof()) break;
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'') list>>a;
            list>>a;
            while(a!='\'') list>>a;
        }
    }
    for(int i=1;i<=2;i++)
    {
        list>>a;
        while(a!='\'') list>>a;
        list>>a;
        while(a!='\'') list>>a;
    }
    char download[1000],t[49]="wget -O /tmp/plasmathemeinstaller-zh/tmp.tar.xz";
    for(int i=0;i<1000;i++) download[i]=' ';
    for(int i=0;i<=46;i++) download[i]=t[i];
    int i=48;
    if(n==1)
    {
        while(a!='\'') list>>a;
        list>>a;
    }
    list>>a;
    while(a!='\'')
    {
        download[i]=a;
        list>>a;
        i++;
    }
    char c[]=" 2>/dev/null";
    int d=i;
    for(int i=0;i<=12;i++) download[i+d]=c[i];
    cout<<"Executing : "<<download<<endl;
    system(download);
    list.close();
}
void remove_a_desktop_theme(int n)
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/desktoptheme");
    char a='a';
    for(int i=1;i<n;i++)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        if(list.eof()) break;
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'') list>>a;
            list>>a;
            while(a!='\'') list>>a;
        }
    }
    for(int i=1;i<=3;i++)
    {
        list>>a;
        while(a!='\'') list>>a;
        list>>a;
        while(a!='\'') list>>a;
    }
    char remove[1000],t[8]="rm -rf ";
    for(int i=0;i<1000;i++) remove[i]=' ';
    for(int i=0;i<=6;i++) remove[i]=t[i];
    int i=7;
    if(n==1)
    {
        while(a!='\'') list>>a;
        list>>a;
    }
    list>>a;
    while(a!='\'')
    {
        remove[i]=a;
        list>>a;
        i++;
    }
    remove[i]='\0';
    cout<<"Executing : "<<remove<<endl;
    system(remove);
    list.close();
}
void install()
{
    char install[]="tar -xvf /tmp/plasmathemeinstaller-zh/tmp.tar.xz -C ~/ >/dev/null";
    cout<<"Executing : "<<install<<endl;
    system(install);
}
void show_auroraes()
{
    cout<<"\nKwin窗口装饰：";
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/aurorae");
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
        cout<<endl<<"["<<i<<"] . ";
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
void show_an_aurorae(int n)
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/aurorae");
    char a='a';
    for(int i=1;i<=n;i++)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        if(list.eof()) break;
        if(i==n) cout<<endl<<"["<<n<<"] . ";
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'')
            { 
                if((j==1||j==2)&&i==n)cout<<a;
                list>>a;       
            }list>>a;   
            while(a!='\'') 
            {
                list>>a;
            }
            if(j==1||j==2)cout<<"\n";
        }
    }
    list.close();
}
void download_an_aurorae(int n)
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/aurorae");
    char a='a';
    for(int i=1;i<n;i++)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        if(list.eof()) break;
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'') list>>a;
            list>>a;
            while(a!='\'') list>>a;
        }
    }
    for(int i=1;i<=2;i++)
    {
        list>>a;
        while(a!='\'') list>>a;
        list>>a;
        while(a!='\'') list>>a;
    }
    char download[1000],t[49]="wget -O /tmp/plasmathemeinstaller-zh/tmp.tar.xz";
    for(int i=0;i<1000;i++) download[i]=' ';
    for(int i=0;i<=46;i++) download[i]=t[i];
    int i=48;
    if(n==1)
    {
        while(a!='\'') list>>a;
        list>>a;
    }
    list>>a;
    while(a!='\'')
    {
        download[i]=a;
        list>>a;
        i++;
    }
    char c[]=" 2>/dev/null";
    int d=i;
    for(int i=0;i<=12;i++) download[i+d]=c[i];
    cout<<"Executing : "<<download<<endl;
    system(download);
    list.close();

}
void remove_an_aurorae(int n)
{
    ifstream list ("/tmp/plasmathemeinstaller-zh/PlasmaThemeInstaller-zh/lists/aurorae");
    char a='a';
    for(int i=1;i<n;i++)
    {
        while(a!='\'') 
        {
            list>>a;
        }
        if(list.eof()) break;
        for(int j=1;j<=4;j++)
        {
            list>>a;
            while(a!='\'') list>>a;
            list>>a;
            while(a!='\'') list>>a;
        }
    }
    for(int i=1;i<=3;i++)
    {
        list>>a;
        while(a!='\'') list>>a;
        list>>a;
        while(a!='\'') list>>a;
    }
    char remove[1000],t[8]="rm -rf ";
    for(int i=0;i<1000;i++) remove[i]=' ';
    for(int i=0;i<=6;i++) remove[i]=t[i];
    int i=7;
    if(n==1)
    {
        while(a!='\'') list>>a;
        list>>a;
    }
    list>>a;
    while(a!='\'')
    {
        remove[i]=a;
        list>>a;
        i++;
    }
    remove[i]='\0';
    cout<<"Executing : "<<remove<<endl;
    system(remove);
    list.close();
}
int main()
{
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"正在获取主题列表……\n";
    init();
    download_list();
    cout<<"OK\n\n";
    while(1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"欢迎使用PlasmaThemeInstaller-zh\n\n";
        cout<<"[1] 安装或删除Plasma视觉风格\n";
        cout<<"[2] 安装或删除Kwin窗口装饰元素\n";
        cout<<"[3] 关于PlasmaThemeInstaller-zh\n";
        cout<<"[4] 退出\n\n";
        cout<<" :";
        int t,n,m;
        cin>>t;
        if(t==1) 
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
            show_desktop_themes();
            cout<<"\n  :";
            cin>>n;
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
            show_a_desktoptheme(n);
            cout<<"\n\n[1]安装\n[2]删除\n  :";
            cin>>m;
            if(m==1)
            {
                download_a_desktop_theme(n);
                install();
                cout<<"安装完成\n\n\n\n";
                system("sleep 1");
            }
            if(m==2)
            {
                remove_a_desktop_theme(n);
                cout<<"删除完成\n\n\n\n";
                system("sleep 1");
            }
        }
        if(t==2)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
            show_auroraes();
            cout<<"\n  :";
            cin>>n;
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
            show_an_aurorae(n);
            cout<<"\n\n[1]安装\n[2]删除\n  :";
            cin>>m;
            if(m==1)
            {
                download_an_aurorae(n);
                install();
                cout<<"安装完成\n\n\n\n";
                system("sleep 1");
            }
            if(m==2)
            {
                remove_an_aurorae(n);
                cout<<"删除完成\n\n\n\n";
                system("sleep 1");
            }

        }
        if(t==3)
        {
            char c[]="此程序是自由软件；您可以以自由软件基金会发布的 GNU通用公共许可协议第三版或(您可以选择)更高版方式重新发布它和/或修改它。\n\n此程序是希望其会有用而发布，但没有任何担保；没有甚至是暗含的适宜销售或特定目的适用性方面的担保。详情参看GNU 通用公共许可协议。\n\n您应该与此程序一道收到了一份 GUN 通用公共许可协议的副本；如果没有，致信给the Free Software Foundation,Inc., 59 Temple Place - Suite330, Boston,MA 02111-1307,USA.";
            cout<<c;
        }
        if(t==4)
        {
            return 0;
        }
    }

}
