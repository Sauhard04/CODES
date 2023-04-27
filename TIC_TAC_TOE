#include<stdio.h>
void main()
{
    char pl1[100],pl2[100];
    printf("NAME OF PLAYER 1: ");
    gets(pl1);
    printf("NAME OF PLAYER 2: ");
    gets(pl2);
    
    int ind,flg,i,j,n,m,a[3][3],count,p1,p2;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    
    lp:
    c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    printf("00 | 01 | 02\n-----------\n10 | 11 | 12\n-----------\n20 | 21 | 22\n");
    
    flg=1;
    count=0;
    p1=0;
    p2=0;
    wc1:
    while(flg){

        count+=1;
        printf("%s's chance:\n",pl1);
        printf("ENTER THE PLACE VALUE OF X:\n");          //FOR PLAYER 1 INPUT
        scanf("%d %d",&m,&n);
        a[m][n]=1;        
        
        if(!m && !n && c1<1)
        c1+=1;
        else if(!m && n==1 && c2<1)
        c2+=1;
        else if(!m && n==2 && c3<1)
        c3+=1;
        else if(m==1 && !n && c4<1)		//FOR CHECKING AVAILABILITY OF GIVEN INDEX NUMBER FR PLAYER 1	
        c4+=1;
        else if(m==1 && n==1 && c5<1)
        c5+=1;
        else if(m==1 && n==2 && c6<1)
        c6+=1;
        else if(m==2 && !n && c7<1)
        c7+=1;
        else if(m==2 && n==1 && c8<1)
        c8+=1;
        else if(m==2 && n==2 && c9<1)
        c9+=1;
        else{
            printf("WRONG CHOICE\n");
            goto wc1;
        }
        printf("\n");
        
        if(count>=3){
        for(i=0;i<3;i++){
            
                
            if((a[i][0]==a[i][1]) && (a[i][0]==a[i][2]) && a[i][0]==1){  //FOR CHECKING HORIZONTALLY
                flg=0;
                p1=1;
                break;                                 
            }                
            
            else if(a[0][i]==a[1][i] && a[0][i]==a[2][i] && a[0][i]==1){
            flg=0;
            p1=1;                                               //FOR CHECKING VERTICALLY
            break;
            
            }
        
    }
        
        if(a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[0][0]==1){
        flg=0;
        p1=1;                                                          //FOR PRIMARY DIAGONAL CHECKING
        break;
        }

        else if(a[2][0]==a[1][1] && a[1][1]==a[0][2] && a[1][1]==1){
        flg=0;
        p1=1;                                           //FOR SECONDARY DIAGONAL CHECKING
        break;
        }

        }
        
        if(flg){
        
        wc2:
        printf("%s's chance:\n",pl2);
        printf("ENTER THE PLACE VALUE OF O:\n");  //FOR PLAYER 2 INPUT
        scanf("%d %d",&m,&n);
        a[m][n]=0;

        if(!m && !n && c1<1)
        c1+=1;
        else if(!m && n==1 && c2<1)
        c2+=1;
        else if(!m && n==2 && c3<1)
        c3+=1;
        else if(m==1 && !n && c4<1)
        c4+=1;
        else if(m==1 && n==1 && c5<1)   //FOR CHECKING AVAILABLITY OF GIVEN INDEX NUMbER
        c5+=1;				//FOR PLAYER 2
        else if(m==1 && n==2 && c6<1)
        c6+=1;
        else if(m==2 && !n && c7<1)
        c7+=1;
        else if(m==2 && n==1 && c8<1)
        c8+=1;
        else if(m==2 && n==2 && c9<1)
        c9+=1;
        else{
            printf("WRONG CHOICE\n");
            goto wc2;
        }

        }
        
        if(count>=3){
        for(i=0;i<3;i++){
                
            if(a[i][0]==a[i][1] && a[i][j]==a[i][2] && flg && a[i][0]==0){  
                
                flg=0;
                p2=1;           //FOR HORIZONTAL CHECKING
                break;                                  
            }                
            else if(a[0][i]==a[1][i] && a[0][i]==a[2][i] && flg && a[0][i]==0){
            
            flg=0;
            p2=1;               //FOR VERTICAL CHECKING
            break;
            }

            
        }
        
        if(a[0][0]==a[1][1] && a[0][0]==a[2][2] && flg && a[1][1]==0){
        
        flg=0;
        p2=1;           //FOR PRIMARY DIAGONAL CHECKING
        break;
        
        }

        else if(a[2][0]==a[1][1] && a[1][1]==a[0][2] && flg && a[1][1]==0){
        
        flg=0;
        p2=1;           //FOR SECONDARY DIAGONAL CHECKING
        break;
        
        }
        }
        printf("\n\n");

        if(count==4)
        flg=0;

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]==1)
            printf("X\t");
            else if(a[i][j]==0)     //FOR GETTING OUTPUT OF THE MATRIX AFTER GAME COMPLETION
            printf("0\t");
            else
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }

    if(p1)
    printf("%s WON\n\n",pl1);
    else if(p2)
    printf("%s WON\n\n",pl2);
    else
    printf("DRAW\n\n");
    
    printf("TO START AGAIN PRESS 1: \nTO END, PRESS 0\n");
    scanf("%d",&ind);
    
    if(ind)
    goto lp;
    else
    printf("GAME OVER\n");

}
