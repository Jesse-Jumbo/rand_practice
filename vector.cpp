#if 1
/*
1.�üƲ���20�Ӥ���1~9���Ʀr��Joldarr��array��
2.�إߥt�@�ӦW��newarr��array
3.�Noldarr�����ˬd�O�_�bnewarr���A�S�X�{�L�h��Jnewarr
*/ 
#include <time.h>             				  			  /*time()*/
#include <stdlib.h>          				  			  /*rand(),srand()*/
#include <iostream>
#include <vector>
#include <algorithm>               
using namespace std;

int rand_number (){ return (rand()%9)+1; }


int main(void) {                              			  /* void �N��ڭ̪��D�{��������檺���G�Ǧ^���I�s�����{��(�i�ٲ�return 0;*/ 
	srand(time(NULL));                		  		  	  /*�H�����*/ /*srand()�̷�()���ѼƲ��Ͷü�*/ /*time()�̷ӥثe�ɶ�*/
//	int num=rand()%100;               		  			  /*rand()�l���H�����*//*%���l��*/
//	cout<<num<<end;
	
	vector<int> oldvec(20);
	vector<int> newvec;
	vector<int> ::iterator i;
	vector<int> ::iterator c;

	cout<<"�o�O�H��20�Ӥ���1~9���Ʀr"<<endl; 
	
	generate(oldvec.begin(), oldvec.end(), rand_number);  /*oldarr��[i]�����@���H������9���l��+1=(0~9)+1*/ /*�쥻��rand()�|�̷ӤW�����Ȳ��ͶüơA�Ӫ�l�ȬO0*/
  	
  	for(vector<int>::iterator it = oldvec.begin(); it!=oldvec.end(); it++){
	  
  		cout<< *it <<" ";
	}  
  
    cout<<endl<<"�o�O20���H��1~9�������ƪ��Ʀr"<<endl;
    
    i=oldvec.begin();
    
	newvec.push_back(*i);
	
	c=newvec.begin();
	
	newvec.reserve(9);
	while(i<oldvec.end()){                    	          /*�إߤ@�Ӵ`��run oldarr�����Ҧ����ءA�C���`������H�U:*/
		if(*i!= *c){           						      /*�`���P�_oldarr�������جO�_�S�����ƪ����ئbnewarr*/
			c+=1;                              			  /*�C���Nnewarr�����ޭ�+1*/
			if(c==newvec.end()){                          /*�p�G�@���P�_��newarr���̫�@�����S������*/
				newvec.push_back(*i);        			  /*�C���`����oldarr���P�_�����ƪ����ة�Jnewarr*/
			}
		}			
		if(*i == *c){           						  /*�p�Goldarr�������ةMnewarr�����ƪ�*/
			i++;                         				  /*����oldarr���U�Ӷ���*/
			c=newvec.begin();                             /*�Nnewarr���ޭ��k�s�A���s���*/
		} 				
	}		
	
	for(i = newvec.begin(); i<newvec.end(); i++){
		cout<< *i << " ";
	}

}
#endif

