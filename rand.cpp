#if 0
/*
1.�üƲ���20�Ӥ���1~9���Ʀr��Joldarr��array��
2.�إߥt�@�ӦW��newarr��array
3.�Noldarr�����ˬd�O�_�bnewarr���A�S�X�{�L�h��Jnewarr
*/ 
#include <time.h>             				  /*time()*/
#include <stdlib.h>          				  /*rand(),srand()*/
#include <iostream>
using namespace std;
int main(void) {                              /* void �N��ڭ̪��D�{��������檺���G�Ǧ^���I�s�����{��(�i�ٲ�return 0;*/ 
	srand(time(NULL));                		  /*�H�����*/ /*srand()�̷�()���ѼƲ��Ͷü�*/ /*time()�̷ӥثe�ɶ�*/
//	int num=rand()%100;               		  /*rand()�l���H�����*//*%���l��*/
//	cout<<num<<end;
	
	int oldarr[20];
	int newarr[9];
	int i;
	int c;
	int j;
//	bool is_in_new = false;
	
	cout<<"�o�O�H��20�Ӥ���1~9���Ʀr"<<endl; 
	
	for(i=0 ; i<20 ; i++){					  /*�Ыؤ@�Ӵ`��(�_�Ii=0;����i��<20,�U��i+1*/ 
		oldarr[i]=(rand()%9)+1;				  /*oldarr��[i]�����@���H������9���l��+1=(0~9)+1*/ /*�쥻��rand()�|�̷ӤW�����Ȳ��ͶüơA�Ӫ�l�ȬO0*/
		cout << oldarr[i] <<" ";			  /*�L�Xoldarr��[i]��*/
    } 
    
    cout<<endl<<"�o�O20���H��1~9�������ƪ��Ʀr"<<endl;
    
    i=0;
	c=0;
	j=0;
	while(i<20){                    	      /*�إߤ@�Ӵ`��run oldarr�����Ҧ����ءA�C���`������H�U:*/
		if(oldarr[i] != newarr[c]){           /*�`���P�_oldarr�������جO�_�S�����ƪ����ئbnewarr*/
			c++;                              /*�C���Nnewarr�����ޭ�+1*/
			if(c==8){                         /*�p�G�@���P�_��newarr���̫�@�����S������*/
				c=j;                          /*��newarr�����ޭȧ�s�A��l���s*/
				newarr[c] = oldarr[i];        /*�C���`����oldarr���P�_�����ƪ����ة�Jnewarr*/
				cout<<newarr[c]<<" ";         /*��Xnewarr��������*/
				j++;                          /*�Ω�C�����\��J���ث�A���s���Vnewarr�����U�@��*/
			}
			if(j>8){
				break;
			}
		}			
		if(oldarr[i] == newarr[c]){           /*�p�Goldarr�������ةMnewarr�����ƪ�*/
				i++;                          /*����oldarr���U�Ӷ���*/
				c=0;                          /*�Nnewarr���ޭ��k�s�A���s���*/
		} 				
	}			

//	for(i=0;i<20;i++){                        /*�Ыؤ@�Ӵ`��(�_�Ii=0�A�@����c<20�A�U��i+1)*/
//		is_in_new = false;					  /*_is_in_new��false*/
//		for(c=0;c<9;c++){					  /*�Ыؤ@�Ӵ`��(�_�Ic=0�A�@����c<9�A�U��c+1)*/ 
//			if(oldarr[i] == newarr[c]){       /*�p�Goldarr����[i]������newarr��[c]����*/
//				is_in_new = true;             /*is_in_new���u(������X�ɡA���򩳤U��if�P�_��)*/ 
//				break;                        /*�^��i��for�`��(�o��is_in_new�S�N�A�Q��l�Ƭ�false)*/ 
//			}
//		}	
//		if(!is_in_new){                       /*�p�Gis_in_new��false��*/
//			for(j=0;j<9;j++){                 /*�Ыؤ@�Ӵ`��(�_�Ij=0,�@����j<9�A�U��j+1)*/ 
//				if(newarr[j]==0){             /*�p�Gnewarr����[j]�����Ů�*/
//					newarr[j] = oldarr[i];    /*newarr����[j]������oldarr��[i]��*/
//					cout << newarr[j]<<" ";   /*�L�Xnewarr��[j]�������e*/ 
//					break;	                  /*�^��i��for�j��*/
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

