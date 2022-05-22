#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
using namespace std;
#include "upp.h"
#include "remove.h"
#include "remove_1.h"
#include "remove_2.h"
#include "remove_3.h"
#include "mkdir.h"
#include "mkdir_1.h"
#include "mkdir_2.h"
#include "mkdir_3.h"
#include  "dir.h"
#include  "dir_1.h"
#include  "dir_2.h"
#include  "dir_3.h"
#include "makefil.h"
#include "makefil_1.h"
#include "makefil_2.h"
#include "makefil_3.h"
#include "describe.h"
#include "describe_1.h"
#include "describe_2.h"
#include "describe_3.h"
#include "postmain_1.h"
#include "postmain_2.h"
#include "postmain_3.h"



int main() {


string task,a,b,c,d,e,f,g,h,i,j,k,x,l,m,n,o,p;
string cd="cd",mkfile="mkfile",mkdir="mkdir",rm="rm",dir="dir",des="des",cd_1="cd..";
ostringstream buffer;
	cout<<"Please input command "<<endl; 
             cout<<"/>";cin>>task;cout<<endl;
		    if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;}
		    if(task==mkfile){makefil();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==mkdir){make_directory();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==des){describe();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir){direct();cout<<"/>";cin>>task;cout<<endl;}}
		

        if(task==cd){
         if(cin>>command){
		 capitalize(command);
		 ostringstream buffer;
		 buffer<<".\\Outputs\\"<<command<<"\\";
		 CreateDirectory(buffer.str().c_str(),NULL);
	     cout<<"/"<<command<<">";cin>>task;cout<<endl;
	    
	    if(task==mkfile){
	    	makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
	      
		   if(task==mkfile){
	       	makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	
	       	if(task==mkfile){
			makefil_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       		       	
	       	if(task==mkdir){
			mkdir_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
		   
		   	if(task==des){
			describe_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==rm){
			destroy_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==dir){
			direct_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}
			if (task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			
		
			
	else if(task==mkdir){
		    mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
	        if(task==mkfile){
	       	makefil_1(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==mkdir){
			mkdir_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
		   
		   	if(task==des){
			describe_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==rm){
			destroy_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==dir){
			direct_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			
			else if(task==des){
			describe_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){
	       	makefil_1(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==mkdir){
			mkdir_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
		   
		   	if(task==des){
			describe_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==rm){
			destroy_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==dir){
			direct_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			
			else if(task==rm){
			destroy_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			
	        if(task==mkfile){
	       	makefil_1(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==mkdir){
			mkdir_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
		   
		   	if(task==des){
			describe_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==rm){
			destroy_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==dir){
			direct_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			
			else if(task==dir){
			direct_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			
			if(task==mkfile){
	       	makefil_1(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
		    if(task==cd_1){postmain_1();}
			}else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
	       	
	       	if(task==mkdir){
			mkdir_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}}
		   
		   	if(task==des){
			describe_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}
			if(task==cd_1){postmain_1();}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}}
	       	
	       	if(task==rm){
			destroy_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}}
	       	
	       	if(task==dir){
			direct_1(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir){direct_1(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}
			if(task==cd_1){postmain_1();}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
		    postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);
			}}
			
		  if(cin>>command_1){
	      capitalize(command_1);
	      ostringstream buffer;
		  buffer<<".\\Outputs"<<"\\"<<command<<"\\"<<command_1<<"\\";
		  CreateDirectory(buffer.str().c_str(),NULL);
		  cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
		  if(task==mkfile){
	    	makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
	      if(task==mkfile){
			makefil_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){ postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}
			} else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       		       	
	       	if(task==mkdir){
			mkdir_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,x,i,j,k,l,str,task);}}
		else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
		   
		   	if(task==des){
			describe_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
		else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==rm){
			destroy_2(command,command_1,x);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==dir){
			direct_2(command,command_1);
		    cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
			else if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}
			
			
			}else if(task==mkdir){
				mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
				if(task==mkfile){
	        makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
	       	if(task==mkfile){
			makefil_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       		       	
	       	if(task==mkdir){
			mkdir_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
		   
		   	if(task==des){
			describe_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==rm){
			destroy_2(command,command_1,x);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==dir){
			direct_2(command,command_1);
		    cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);}
			else if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
			
		else if(task==des){
			describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){
	       makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
	       	
	       	if(task==mkfile){
			makefil_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       		       	
	       	if(task==mkdir){
			mkdir_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
		   
		   	if(task==des){
			describe_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==rm){
			destroy_2(command,command_1,x);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==dir){
			direct_2(command,command_1);
		cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}
			if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}}
		     else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}}
			else if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}//jjj
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}}
		else if(task==rm){
			destroy_2(command,command_1,d);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			
		if(task==mkfile){
			makefil_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       		       	
	       	if(task==mkdir){
			mkdir_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
		   	if(task==des){
			describe_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==rm){
			destroy_2(command,command_1,x);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==dir){
			direct_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
			
		else if(task==dir){
			direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;		
			
			if(task==mkfile){
			makefil_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       		       	
	       	if(task==mkdir){
			mkdir_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
		   
		   	if(task==des){
			describe_2(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==rm){
			destroy_2(command,command_1,x);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);
			}
	       	
	       	if(task==dir){
			direct_2(command,command_1);
		    cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile){makefil_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir){mkdir_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des){describe_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm){destroy_2(command,command_1,x);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir){direct_2(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
			if(task==cd_1){postmain_2(command,command_1,a,b,c,d,e,f,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_3(command,command_1,m,n,o,p,task);}}
			else if(task==cd_1){postmain_2(command,command_1,a,b,c,d,f,e,g,h,i,j,k,l,str,task);}}
			else if(task==cd_1){postmain_2(command,command_1,a,b,c,d,f,e,g,h,i,j,k,l,str,task);}}
			else if (task!=cd && task!=cd_1 && task!=mkfile && task!=mkdir && task!=dir && task!=rm &&task!=des){
			cout<<"'"<<task<<" not recognized as a command"<<"'"<<endl;
			postmain_1();
			}
		    return 0;}
		
		
			
			
	
		


