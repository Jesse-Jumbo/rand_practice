#if 0
/*
1.亂數產生20個介於1~9的數字放入oldarr的array中
2.建立另一個名為newarr的array
3.將oldarr的值檢查是否在newarr中，沒出現過則放入newarr
*/ 
#include <time.h>             				  /*time()*/
#include <stdlib.h>          				  /*rand(),srand()*/
#include <iostream>
using namespace std;
int main(void) {                              /* void 代表我們的主程式不把執行的結果傳回給呼叫它的程式(可省略return 0;*/ 
	srand(time(NULL));                		  /*隨機函數*/ /*srand()依照()的參數產生亂數*/ /*time()依照目前時間*/
//	int num=rand()%100;               		  /*rand()召喚隨機函數*//*%取餘數*/
//	cout<<num<<end;
	
	int oldarr[20];
	int newarr[9];
	int i;
	int c;
	int j;
//	bool is_in_new = false;
	
	cout<<"這是隨機20個介於1~9的數字"<<endl; 
	
	for(i=0 ; i<20 ; i++){					  /*創建一個循環(起點i=0;直到i不<20,下次i+1*/ 
		oldarr[i]=(rand()%9)+1;				  /*oldarr的[i]項為一個隨機取除9的餘數+1=(0~9)+1*/ /*原本的rand()會依照上次的值產生亂數，而初始值是0*/
		cout << oldarr[i] <<" ";			  /*印出oldarr第[i]項*/
    } 
    
    cout<<endl<<"這是20個隨機1~9中不重複的數字"<<endl;
    
    i=0;
	c=0;
	j=0;
	while(i<20){                    	      /*建立一個循環run oldarr中的所有項目，每次循環執行以下:*/
		if(oldarr[i] != newarr[c]){           /*循環判斷oldarr中的項目是否沒有重複的項目在newarr*/
			c++;                              /*每次將newarr的索引值+1*/
			if(c==8){                         /*如果一直判斷到newarr的最後一項都沒有重複*/
				c=j;                          /*把newarr的索引值更新，初始為零*/
				newarr[c] = oldarr[i];        /*每次循環把oldarr中判斷不重複的項目放入newarr*/
				cout<<newarr[c]<<" ";         /*輸出newarr中的項目*/
				j++;                          /*用於每次成功放入項目後，重新指向newarr中的下一項*/
			}
			if(j>8){
				break;
			}
		}			
		if(oldarr[i] == newarr[c]){           /*如果oldarr中的項目和newarr有重複的*/
				i++;                          /*跳到oldarr的下個項目*/
				c=0;                          /*將newarr索引值歸零，重新比對*/
		} 				
	}			

//	for(i=0;i<20;i++){                        /*創建一個循環(起點i=0，一直到c<20，下次i+1)*/
//		is_in_new = false;					  /*_is_in_new為false*/
//		for(c=0;c<9;c++){					  /*創建一個循環(起點c=0，一直到c<9，下次c+1)*/ 
//			if(oldarr[i] == newarr[c]){       /*如果oldarr的第[i]項等於newarr第[c]項時*/
//				is_in_new = true;             /*is_in_new為真(防止跳出時，接續底下的if判斷式)*/ 
//				break;                        /*回到i的for循環(這時is_in_new又將再被初始化為false)*/ 
//			}
//		}	
//		if(!is_in_new){                       /*如果is_in_new為false時*/
//			for(j=0;j<9;j++){                 /*創建一個循環(起點j=0,一直到j<9，下次j+1)*/ 
//				if(newarr[j]==0){             /*如果newarr的第[j]項為空時*/
//					newarr[j] = oldarr[i];    /*newarr的第[j]項等於oldarr第[i]項*/
//					cout << newarr[j]<<" ";   /*印出newarr第[j]項的內容*/ 
//					break;	                  /*回到i的for迴圈*/
//				}
//			}
//		}	
//	}
	

	
/*    c=0;
	for(i=0;i<20;i++)
	{	
		if(oldarr[i] != newarr[0]&&oldarr[i] != newarr[1]&&oldarr[i] != newarr[2]&&oldarr[i] != newarr[3]&&oldarr[i] != newarr[4]&&oldarr[i] != newarr[5]&&oldarr[i] != newarr[6]&&oldarr[i] != newarr[7]&&oldarr[i] != newarr[8]&&oldarr[i] != newarr[9]){
			newarr[c] = oldarr[i];
			cout<<newarr[c]<<" ";
			c++; 		
		}
	}
*/	
}
#endif

