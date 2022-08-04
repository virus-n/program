#include<stdio.h>
#include<stdlib.h>
#define MIN(x,y) x>y?y:x
int main()
{
    int i=0,drop=0,count=0,inp[100]={0},ch,x,cap,orate,nsec;
    printf("enter capacity");
    scanf("%d",&cap);
    printf("enter output rate");
    scanf("%d",&orate);
    
    do{
        printf("enter packets coming at second %d",i+1)
        scanf("%d",inp[i]);
        if(inp[i]>cap)
        {
            printf("bucket overflow");
            printf("packet discarded");
            exit(0);
        }
        i++;
    }
    printf("\n enter 1 to continue to 0 to exit...........\n")
    scanf("%d",%ch);
    while(ch);
    nsec=i;
    printf("\n Second \t Recieved \t Sent \t Dropped \tRemained \n");
    for(i=0;count || i<nsec;i++)
{
	printf("  %d",i+1);
	printf(" \t\t%d\t ",inp[i]);
	printf(" \t%d\t ",MIN((inp[i]+count),orate));
	if((x=inp[i]+count-orate)>0)
    {
        count= x-cap;
        drop = cap;
    }
    else{
        count = x;
        drop = 0;
    }
}
else{
    count =0;
    drop=0;
}
printf(" \t %d\t %d \n",drop,count);

return 0;
}