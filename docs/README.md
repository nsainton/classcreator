# Classcreator : CPP classes designed in Orthodox Canonical Form

> :fr: French documentation available [here](#)

## How to use it ?

> :bulb: You can check your bash version with `bash --version`

1. Your bash version is >= 4.0 : you can run using the following command

<blockquote>

```bash
bash <(curl -fsSL --connect-timeout 10 https://raw.githubusercontent.com/nsainton/classcreator/main/classcreator.sh) Classname header_dir sources_dir
```

</blockquote>

2.	Your bash version is < 4.0 : you can run using the following command

<blockquote>

```bash
curl -fsSL --connect-timeout 10 https://raw.githubusercontent.com/nsainton/classcreator/main/classcreator.sh -o sh /tmp/classcreator.sh && /tmp/classcreator.sh Classname header_dir sources_dir
```

</blockquote>


## What does it do

This script can create a .cpp file and a .h file for a C++ class with the name "Classname" (quotes omitted). <br/>
This class will contain :
1.	A default constructor `Classname::Classname()`
2.	A copy constructor `Classname::Classname( const Classname & other )`
3.	A copy assignment operator `Classname & Classname::Classname( const Classname & other )`
4.	A virtual destructor `Classname::~Classname()`

It is design to comply with the Orthodox canonical form and is such that the file outputed by the Script will compile right away with all the compiler warnings enabled. <br/>
Although they do absolutely nothing apart from writting the functions that are called to std::clog ostream object.

## What arguments can I provide to the Script?

This script can be executed in 3 distinct ways :
1.	./classcreator Classname -> creates a Classname.cpp and Classname.h class file in the current directory
2.	./classcreator Classname dir -> creates a dir/Classname.cpp and a dir/Classname.h file in the specified directory
3.	./classcreator Classname header\_dir class\_dir -> creates a header\_dir/classname.h and a class\_dir/classname.cpp file in the specified directories and source files

> :bulb: Any non-existent directory will be created by the script

## What will I get after executing the Script ?

Let's run the command : `./classcreator Test header sources` in an empty directory <br/>
We will get two new files : sou
