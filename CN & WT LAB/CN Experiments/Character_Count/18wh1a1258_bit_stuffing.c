#include<stdio.h>
#include<string.h>
void main()
{
    int data[20],stuffdata[30],i,j,k,count,n;
    printf("Enter frame size :");
    scanf("%d",&n);
    printf("Enter the data: \n");
    for(i=0; i<n; i++) {
        scanf("%d",&data[i]);
    }
    printf("AT SENDER\n");
    for(i=0;i<n;i++) {
	    printf("%d",data[i]);
    }
    printf("\n");
    i=0;
    count=1;
    j=0;
    printf("AT RECEIVER\n");
    printf("After Stuffing: ");
    printf("01111110");
    for(i=0;i<n;i++)
    {
        if(data[i]==1)
        {
            stuffdata[j]=data[i];
            for(k=i+1; data[k]==1 && k<n && count<5; k++)
            {
                j++;
                stuffdata[j]=data[k];
                count++;
                if(count==5)
                {
                    j++;
                    stuffdata[j]=0;
                }
                i=k;
            }
        }
        else
        {
            stuffdata[j]=data[i];
        }
        
        j++;
    }
    for(i=0; i<j; i++){
        printf("%d",stuffdata[i]);
    }
    printf("01111110\n");
    printf("After DeStuffing: ");
    for(i=0;i<n;i++) {
	    printf("%d",data[i]);
    }
    printf("\n");
}
