#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main()
{
	
	FILE *fp;
	
	char ch;
	char c[1000];
	char line[2000];
	
	fp = fopen("one.txt","rw");
	
	if(fp==NULL)
	{
		printf("File not found");
	}
	
	else
	{
		printf("The file found");
	}
	
  /* fprintf(fp,"harsha");
   fprintf(fp,"anjani");
   printf("\n");
   
   while((ch=fgetc(fp))!=EOF)
   {
   	printf("%c",ch);
   }*/
   
    fscanf(fp,"%s",c);
    printf("%s",c);
    
    fscanf(fp,"%s",c);
    printf("%s",c);
    
    fscanf(fp,"%s",c);
    printf("%s",c);
    
     while (fgets(line, sizeof(line), fp)) {
        /* note that fgets don't strip the terminating \n, checking its
           presence would allow to handle lines longer that sizeof(line) */
        printf("%s", line); 
    }
    
    
   
	return 0;
	
	
}

  
