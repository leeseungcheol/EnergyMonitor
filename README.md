
## how to build the sysInfo Qt application.

#### Install packages and clone the source code.

```
# sudo apt-get install qt4-default qt4-designer libqwt-dev
# git clone https://github.com/john1117/xu_sysInfo.git
```

#### Create a project file.
```
# qmake -project
```

#### Add below CONFIG line in the project file.
```
# vi xu3_sysInfo.pro
```
######...
######CONFIG += qwt
######...

#### Make!
```
# qmake
# make -j8
```
