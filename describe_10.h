#include <iostream>
#include<dir.h>
#include<dirent.h>
#include  <windows.h>
#include<sstream>
#include <string>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include <fstream>  
using namespace std; 

int describe_10(string &command_4, string &command_5,string &e)
{  

    HANDLE hFile2;
    FILETIME ftCreate;
    SYSTEMTIME  stUTC,stLocal;
     cin>>e;
  ostringstream buff;
   buff<<".\\Outputs\\"<<command_4<<"\\"<<command_5<<"\\"<<e;
    ifstream file(buff.str().c_str());
     hFile2 = CreateFile(buff.str().c_str(), GENERIC_READ, FILE_SHARE_READ,  NULL,  OPEN_EXISTING,  FILE_ATTRIBUTE_NORMAL, NULL);

    if(hFile2 == INVALID_HANDLE_VALUE)
    {
        printf("Error: File does not  exists in current directory\n", GetLastError());
        return -1;
    }

    if(!GetFileTime(hFile2, &ftCreate, NULL, NULL))
    {
        printf("Something wrong!\n");
        return false;
    }

    FileTimeToSystemTime(&ftCreate, &stUTC);
    SystemTimeToTzSpecificLocalTime(NULL, &stUTC, &stLocal); 
    cout<<"File "<<"'"<<e<<"'"<<" ";
    printf("created on: %02d/%02d/%d %02d:%02d\n", stLocal.wDay, stLocal.wMonth, stLocal.wYear, stLocal.wHour, stLocal.wMinute);
    cout<<endl;



}

