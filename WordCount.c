#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int wCount(char *file){
	FILE *fp = NULL;
	fp = fopen(file,"r");
	int w = 0;
	char a;
	char previous = ' ';
	while(!feof(fp)){
		a = fgetc(fp);
		
		if (a == ' ' || a == ','){
			w++;
			if(previous ==' '||previous == ','){
				w--;
			}
		}
		
		previous = a;
	}
	printf("word number:%d",w+1);
	fclose(fp);
	
} 
int cCount(char *file){
	FILE *fp = NULL;
	fp = fopen(file,"r");
	int c = 0;
	char a;
	while(!feof(fp)){
		a = fgetc(fp);
		c++;
	}
	printf("char number:%d",c);
	fclose(fp);
}
int main(int argc, char* argv[]){
		if(!strcmp(argv[1],"-w")) { 
        		wCount(argv[2]);                
        } 
		else if(!strcmp(argv[1],"-c"))  { 
				cCount(argv[2]);     
        } 
}
