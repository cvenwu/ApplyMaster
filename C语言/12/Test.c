#include<stdio.h>
typedef struct {
	int level;								/*file empty lebel of buffer*/
	unsigned flags; 						/*File status flags*/
	char fd;								/*File descriptor*/
	unsigned char hold;						/*unfetc cgar uf ni buffer*/
	int bsize;								/*Buffer size*/
	unsigned char _FAR *buffer;				/*Data transfer buffer*/
	unsigned char _FAR *curp;				/*Current active pointer*/
	unsigned istemp;						/*Temporary file indicator*/
	short token;							/*Used fir validity checking*/
	
} File;										/*This is the FILE object*/
