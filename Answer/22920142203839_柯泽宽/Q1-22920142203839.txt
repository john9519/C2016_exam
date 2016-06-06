/etc/apt/sources.list和/etc/apt/sources.list.d下文件都是APT包管理器的的软件源。

/etc/apt/sources.list中的软件源通常是发行版自身更新用的软件源（当然也可以由用户更改），而/etc/apt/sources.list.d/*.list则通常是由第三方软件包添加的，例如google-chrome安装包中自带的软件源，以及通过add-apt-repository命令添加的软件源。

/etc/apt/sources.list.d下的.list文件可以通过文件名区分所属的软件包，便于添加和删除，易于维护。
