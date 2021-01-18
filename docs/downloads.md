| [Home](home.md) | [Downloads](downloads.md) | [Examples](examples.md) | [Documentation](documentation.md) | [Sources](https://github.com/gammasoft71/delegates) | [Project](https://sourceforge.net/projects/delegates/) | [Gammasoft](https://gammasoft71.wixsite.com/gammasoft) | [Contact](contact.md) | [Website](https://gammasoft71.wixsite.com/delegates) |

# Download the latest stable delegates version

You can download latest stable version on [SourceForge](https://sourceforge.net/projects/delegates/)

[![Download tunit](https://a.fsdn.com/con/app/sf-download-button)](https://sourceforge.net/projects/delegates/files/latest/download)

# Clone the latest tunit commit

Or clone latest development version on [GitHub](https://github.com/gammasoft71/delegates).

```shell
git clone https://github.com/gammasoft71/delegates.git
```

# Installation

## Windows 7 SP1 or later

1. Install Microsoft Visual Studio 2017 Community
  
   In order to build tunit, you first need download and install Microsoft Visual Studio 2017 community from [https://www.visualstudio.com](https://www.visualstudio.com).

2. Install CMake 3.3 or later
  
   After Microsoft Visual Studio, you need to install the latest version cmake from [https://cmake.org/download/](https://cmake.org/download/)
   
   *Remarks: Verify if you can execute 'cmake --version' in "Command Prompt", if it's no, add cmake install directory to your path.*

3. After installing Microsoft Visual Studio and CMake, do the following in "Command Prompt" to build and install tunit :

```shell
cd tunit_path_name
install
```

4. Create as many unit tests as you want with tunit.


## macOS 10.14 (OS X Mojave) or later

1. Install Xcode 10 or later
  
   In order to build tunit, you first need download and install Xcode from App Store and install "Commands line tools".

   *Remarks: Verify if you can execute 'clang --version' in "Terminal".*

2. Install Homebrew
  
   After Xcode, to build Switch, you need to install package manager Homebrew ([http://brew.sh](http://brew.sh)).
   
```shell
/usr/bin/ruby -e "$(curl -fsSL ttps://raw.githubusercontent.com/Homebrew/install/master/install)"
```

3. After installing Xcode and Homebrew, do the following in "Terminal" to Build and install :

```shell
cd tunit_path_name
./install
```

4. Create as many unit tests as you want with tunit.

## CentOS 7, Debian 9.7, Elementary OS 5.0, Fedora 29, LinuxMint 19.1, RedHat 7.5 and Ubuntu 18.04 (or later)

1. Do the following in "Terminal" to Build and install :

```shell
cd tunit_path_name
./install
```

2. Create as many unit tests as you want with tunit.


## Other linux Distribution

1. Install g++ 7 or later
  
   In order to build , you first need download and install g++ 7 or later.

   *Remarks: Verify if you can execute 'g++ --version' in "Terminal".*

2. Install CMake 3.3 or later
  
   After Microsoft Visual Studio, you need to install the latest version cmake from [https://cmake.org/download/](https://cmake.org/download/)

   *Remarks: Verify if you can execute 'cmake --version' in "Terminal", if it's no, add cmake install directory to your path.*

3. After installing g++ and CMake, do the following in "Terminal" to Build and install :

```shell
cd tunit_path_name
./install
```

4. Create as many delegates and events as you want with delegates.

______________________________________________________________________________________________

© 2021 Gammasoft.
