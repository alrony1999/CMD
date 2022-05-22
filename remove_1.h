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

void destroy_1(string &command){
string filename;
 cin>>filename;
      ostringstream buffer;
   buffer<<".\\Outputs\\"<<command<<"\\"<<filename;
    remove(buffer.str().c_str());
   if (remove(buffer.str().c_str())!= 0){
   cout<<"File deleted"<<endl;cout<<endl;}else{
   cout<<"Error: File '"<<filename<<"' does not exist in current directory"<<endl;cout<<endl;}}
