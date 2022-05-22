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

int describe(void)
{
    string filename;
    HANDLE hFile1;
    FILETIME ftCreate;
    SYSTEMTIME  stUTC,stLocal;
     cin>>filename;
    ostringstream buffer;
    buffer<<".\\Outputs\\"<<filename;
    ifstream file(buffer.str().c_str());
    hFile1 = CreateFile(buffer.str().c_str(), GENERIC_READ, FILE_SHARE_READ,  NULL,  OPEN_EXISTING,  FILE_ATTRIBUTE_NORMAL, NULL);

    if(hFile1 == INVALID_HANDLE_VALUE)
    {
        printf("Error: File does not  exists in current directory\n", GetLastError());
        return -1;
    }

    if(!GetFileTime(hFile1, &ftCreate, NULL, NULL))
    {
        printf("Something wrong!\n");
        return false;
    }

    FileTimeToSystemTime(&ftCreate, &stUTC);
    SystemTimeToTzSpecificLocalTime(NULL, &stUTC, &stLocal); 
    cout<<"File "<<"'"<<filename<<"'"<<" ";
    printf("created on: %02d/%02d/%d %02d:%02d\n", stLocal.wDay, stLocal.wMonth, stLocal.wYear, stLocal.wHour, stLocal.wMinute);
    cout<<endl;



}

