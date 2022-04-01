#include "stdio.h"
#include "regist.h"


// Program begins from this section
int main(){
    
    int status;         
    long p;             
    int v1=0,v2=0;      
    
    existregist();
    
    int attmpt=1000;     
    while(attmpt>0){
        
    aply:
    printf("\nLet's a ride!!!\n");
    printf("Enter your vehicle number:");
    scanf("%li",&p);
   
    
    status = regist_status(p);
    int i,j=0,vstat=0,choice=0,pno;
    
    i=1;
    while(i<=1000){
        if(pd[i].vehiclenumber==p)
            j=i;
    i++;
    }
    
    if(status==-1){
        existregist();
        i=1;
        while(i<=1000){
            if(pd[i].vehiclenumber==0){
                printf("Fill details for registration\n");
                pd[i].vehiclenumber=pd[0].vehiclenumber;
                printf("Enter your phone number: ");
                scanf("%d",&pd[i].ph_number);
                printf("Enter your age: ");
                scanf("%d",&pd[i].age);
                printf("Enter your secret code: ");
                scanf("%d",&pd[i].secret_code);
                break;}
            i++;
        }
        printf("Credentials saved, log in again\n");
        goto aply;
    }
    else if (status==0){
        
        printf("Confirm user, enter ph.number\n");
        prv1:
        scanf("%d",&pno);
        if(pno==pd[j].ph_number)
            goto nxt1;
        else
            printf("Wrong credentials, try again\n");
            goto prv1;
        nxt1:
        printf("Time for ride\nSelect type\n");
        printf("1:up or down\n2:up and down\n");
        scanf("%d",&choice);
        if(pd[j].direction_type==0){
            switch (choice){
                case 1:
                    pd[j].direction_type=1;
                    break;
                case 2:
                    pd[j].direction_type=2;
                    break;
                default:
                    printf("Select option 1 or 2\n");
                    break;
                }
        }
    }
    else{
        // Verification
        printf("Confirm user, enter ph.number\n");
        prv2:
        scanf("%d",&pno);
        if(pno==pd[j].ph_number)
            goto nxt2;
        else
            printf("Wrong credentials, try again\n");
            goto prv2;
        }nxt2:

    vstat=vehicle_status(j);        

    if(vstat==1)
        printf("Please take your first ride\nYou travelled once\n");
    else if (vstat==2)
        printf("Please take your second ride\nYou have been travelled twice\n");
    else if (vstat==3)
        printf("You have completed travelling\n");
    
   
    if(pd[j].direction_type==1 && (vstat==1 || vstat==2))
        v1++;
    else if(pd[j].direction_type==2 && (vstat==1 || vstat==2))
        v2++;
    
    attmpt--;
    
    }

    printf("\nFinal list of vehicles and their rides\n");
    int i=1;
    while(i<=1000){
        if(pd[i].vehiclenumber!=0){
            printf("P%d vehicle:%li\n",i,pd[i].vehiclenumber);
            printf("P%d Phone no:%d\n",i,pd[i].ph_number);
            printf("P%d Age:%d\n",i,pd[i].age);
            printf("P%d Secret code:%d\n",i,pd[i].secret_code);
            printf("P%d ride type:%d\n",i,pd[i].direction_type);
            printf("P%d no of rides:%d\n",i,pd[i].user_tolls);
        }
    i++;
    }
    printf("\nride type 1(up or down):%d\n",v1);
    printf("ride 2(up and down):%d\n",v2);
}