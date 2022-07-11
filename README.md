# PlasmaThemeInstaller-zh
KDE Plasma 视觉风格和 Kwin窗口装饰安装程序，国内可用
# 构建安装
git clone https://github.com/kde-yyds/PlasmaThemeInstaller-zh

cd PlasmaThemeInstaller-zh

make

sudo make install

# 删除
sudo make remove

# 使用说明
## 1.运行
以普通用户运行PlasmaThemeInstaller-zh即可

一般在终端里输入大写的Pl再按一下Tab就会自动补全
## 2.没有想要的主题？
这很正常，因为我这里已经下载不了kde store的主题了
## 3.我有喜欢的主题但PlasmaThemeInstaller-zh里没有？
请把~/.local/share/plasma和~/.local/share/aurorae/themes两个文件夹压缩并创建一个issue
