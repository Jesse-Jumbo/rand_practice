#if 1
/*
1.亂數產生20個介於1~9的數字放入oldarr的array中
2.建立另一個名為newarr的array
3.將oldarr的值檢查是否在newarr中，沒出現過則放入newarr
*/ 
#include <time.h>             				  			  /*time()*/
#include <stdlib.h>          				  			  /*rand(),srand()*/
#include <iostream>
#include <vector>
#include <algorithm>               
using namespace std;

int rand_number (){ return (rand()%9)+1; }


int main(void) {                              			  /* void 代表我們的主程式不把執行的結果傳回給呼叫它的程式(可省略return 0;*/ 
	srand(time(NULL));                		  		  	  /*隨機函數*/ /*srand()依照()的參數產生亂數*/ /*time()依照目前時間*/
//	int num=rand()%100;               		  			  /*rand()召喚隨機函數*//*%取餘數*/
//	cout<<num<<end;
	
	vector<int> oldvec(20);
	vector<int> newvec;
	vector<int> ::iterator i;
	vector<int> ::iterator c;

	cout<<"這是隨機20個介於1~9的數字"<<endl; 
	
	generate(oldvec.begin(), oldvec.end(), rand_number);  /*oldarr的[i]項為一個隨機取除9的餘數+1=(0~9)+1*/ /*原本的rand()會依照上次的值產生亂數，而初始值是0*/
  	
  	for(vector<int>::iterator it = oldvec.begin(); it!=oldvec.end(); it++){
	  
  		cout<< *it <<" ";
	}  
  
    cout<<endl<<"這是20個隨機1~9中不重複的數字"<<endl;
    
    i=oldvec.begin();
    
	newvec.push_back(*i);
	
	c=newvec.begin();
	
	newvec.reserve(9);
	while(i<oldvec.end()){                    	          /*建立一個循環run oldarr中的所有項目，每次循環執行以下:*/
		if(*i!= *c){           						      /*循環判斷oldarr中的項目是否沒有重複的項目在newarr*/
			c+=1;                              			  /*每次將newarr的索引值+1*/
			if(c==newvec.end()){                          /*如果一直判斷到newarr的最後一項都沒有重複*/
				newvec.push_back(*i);        			  /*每次循環把oldarr中判斷不重複的項目放入newarr*/
			}
		}			
		if(*i == *c){           						  /*如果oldarr中的項目和newarr有重複的*/
			i++;                         				  /*跳到oldarr的下個項目*/
			c=newvec.begin();                             /*將newarr索引值歸零，重新比對*/
		} 				
	}		
	
	for(i = newvec.begin(); i<newvec.end(); i++){
		cout<< *i << " ";
	}

}
#endif

