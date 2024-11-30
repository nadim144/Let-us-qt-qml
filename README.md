# Let Us QT/QML 

Before starting anything regarding tutorial. let's talk about installation process. QT/QML is available for all 3 Operating system anlog with mobile ansd web development. I have install QT on windows.

**QT installation on WIndows:**

+ go for download page [QT download here](https://www.qt.io/download-qt-installer-oss)
+ there is online and offline version you can go wwith either choice.
+ I tried online version and i face issue, and solution for that is: "**.\qt-online-installer-windows-x64-4.8.1.exe** --mirror http://www.nic.funet.fi/pub/mirrors/download.qt-project.org"
+ where **.\qt-online-installer-windows-x64-4.8.1.exe** is qt download installe, and "--mirror http://www.nic.funet.fi/pub/mirrors/download.qt-project.org" is a parameter. 
![QT installer page](img/image.png)

After intallation of QT Creaator, it is very new for me to write program in it. Let's start **Hello World** program.

+ Open QT Creator and from **File->New Project** or make sure **Welcome(Home)** button is selected.
+ In new Project template, choose **other project** from letf hand side project template and then select **Empty qmake project**. see image below.
![New Project Template](img/img-1.jpg)
+ Next, Give Project name as - **00-EmptyQmakeProject** and arespective path and check the default project location. and click next.
![Priject Name and Laction](img/img-2.jpg)
+ Now it will promt for Kit selection, For my case I selected all three Debug and Release configuration. However it is not need to selected all three. it is depence upn you target for which you developing your application like some device or mobile (Andriod or Applle) or Desktop application.
![Kit Slection](img/img-3.jpg)
+ Next, don't select anything simply click on finish. 

In seconds you will find project get created in Project explorer with name of **00-EmptyQmakeProject.pro** and **00-EmptyQmakeProject.exe**, You observe that, this is empty project. so, Now we need to add atleast one .cpp file like main.cpp. Write click on project and click on Add New and select c/C++ file and give name as main.cpp. and write and Hello World program into main.cpp file as below.

```
#include <iostream>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    return 0;
}
```
+ To compile this program, right click on project - **00-EmptyQmakeProject.pro** and build once build succefull then run. smae build and run is possible left-below icon. 

output:

**`Program:`** Worite a program to print **Hello, Qt Console App!**. using QSting project type should be Qt Console application.

**01-FirstQtConsoleApplication**

![Qt Console App](img/img-4.jpg)
```
#include <iostream>
#include <QString>
using namespace std;

int main()
{
    QString name = "Qt Console App";
    cout << "Hello, " << name.toStdString() << "!" << endl;
    return 0;
}
```

output:
>Hello, Qt Console App!

