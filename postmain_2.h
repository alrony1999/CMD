#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
using namespace std;
#include "makefil_9.h"
#include "makefil_10.h"
#include "mkdir_9.h"
#include "mkdir_10.h"
#include "remove_9.h"
#include "remove_10.h"
#include "dir_9.h"
#include "dir_10.h"
#include "describe_9.h"
#include "describe_10.h"
#include "upp_2.h"

 

string task_1;
string cd_23="cd",mkfile_23="mkfile",mkdir_23="mkdir",rm_23="rm",dir_23="dir",des_23="des",cd_31="cd..";
ostringstream buff;
 	string str= "cd..";
 	const char *c = str.c_str();
 	

 void postmain_2(string &command_4 , string &command_5,
 string &a,string&b,string &c,string &d,string &f,string &e,string &g,
 string &h,string &i,string &j,string &k,string &l,string &str,string &task_1){
 	
   cout<<endl;cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	    
 
         ostringstream buff;
		 buff<<".\\Outputs\\"<<command_4<<"\\";
		 CreateDirectory(buff.str().c_str(),NULL);
	        if(task_1==mkfile_23){
	    	makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	      if(task_1==mkfile_23){
	       	makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	       	
	       	if(task_1==mkfile_23){
			makefil_9(command_4,b);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       		       	
	       	if(task_1==mkdir_23){
			mkdir_9(command_4,c);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
		   
		   	if(task_1==des_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}
			}
	       	
	       	if(task_1==rm_23){
			destroy_9(command_4,d);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==dir_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
			
		}}
			
		
			
	else if(task_1==mkdir_23){
		mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	
	     if(task_1==mkfile_23){
	       	makefil_9(command_4,b);
	       	cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	       	if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==mkdir_23){
			mkdir_9(command_4,c);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
		   
		   	if(task_1==des_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}
			}
	       	
	       	if(task_1==rm_23){
			destroy_9(command_4,d);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==dir_23){
			direct_9(command_4);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
			
			}
			
			else if(task_1==des_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			     if(task_1==mkfile_23){
	       	makefil_9(command_4,b);
	       	cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	       	if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==mkdir_23){
			mkdir_9(command_4,c);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
		   
		   	if(task_1==des_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}
			}
	       	
	       	if(task_1==rm_23){
			destroy_9(command_4,d);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==dir_23){
			direct_9(command_4);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}}
			}
			
			else if(task_1==rm_23){
			destroy_9(command_4,d);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			
	        if(task_1==mkfile_23){
	       	makefil_9(command_4,b);
	       	cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	       	if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==mkdir_23){
			mkdir_9(command_4,c);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
		   
		   	if(task_1==des_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}
			}
	       	
	       	if(task_1==rm_23){
			destroy_9(command_4,d);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==dir_23){
			direct_9(command_4);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
			}
			
			else if(task_1==dir_23){
			direct_9(command_4);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			
			if(task_1==mkfile_23){
	       	makefil_9(command_4,b);
	       	cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
	       	if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
		    }
	       	
	       	if(task_1==mkdir_23){
			mkdir_9(command_4,c);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
		   
		   	if(task_1==des_23){
			describe_9(command_4,a);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}
			}
	       	
	       	if(task_1==rm_23){
			destroy_9(command_4,d);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
	       	
	       	if(task_1==dir_23){
			direct_9(command_4);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_9(command_4,b);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_9(command_4,c);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_9(command_4,a);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_9(command_4,d);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_9(command_4);cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;}}
			}
					
		}
		
		if(cin>>command_5||cout<<"/"<<command_4<<"/"<<command_5<<">"){
		cap_4_4(command_5);
	     ostringstream buff;
		 buff<<".\\Outputs"<<"\\"<<command_4<<"\\"<<command_5<<"\\";
		 CreateDirectory(buff.str().c_str(),NULL);
		 cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
		 if(task_1==mkfile_23){
	    	makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
	      if(task_1==mkfile_23){
			makefil_10(command_4,command_5,f);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
			 else if(task_1!=cd_23 && task_1!=cd_31  && task_1!=mkfile_23 && task_1!=mkdir_23 && task_1!=dir_23 && task_1!=rm_23 &&task_1!=des_23 )
		     {if (cin>>command_5){cout<<"'"<<task_1<<" not recognized as a command"<<"'"<<endl;
		     postmain_2(command_4,command_5,a,b,c,d,e,f,g,h,i,j,k,l,str,task_1);}}
	       	
	       		       	
	       	if(task_1==mkdir_23){
			mkdir_10(command_4,command_5,g);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
		   
		   	if(task_1==des_23){
			describe_10(command_4,command_5,e);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==rm_23){
			destroy_10(command_4,command_5,h);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==dir_23){
			direct_10(command_4,command_5);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
			
			}else if(task_1==mkdir_23){
				mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
				if(task_1==mkfile_23){
	        makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
	       	if(task_1==mkfile_23){
			makefil_10(command_4,command_5,f);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       		       	
	       	if(task_1==mkdir_23){
			mkdir_10(command_4,command_5,g);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
		   
		   	if(task_1==des_23){
			describe_10(command_4,command_5,e);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==rm_23){
			destroy_10(command_4,command_5,h);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==dir_23){
			direct_10(command_4,command_5);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}}}
			
		else if(task_1==des_23){
			describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){
	       makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
	       	
	       	if(task_1==mkfile_23){
			makefil_10(command_4,command_5,f);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       		       	
	       	if(task_1==mkdir_23){
			mkdir_10(command_4,command_5,g);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
		   
		   	if(task_1==des_23){
			describe_10(command_4,command_5,e);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==rm_23){
			destroy_10(command_4,command_5,h);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==dir_23){
			direct_10(command_4,command_5);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}}}
			
		else if(task_1==rm_23){
			destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			
		if(task_1==mkfile_23){
			makefil_10(command_4,command_5,f);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       		       	
	       	if(task_1==mkdir_23){
			mkdir_10(command_4,command_5,g);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
		   
		   	if(task_1==des_23){
			describe_10(command_4,command_5,e);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==rm_23){
			destroy_10(command_4,command_5,h);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==dir_23){
			direct_10(command_4,command_5);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}}
			
		else if(task_1==dir_23){
			direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;		
			
			if(task_1==mkfile_23){
			makefil_10(command_4,command_5,f);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       		       	
	       	if(task_1==mkdir_23){
			mkdir_10(command_4,command_5,g);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
		   
		   	if(task_1==des_23){
			describe_10(command_4,command_5,e);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==rm_23){
			destroy_10(command_4,command_5,h);
			cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}
	       	
	       	if(task_1==dir_23){
			direct_10(command_4,command_5);
			cout<<"/"<<command_4<<">";cin>>task_1;cout<<endl;
			if(task_1==mkfile_23){makefil_10(command_4,command_5,f);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==mkdir_23){mkdir_10(command_4,command_5,g);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==des_23){describe_10(command_4,command_5,e);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==rm_23){destroy_10(command_4,command_5,h);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}
	       	if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;
			if(task_1==dir_23){direct_10(command_4,command_5);cout<<"/"<<command_4<<"/"<<command_5<<">";cin>>task_1;cout<<endl;}}}}}			

		 
	   }
