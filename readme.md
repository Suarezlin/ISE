#数电实验 ISE 程序
这个 repo 存了我数电实验时写的 ise 代码，所有的程序都可以在 basys2 开发板上运行。
运行所需的 .bit 文件位于根目录中。
随着实验的进行，我会逐步更新 repo 内容。
##使用方法
1. 下载使用 **(不推荐)**
	下载后解压即可使用
	![图片](http://ww2.sinaimg.cn/large/006tKfTcly1fejv3cjnqsj30ps0e440d.jp)
	<br>
2. Clone 使用**(推荐)**
	* Windows
		前往 git 官网下载 git 安装包，地址如下：
		[git 下载地址](https://git-scm.com/downloads)
		安装完成之后，打开希望存储文件的目录，按住 shift 键，并点击右键，选择右键菜单中的**在此处打开 git bash**。
		在打开的命令行中输入以下命令：
		`git clone https://github.com/Suarezlin/ISE.git`
		完成后文件已下载到您的电脑中。
		<br>
* Mac OS & Linux
	Mac OS 和 Linux 1系统中自带了 git ，我们不需要去安装它。
	打开 bash 或 terminal ，切换到希望存储的位置，输入以下命令：
	`git clone https://github.com/Suarezlin/ISE.git`
	如果遇到权限问题，输入以下命令：
	`sudo git clone https://github.com/Suarezlin/ISE.git`
	完成后，文件已下载到您的文件夹中。
	<br>
3. 更新同步
	<br>
	如果使用了下载的方式，更新后请重新下载。
	<br>
	采用 Clone 方式：
	使用第二步介绍的方法，打开命令行并切换到下载时的目录，输入命令：
	`git pull` 或
	`sudo git pull`(仅限 Mac OS 与 Linux)
	