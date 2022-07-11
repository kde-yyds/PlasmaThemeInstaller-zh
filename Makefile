PlasmaThemeInstaller-zh:PlasmaThemeInstaller-zh.cpp
	g++ PlasmaThemeInstaller-zh.cpp -o PlasmaThemeInstaller-zh

install:
	cp -r PlasmaThemeInstaller-zh /usr/bin

remove:
	rm /usr/bin/PlasmaThemeInstaller-zh
