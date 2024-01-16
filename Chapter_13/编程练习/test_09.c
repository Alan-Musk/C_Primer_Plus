//修改程序清单13.3中的程序(addaword.c),从1开始,根据加入列表的顺序为每个字符串编号.当程序下次运行时,确保新的编号接着上次编号开始
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int get_number(FILE *);
int main(void)
{
    FILE * fp;
    char words[MAX];
    int count=1;
    if((fp=fopen("wordy","a+"))==NULL)
    {
        fprintf(stdout,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }
    count=get_number(fp);
    puts("Enter words to add to the file;press the #");
    puts("key at the beginning of a line to terminate.");
    while((fscanf(stdin,"%40s",words)==1)&&(words[0]!='#'))
    {
        fprintf(fp,"%d.%s\n",++count,words);
    }
    puts("File contents:");
    rewind(fp);
    while(fscanf(fp,"%s",words)==1)
    {
        puts(words);
    }
    puts("Done!");
    if(fclose(fp)!=0)
    {
        fprintf(stderr,"Error closing file\n");
    }
    return 0;
}

int get_number(FILE * fp)
{
    int i=0;
    char temp[MAX];
    rewind(fp);
    while(fgets(temp,MAX,fp)!=NULL)
    {
        i++;
    }
    return i;
}