#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char ans[100];
    void sender()
    {
    int i,n,len;
    char frame[100],l[100];
    printf("enter the number of frames:");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        printf("enter frame %d:", i+1); //amit   char
        scanf("%s", frame);            
        len=strlen(frame);               // 4    int
        sprintf(l,"%d",len);            //char
        strcat(l,frame);        
        strcat(ans,l);       
        printf("message is : %s",ans);
        printf("\n");
        
    }
    }
    void receiver()
    {
        int len,i,j;
        printf("received frame is\n");
        for(int i=0;i<strlen(ans);i++)    // 4amit3adi  9
        {
            len=ans[i]-'0';               //into int   4 
            for(j=i+1;j<=(i+len);j++)       
            {
                printf("%c", ans[j]);
            }
            i=i+len;
            printf("\n");
        }
    }
    int main()
    {
        sender();
        receiver();
        return 0;
    }