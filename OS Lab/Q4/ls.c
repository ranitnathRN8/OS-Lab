#include<stdio.h>
#include<dirent.h>

int main(){
    char dirname[10];
    DIR *p;
    struct dirent *d;
    printf("Enter directory name\n");
    scanf("%s",dirname);
    p=opendir(dirname);
    if(p==NULL){
        printf("Cannot find directory");
        error(-1);
    }
    while(d=readdir(p))
  printf("%s\n",d->d_name);
}