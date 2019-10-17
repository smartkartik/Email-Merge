#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
int e=0,f=0,g=0,h=0,i=0,j=0,count=0;
	char buff[100],a1[10],a2[10],a3[10],a4[10],a5[10];
	
	fp=fopen("test.csv","r");
	while(fgetc(fp)!='\n'); // to take fp pointer to 2nd row   
	
	//for(count=0;count<=2;count++)
	while(fgets(buff,1000,fp))
	{
		f=0;
		g=0;
		h=0;
		i=0;
		j=0;
		//fgets(buff,1000,fp); 
		puts(buff);
		//copy serial number
		while(buff[f]!=',')	
			{
				a1[f]=buff[f];
				f++;
			}
			a1[f]='\0';
	 	puts(a1);
		//copy student name
		f+=1;
		while(buff[f]!=',')	
			{
				a2[g]=buff[f];
				f++;
				g++;
			}
			a2[g]='\0';
	 	puts(a2);
		//title
		f+=1;
		while(buff[f]!=',')	
			{
				a3[h]=buff[f];
				f++;
				h++;
			}
			a3[h]='\0';
	 	puts(a3);
		//parent name
		f+=1;
		while(buff[f]!=',')	
			{
				a4[i]=buff[f];
				f++;
				i++;
			}
			a4[i]='\0';
	 	puts(a4);
		//attandance
		f+=1;
		while(buff[f]!='\n')	
			{
				a5[j]=buff[f];
				f++;
				j++;
			}
			a5[j]='\0';
	 	puts(a5);
	
	printf("\nDear %s %s",a3,a4);
	printf("\nGreetings");
	printf("\nThis is to inform you that the attendance of your ward %s is %s",a2,a5);
	printf("\nThank you !\n");
	}
}
