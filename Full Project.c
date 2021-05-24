#include<stdio.h>
#include<math.h>
#include<string.h>
struct HRe{
    char Name[51];
    char Position[51];
};
int Employee_HR_A_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ATW;
    FILE *fhra=fopen("HRE A's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D2=EH-SH;
        }
    }
    ATW=W4+D1+D2;
    return ATW;
}
int Employee_HR_B_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,BTW;
    FILE *fhrb=fopen("HRE B's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D2=EH-SH;
        }
    }
    BTW=W4+D1+D2;
    return BTW;
}
int Employee_HR_C_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,CTW;
    FILE *fhrc=fopen("HRE C's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=1;i<=4;i++){
            if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D2=EH-SH;
        }
    }
    CTW=W4+D1+D2;
    return CTW;
}
int Employee_HR_D_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,DTW;
    FILE *fhrd=fopen("HRE D's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D2=EH-SH;
        }
    }
    DTW=W4+D1+D2;
    return DTW;
}
int Employee_HR_E_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ETW;
    FILE *fhre=fopen("HRE E's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D2=EH-SH;
        }
    }
    ETW=W4+D1+D2;
    return ETW;
}
int Employee_HR_F_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,FTW;
    FILE *fhrf=fopen("HRE F's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrf,"%d",&SH);
        fscanf(fhrf,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrf,"%d",&SH);
        fscanf(fhrf,"%d",&EH);
        D2=EH-SH;
        }
    }
    FTW=W4+D1+D2;
    return FTW;
}
int Employee_HR_G_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,GTW;
    FILE *fhrg=fopen("HRE G's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrg,"%d",&SH);
        fscanf(fhrg,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrg,"%d",&SH);
        fscanf(fhrg,"%d",&EH);
        D2=EH-SH;
        }
    }
    GTW=W4+D1+D2;
    return GTW;
}
int Employee_HR_H_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,HTW;
    FILE *fhrh=fopen("HRE H's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrh,"%d",&SH);
            fscanf(fhrh,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrh,"%d",&SH);
            fscanf(fhrh,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrh,"%d",&SH);
            fscanf(fhrh,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrh,"%d",&SH);
            fscanf(fhrh,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrh,"%d",&SH);
            fscanf(fhrh,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrh,"%d",&SH);
            fscanf(fhrh,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrh,"%d",&SH);
        fscanf(fhrh,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrh,"%d",&SH);
        fscanf(fhrh,"%d",&EH);
        D2=EH-SH;
        }
    }
    HTW=W4+D1+D2;
    return HTW;
}
int Employee_HR_I_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ITW;
    FILE *fhri=fopen("HRE I's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhri,"%d",&SH);
            fscanf(fhri,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhri,"%d",&SH);
            fscanf(fhri,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhri,"%d",&SH);
            fscanf(fhri,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhri,"%d",&SH);
            fscanf(fhri,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhri,"%d",&SH);
            fscanf(fhri,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhri,"%d",&SH);
            fscanf(fhri,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhri,"%d",&SH);
        fscanf(fhri,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhri,"%d",&SH);
        fscanf(fhri,"%d",&EH);
        D2=EH-SH;
        }
    }
    ITW=W4+D1+D2;
    return ITW;
}
struct PDe{
    char Name[51];
    char Position[51];
};
int Employee_PD_A_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ATW;
    FILE *fhra=fopen("PE A's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D2=EH-SH;
        }
    }
    ATW=W4+D1+D2;
    return ATW;
}
int Employee_PD_B_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,BTW;
    FILE *fhrb=fopen("PE B's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D2=EH-SH;
        }
    }
    BTW=W4+D1+D2;
    return BTW;
}
int Employee_PD_C_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,CTW;
    FILE *fhrc=fopen("PE C's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=1;i<=4;i++){
            if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D2=EH-SH;
        }
    }
    CTW=W4+D1+D2;
    return CTW;
}
int Employee_PD_D_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,DTW;
    FILE *fhrd=fopen("PE D's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D2=EH-SH;
        }
    }
    DTW=W4+D1+D2;
    return DTW;
}
int Employee_PD_E_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ETW;
    FILE *fhre=fopen("PE E's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D2=EH-SH;
        }
    }
    ETW=W4+D1+D2;
    return ETW;
}
int Employee_PD_F_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,FTW;
    FILE *fhrf=fopen("PE F's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrf,"%d",&SH);
        fscanf(fhrf,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrf,"%d",&SH);
        fscanf(fhrf,"%d",&EH);
        D2=EH-SH;
        }
    }
    FTW=W4+D1+D2;
    return FTW;
}
int Employee_PD_G_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,GTW;
    FILE *fhrg=fopen("PE G's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrg,"%d",&SH);
            fscanf(fhrg,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrg,"%d",&SH);
        fscanf(fhrg,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrg,"%d",&SH);
        fscanf(fhrg,"%d",&EH);
        D2=EH-SH;
        }
    }
    GTW=W4+D1+D2;
    return GTW;
}
struct MDe{
    char Name[51];
    char Position[51];
};
int Employee_MD_A_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ATW;
    FILE *fhra=fopen("ME A's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D2=EH-SH;
        }
    }
    ATW=W4+D1+D2;
    return ATW;
}
int Employee_MD_B_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,BTW;
    FILE *fhrb=fopen("ME B's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D2=EH-SH;
        }
    }
    BTW=W4+D1+D2;
    return BTW;
}
int Employee_MD_C_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,CTW;
    FILE *fhrc=fopen("ME C's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=1;i<=4;i++){
            if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D2=EH-SH;
        }
    }
    CTW=W4+D1+D2;
    return CTW;
}
int Employee_MD_D_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,DTW;
    FILE *fhrd=fopen("ME D's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D2=EH-SH;
        }
    }
    DTW=W4+D1+D2;
    return DTW;
}
int Employee_MD_E_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ETW;
    FILE *fhre=fopen("ME E's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D2=EH-SH;
        }
    }
    ETW=W4+D1+D2;
    return ETW;
}
struct LDe{
    char Name[51];
    char Position[51];
};
int Employee_LD_A_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ATW;
    FILE *fhra=fopen("LE A's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D2=EH-SH;
        }
    }
    ATW=W4+D1+D2;
    return ATW;
}
int Employee_LD_B_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,BTW;
    FILE *fhrb=fopen("LE B's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D2=EH-SH;
        }
    }
    BTW=W4+D1+D2;
    return BTW;
}
int Employee_LD_C_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,CTW;
    FILE *fhrc=fopen("LE C's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=1;i<=4;i++){
            if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D2=EH-SH;
        }
    }
    CTW=W4+D1+D2;
    return CTW;
}
int Employee_LD_D_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,DTW;
    FILE *fhrd=fopen("LE D's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D2=EH-SH;
        }
    }
    DTW=W4+D1+D2;
    return DTW;
}
int Employee_LD_E_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ETW;
    FILE *fhre=fopen("LE E's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhre,"%d",&SH);
            fscanf(fhre,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhre,"%d",&SH);
        fscanf(fhre,"%d",&EH);
        D2=EH-SH;
        }
    }
    ETW=W4+D1+D2;
    return ETW;
}
int Employee_LD_F_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,FTW;
    FILE *fhrf=fopen("LE F's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrf,"%d",&SH);
            fscanf(fhrf,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrf,"%d",&SH);
        fscanf(fhrf,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrf,"%d",&SH);
        fscanf(fhrf,"%d",&EH);
        D2=EH-SH;
        }
    }
    FTW=W4+D1+D2;
    return FTW;
}
struct ADe{
    char Name[51];
    char Position[51];
};
int Employee_AD_A_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ATW;
    FILE *fhra=fopen("AE A's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D2=EH-SH;
        }
    }
    ATW=W4+D1+D2;
    return ATW;
}
int Employee_AD_B_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,BTW;
    FILE *fhrb=fopen("AE B's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D2=EH-SH;
        }
    }
    BTW=W4+D1+D2;
    return BTW;
}
int Employee_AD_C_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,CTW;
    FILE *fhrc=fopen("AE C's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=1;i<=4;i++){
            if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D2=EH-SH;
        }
    }
    CTW=W4+D1+D2;
    return CTW;
}
int Employee_AD_D_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,DTW;
    FILE *fhrd=fopen("AE D's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D2=EH-SH;
        }
    }
    DTW=W4+D1+D2;
    return DTW;
}
struct IDe{
    char Name[51];
    char Position[51];
};
int Employee_ID_A_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,ATW;
    FILE *fhra=fopen("ITE A's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhra,"%d",&SH);
            fscanf(fhra,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhra,"%d",&SH);
        fscanf(fhra,"%d",&EH);
        D2=EH-SH;
        }
    }
    ATW=W4+D1+D2;
    return ATW;
}
int Employee_ID_B_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,BTW;
    FILE *fhrb=fopen("ITE B's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrb,"%d",&SH);
            fscanf(fhrb,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=2;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrb,"%d",&SH);
        fscanf(fhrb,"%d",&EH);
        D2=EH-SH;
        }
    }
    BTW=W4+D1+D2;
    return BTW;
}
int Employee_ID_C_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,CTW;
    FILE *fhrc=fopen("ITE C's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrc,"%d",&SH);
            fscanf(fhrc,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
        for(i=1;i<=4;i++){
            if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
        }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrc,"%d",&SH);
        fscanf(fhrc,"%d",&EH);
        D2=EH-SH;
        }
    }
    CTW=W4+D1+D2;
    return CTW;
}
int Employee_ID_D_WT(){
    int SH,EH,i,j,k,D1=0,D2=0,D3=0,D4=0,D5=0,D6=0,W1=0,W2=0,W3=0,W4=0,DTW;
    FILE *fhrd=fopen("ITE D's work Schedule.txt","r");
        for(j=1;j<=6;j++){
            if(j==1){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D1=EH-SH;
            }
            else if(j==2){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D2=EH-SH;
            }
            else if(j==3){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D3=EH-SH;
            }
            else if(j==4){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D4=EH-SH;
            }
            else if(j==5){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D5=EH-SH;
            }
            else if(j==6){
            fscanf(fhrd,"%d",&SH);
            fscanf(fhrd,"%d",&EH);
            D6=EH-SH;
            }
            W1=D1+D2+D3+D4+D5+D6;
        }
    for(i=1;i<=4;i++){
        if(i==2){
                W2=W1+D1+D2+D3+D4+D5+D6;
            }
            else if(i==3){
                W3=W2+D1+D2+D3+D4+D5+D6;
            }
            else if(i==4){
                W4=W3+D1+D2+D3+D4+D5+D6;
            }
    }
    for(k=1;k<=2;k++){
        if(k==1){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D1=EH-SH;
        }
        else if(k==2){
        fscanf(fhrd,"%d",&SH);
        fscanf(fhrd,"%d",&EH);
        D2=EH-SH;
        }
    }
    DTW=W4+D1+D2;
    return DTW;
}
void HR_Department(){
    printf("Number of employees in HR Department: 9\n");
    printf("Name of employees and their positions:\n");
    int i,j,option,ATW,BTW,CTW,DTW,ETW,FTW,GTW,HTW,ITW,AEW,BEW,CEW,DEW,EEW,FEW,GEW,HEW,IEW,IRA,IRB,IRC,IRD,IRE,IRF,IRG,IRH,IRI,HR;
    char Name[51],Position[51],Given_Name[51];
    printf("Name\t Position\n");
    struct HRe Employee[10];
    FILE *f=fopen("HR Department info.txt","r");
    for(i=1;i<=9;i++){
        fscanf(f,"%s",Employee[i].Name);
        fgets(Employee[i].Position,51,f);
    }
    for(i=1;i<=9;i++){
        printf("%s\t",Employee[i].Name);
        printf("%s",Employee[i].Position);
    }
    printf("\nWhat do you want to do?\n");
    printf("1. Want to know any employee's salary?\n");
    printf("2. Want to know any employee's total work time of that month?\n");
    printf("3. Want to know the amount of extra hours done by any employee of that month?\n");
    printf("4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n");
    printf("5. Want to find out all of the above of any employee?\n");
    printf("6. Want to know if any of the employee will be fired or not?\n");
    printf("7. Quit\n");
    printf("Select an option:\n");
    while(1){
    scanf("%d",&option);
    if(option==1){
    printf("Enter a Name from above employee list\n");
    fflush(stdin);
    gets(Given_Name);
        if(strcmp("A",Given_Name)==0){
            printf("A is a General Manager\nA's salary is 100,000 Taka\n");
        }
        else if(strcmp("B",Given_Name)==0){
            printf("B is an Executive officer\nB's salary is 75,000 Taka\n");
        }
        else if(strcmp("C",Given_Name)==0){
            printf("C is a Senior Officer\nC's salary is 55,000 Taka\n");
        }
        else if(strcmp("D",Given_Name)==0){
            printf("D is a Junior Officer\nD's salary is 38,000 Taka\n");
        }
        else if(strcmp("E",Given_Name)==0){
            printf("E is an Officer\nE's salary is 25,000 Taka\n");
        }
        else if(strcmp("F",Given_Name)==0){
            printf("F is an Officer\nF's salary is 25,000 Taka\n");
        }
        else if(strcmp("G",Given_Name)==0){
            printf("G is an Officer\nG's salary is 25,000 Taka\n");
        }
        else if(strcmp("H",Given_Name)==0){
            printf("H is a Clerk\nH's salary is 10,000 Taka\n");
        }
        else if(strcmp("I",Given_Name)==0){
            printf("I is a Clerk\nI's salary is 10,000 Taka\n");
        }
    printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==2){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_HR_A_WT();
                printf("A has worked total %d hours in this month\n",ATW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_HR_B_WT();
                printf("B has worked total %d hours in this month\n",BTW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_HR_C_WT();
                printf("C has worked total %d hours in this month\n",CTW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_HR_D_WT();
                printf("D has worked total %d hours in this month\n",DTW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_HR_E_WT();
                printf("E has worked total %d hours in this month\n",ETW);
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_HR_F_WT();
                printf("F has worked total %d hours in this month\n",FTW);
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_HR_G_WT();
                printf("G has worked total %d hours in this month\n",GTW);
            }
            else if(strcmp("H",Given_Name)==0){
                HTW=Employee_HR_H_WT();
                printf("H has worked total %d hours in this month\n",HTW);
            }
            else if(strcmp("I",Given_Name)==0){
                ITW=Employee_HR_I_WT();
                printf("I has worked total %d hours in this month\n",ITW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==3){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_HR_A_WT();
                AEW=(ATW-156);
                printf("A has worked extra %d hours in this month\n",AEW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_HR_B_WT();
                BEW=(BTW-156);
                printf("B has worked extra %d hours in this month\n",BEW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_HR_C_WT();
                CEW=(CTW-156);
                printf("C has worked extra %d hours in this month\n",CEW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_HR_D_WT();
                DEW=(DTW-156);
                printf("D has worked extra %d hours in this month\n",DEW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_HR_E_WT();
                EEW=(ETW-156);
                printf("E has worked extra %d hours in this month\n",EEW);
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_HR_F_WT();
                FEW=(FTW-156);
                printf("F has worked extra %d hours in this month\n",FEW);
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_HR_G_WT();
                GEW=(GTW-156);
                printf("G has worked extra %d hours in this month\n",GEW);
            }
            else if(strcmp("H",Given_Name)==0){
                HTW=Employee_HR_H_WT();
                HEW=(HTW-156);
                printf("H has worked extra %d hours in this month\n",HEW);
            }
            else if(strcmp("I",Given_Name)==0){
                ITW=Employee_HR_I_WT();
                IEW=(ITW-156);
                printf("I has worked extra %d hours in this month\n",IEW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==4){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_HR_A_WT();
                AEW=(ATW-156);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_HR_B_WT();
                BEW=(BTW-156);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_HR_C_WT();
                CEW=(CTW-156);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_HR_D_WT();
                DEW=(DTW-156);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_HR_E_WT();
                EEW=(ETW-156);
                IRE=((EEW*100)/156);
                printf("E's promotion rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will be promoted from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will be promoted from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will be promoted from three months later\n");}
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_HR_F_WT();
                FEW=(FTW-156);
                IRF=((FEW*100)/156);
                printf("F's promotion rate is %d%%\n",IRF);
                if(IRF>=66){printf("F will be promoted from next month\n");}
                else if(IRF>=34&&IRF<=65){printf("F will be promoted from two months later\n");}
                else if(IRF>=0&&IRF<=33){printf("F will be promoted from three months later\n");}
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_HR_G_WT();
                GEW=(GTW-156);
                IRG=((GEW*100)/156);
                printf("G's promotion rate is %d%%\n",IRG);
                if(IRG>=66){printf("G will be promoted from next month\n");}
                else if(IRG>=34&&IRG<=65){printf("G will be promoted from two months later\n");}
                else if(IRG>=0&&IRG<=33){printf("G will be promoted from three months later\n");}
            }
            else if(strcmp("H",Given_Name)==0){
                HTW=Employee_HR_H_WT();
                HEW=(HTW-156);
                IRH=((HEW*100)/156);
                printf("H's salary increase rate is %d%%\n",IRH);
                if(IRH>=66){printf("H will have his increased salary from next month\n");}
                else if(IRH>=34&&IRH<=65){printf("H will have his increased salary from two months later\n");}
                else if(IRH>=0&&IRH<=33){printf("H will have his increased salary from three months later\n");}
            }
            else if(strcmp("I",Given_Name)==0){
                ITW=Employee_HR_I_WT();
                IEW=(ITW-156);
                IRI=((IEW*100)/156);
                printf("I's salary increase rate is %d%%\n",IRI);
                if(IRI>=66){printf("I will have his increased salary from next month\n");}
                else if(IRI>=34&&IRI<=65){printf("I will have his increased salary from two months later\n");}
                else if(IRI>=0&&IRI<=33){printf("I will have his increased salary from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==5){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                printf("A is a General Manager\nA's salary is 100,000 Taka\n");
                ATW=Employee_HR_A_WT();
                AEW=(ATW-156);
                printf("A has worked total %d hours in this month\n",ATW);
                printf("A has worked extra %d hours in this month\n",AEW);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                printf("B is an Executive officer\nB's salary is 75,000 Taka\n");
                BTW=Employee_HR_B_WT();
                BEW=(BTW-156);
                printf("B has worked total %d hours in this month\n",BTW);
                printf("B has worked extra %d hours in this month\n",BEW);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                printf("C is a Senior Officer\nC's salary is 55,000 Taka\n");
                CTW=Employee_HR_C_WT();
                CEW=(CTW-156);
                printf("C has worked total %d hours in this month\n",CTW);
                printf("C has worked extra %d hours in this month\n",CEW);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                printf("D is a Junior Officer\nD's salary is 38,000 Taka\n");
                DTW=Employee_HR_D_WT();
                DEW=(DTW-156);
                printf("D has worked total %d hours in this month\n",DTW);
                printf("D has worked extra %d hours in this month\n",DEW);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                printf("E is an Officer\nE's salary is 25,000 Taka\n");
                ETW=Employee_HR_E_WT();
                EEW=(ETW-156);
                printf("E has worked total %d hours in this month\n",ETW);
                printf("E has worked extra %d hours in this month\n",EEW);
                IRE=((EEW*100)/156);
                printf("E's promotion rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will be promoted from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will be promoted from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will be promoted from three months later\n");}
            }
            else if(strcmp("F",Given_Name)==0){
                printf("F is an Officer\nF's salary is 25,000 Taka\n");
                FTW=Employee_HR_F_WT();
                FEW=(FTW-156);
                printf("F has worked total %d hours in this month\n",FTW);
                printf("F has worked extra %d hours in this month\n",FEW);
                IRF=((FEW*100)/156);
                printf("F's promotion rate is %d%%\n",IRF);
                if(IRF>=66){printf("F will be promoted from next month\n");}
                else if(IRF>=34&&IRF<=65){printf("F will be promoted from two months later\n");}
                else if(IRF>=0&&IRF<=33){printf("F will be promoted from three months later\n");}
            }
            else if(strcmp("G",Given_Name)==0){
                printf("G is an Officer\nG's salary is 25,000 Taka\n");
                GTW=Employee_HR_G_WT();
                GEW=(GTW-156);
                printf("G has worked total %d hours in this month\n",GTW);
                printf("G has worked extra %d hours in this month\n",GEW);
                IRG=((GEW*100)/156);
                printf("G's promotion rate is %d%%\n",IRG);
                if(IRG>=66){printf("G will be promoted from next month\n");}
                else if(IRG>=34&&IRG<=65){printf("G will be promoted from two months later\n");}
                else if(IRG>=0&&IRG<=33){printf("G will be promoted from three months later\n");}
            }
            else if(strcmp("H",Given_Name)==0){
                printf("H is a Clerk\nH's salary is 10,000 Taka\n");
                HTW=Employee_HR_H_WT();
                HEW=(HTW-156);
                printf("H has worked total %d hours in this month\n",HTW);
                printf("H has worked extra %d hours in this month\n",HEW);
                IRH=((HEW*100)/156);
                printf("H's salary increse rate is %d%%\n",IRH);
                if(IRH>=66){printf("H will have his increased salary from next month\n");}
                else if(IRH>=34&&IRH<=65){printf("H will have his increased salary from two months later\n");}
                else if(IRH>=0&&IRH<=33){printf("H will have his increased salary from three months later\n");}
            }
            else if(strcmp("I",Given_Name)==0){
                printf("I is a Clerk\nI's salary is 10,000 Taka\n");
                ITW=Employee_HR_I_WT();
                IEW=(ITW-156);
                printf("I has worked total %d hours in this month\n",ITW);
                printf("I has worked extra %d hours in this month\n",IEW);
                IRI=((IEW*100)/156);
                printf("I's salary increse rate is %d%%\n",IRI);
                if(IRI>=66){printf("I will have his increased salary from next month\n");}
                else if(IRI>=34&&IRI<=65){printf("I will have his increased salary from two months later\n");}
                else if(IRI>=0&&IRI<=33){printf("I will have his increased salary from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==6){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_HR_A_WT();
                if(ATW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("A is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_HR_B_WT();
                if(BTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("B is preferred to be fired.\nHis total work time in this month is %d hours.\n",BTW);
                }
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_HR_C_WT();
                if(CTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("C is preferred to be fired.\nHis total work time in this month is %d hours.\n",CTW);
                }
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_HR_D_WT();
                if(DTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("D is preferred to be fired.\nHis total work time in this month is %d hours.\n",DTW);
                }
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_HR_E_WT();
                if(ETW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("E is preferred to be fired.\nHis total work time in this month is %d hours.\n",ETW);
                }
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_HR_F_WT();
                if(FTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("F is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_HR_G_WT();
                if(GTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("G is preferred to be fired.\nHis total work time in this month is %d hours.\n",GTW);
                }
            }
            else if(strcmp("H",Given_Name)==0){
                HTW=Employee_HR_H_WT();
                if(HTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("H is preferred to be fired.\nHis total work time in this month is %d hours.\n",HTW);
                }
            }
            else if(strcmp("I",Given_Name)==0){
                ITW=Employee_HR_I_WT();
                if(ITW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("I is preferred to be fired.\nHis total work time in this month is %d hours.\n",ITW);
                }
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==7){
        break;
    }
    }
    fclose(f);
}
void Production_Department(){
    printf("Number of employees in Production Department: 7\n");
    printf("Name of employees and their positions:\n");
    int i,j,option,ATW,BTW,CTW,DTW,ETW,FTW,GTW,HTW,ITW,AEW,BEW,CEW,DEW,EEW,FEW,GEW,HEW,IEW,IRA,IRB,IRC,IRD,IRE,IRF,IRG,IRH,IRI;
    char Name[51],Position[51],Given_Name[51];
    printf("Name\t Position\n");
    struct PDe Employee[10];
    FILE *f=fopen("Production Department info.txt","r");
    for(i=1;i<=7;i++){
        fscanf(f,"%s",Employee[i].Name);
        fgets(Employee[i].Position,51,f);
    }
    for(i=1;i<=7;i++){
        printf("%s\t",Employee[i].Name);
        printf("%s",Employee[i].Position);
    }
    printf("\nWhat do you want to do?\n");
    printf("1. Want to know any employee's salary?\n");
    printf("2. Want to know any employee's total work time of that month?\n");
    printf("3. Want to know the amount of extra hours done by any employee of that month?\n");
    printf("4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n");
    printf("5. Want to find out all of the above of any employee?\n");
    printf("6. Want to know if any of the employee will be fired or not?\n");
    printf("7. Quit\n");
    printf("Select an option:\n");
    while(1){
    scanf("%d",&option);
    if(option==1){
    printf("Enter a Name from above employee list\n");
    fflush(stdin);
    gets(Given_Name);
        if(strcmp("A",Given_Name)==0){
            printf("A is a Production Manager\nA's salary is 100,000 Taka\n");
        }
        else if(strcmp("B",Given_Name)==0){
            printf("B is an Office Manager\nB's salary is 75,000 Taka\n");
        }
        else if(strcmp("C",Given_Name)==0){
            printf("C is an Engineer\nC's salary is 55,000 Taka\n");
        }
        else if(strcmp("D",Given_Name)==0){
            printf("D is an Engineer\nD's salary is 55,000 Taka\n");
        }
        else if(strcmp("E",Given_Name)==0){
            printf("E is a Supervisor\nE's salary is 30,000 Taka\n");
        }
        else if(strcmp("F",Given_Name)==0){
            printf("F is a Supervisor\nF's salary is 30,000 Taka\n");
        }
        else if(strcmp("G",Given_Name)==0){
            printf("G is a Supervisor\nG's salary is 30,000 Taka\n");
        }
    printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==2){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_PD_A_WT();
                printf("A has worked total %d hours in this month\n",ATW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_PD_B_WT();
                printf("B has worked total %d hours in this month\n",BTW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_PD_C_WT();
                printf("C has worked total %d hours in this month\n",CTW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_PD_D_WT();
                printf("D has worked total %d hours in this month\n",DTW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_PD_E_WT();
                printf("E has worked total %d hours in this month\n",ETW);
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_PD_F_WT();
                printf("F has worked total %d hours in this month\n",FTW);
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_PD_G_WT();
                printf("G has worked total %d hours in this month\n",GTW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==3){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_PD_A_WT();
                AEW=(ATW-156);
                printf("A has worked extra %d hours in this month\n",AEW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_PD_B_WT();
                BEW=(BTW-156);
                printf("B has worked extra %d hours in this month\n",BEW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_PD_C_WT();
                CEW=(CTW-156);
                printf("C has worked extra %d hours in this month\n",CEW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_PD_D_WT();
                DEW=(DTW-156);
                printf("D has worked extra %d hours in this month\n",DEW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_PD_E_WT();
                EEW=(ETW-156);
                printf("E has worked extra %d hours in this month\n",EEW);
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_PD_F_WT();
                FEW=(FTW-156);
                printf("F has worked extra %d hours in this month\n",FEW);
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_PD_G_WT();
                GEW=(GTW-156);
                printf("G has worked extra %d hours in this month\n",GEW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==4){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_PD_A_WT();
                AEW=(ATW-156);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_PD_B_WT();
                BEW=(BTW-156);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_PD_C_WT();
                CEW=(CTW-156);
                IRC=((CEW*100)/156);
                printf("C's salary increase rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will have his increased salary from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will have his increased salary from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will have his increased salary from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_PD_D_WT();
                DEW=(DTW-156);
                IRD=((DEW*100)/156);
                printf("D's salary increase rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will have his increased salary from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will have his increased salary from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will have his increased salary from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_PD_E_WT();
                EEW=(ETW-156);
                IRE=((EEW*100)/156);
                printf("E's salary increase rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will have his increased salary from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will have his increased salary from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will have his increased salary from three months later\n");}
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_PD_F_WT();
                FEW=(FTW-156);
                IRF=((FEW*100)/156);
                printf("F's salary increase rate is %d%%\n",IRF);
                if(IRF>=66){printf("F will have his increased salary from next month\n");}
                else if(IRF>=34&&IRF<=65){printf("F will have his increased salary from two months later\n");}
                else if(IRF>=0&&IRF<=33){printf("F will have his increased salary from three months later\n");}
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_PD_G_WT();
                GEW=(GTW-156);
                IRG=((GEW*100)/156);
                printf("G's salary increase rate is %d%%\n",IRG);
                if(IRG>=66){printf("G will have his increased salary from next month\n");}
                else if(IRG>=34&&IRG<=65){printf("G will have his increased salary from two months later\n");}
                else if(IRG>=0&&IRG<=33){printf("G will have his increased salary from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==5){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                printf("A is a Production Manager\nA's salary is 100,000 Taka\n");
                ATW=Employee_PD_A_WT();
                AEW=(ATW-156);
                printf("A has worked total %d hours in this month\n",ATW);
                printf("A has worked extra %d hours in this month\n",AEW);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                printf("B is an Office Manager\nB's salary is 75,000 Taka\n");
                BTW=Employee_PD_B_WT();
                BEW=(BTW-156);
                printf("B has worked total %d hours in this month\n",BTW);
                printf("B has worked extra %d hours in this month\n",BEW);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                printf("C is an Engineer\nC's salary is 55,000 Taka\n");
                CTW=Employee_PD_C_WT();
                CEW=(CTW-156);
                printf("C has worked total %d hours in this month\n",CTW);
                printf("C has worked extra %d hours in this month\n",CEW);
                IRC=((CEW*100)/156);
                printf("C's Salary increase rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will have his increased salary from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will have his increased salary from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will have his increased salary from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                printf("D is an Engineer\nD's salary is 55,000 Taka\n");
                DTW=Employee_PD_D_WT();
                DEW=(DTW-156);
                printf("D has worked total %d hours in this month\n",DTW);
                printf("D has worked extra %d hours in this month\n",DEW);
                IRD=((DEW*100)/156);
                printf("D's salary increase rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will have his increased salary from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will have his increased salary from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will have his increased salary from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                printf("E is a Supervisor\nE's salary is 30,000 Taka\n");
                ETW=Employee_PD_E_WT();
                EEW=(ETW-156);
                printf("E has worked total %d hours in this month\n",ETW);
                printf("E has worked extra %d hours in this month\n",EEW);
                IRE=((EEW*100)/156);
                printf("E's salary increase rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will have his increased salary from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will have his increased salary from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will have his increased salary from three months later\n");}
            }
            else if(strcmp("F",Given_Name)==0){
                printf("F is a Suppervisor\nF's salary is 30,000 Taka\n");
                FTW=Employee_PD_F_WT();
                FEW=(FTW-156);
                printf("F has worked total %d hours in this month\n",FTW);
                printf("F has worked extra %d hours in this month\n",FEW);
                IRF=((FEW*100)/156);
                printf("F's salary increase rate is %d%%\n",IRF);
                if(IRF>=66){printf("F will have his increased salary from next month\n");}
                else if(IRF>=34&&IRF<=65){printf("F will have his increased salary from two months later\n");}
                else if(IRF>=0&&IRF<=33){printf("F will have his increased salary from three months later\n");}
            }
            else if(strcmp("G",Given_Name)==0){
                printf("G is a Suppervisor\nG's salary is 30,000 Taka\n");
                GTW=Employee_PD_G_WT();
                GEW=(GTW-156);
                printf("G has worked total %d hours in this month\n",GTW);
                printf("G has worked extra %d hours in this month\n",GEW);
                IRG=((GEW*100)/156);
                printf("G's salary increase rate is %d%%\n",IRG);
                if(IRG>=66){printf("G will have his increased salary from next month\n");}
                else if(IRG>=34&&IRG<=65){printf("G will have his increased salary from two months later\n");}
                else if(IRG>=0&&IRG<=33){printf("G will have his increased salary from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==6){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_PD_A_WT();
                if(ATW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("A is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_PD_B_WT();
                if(BTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("B is preferred to be fired.\nHis total work time in this month is %d hours.\n",BTW);
                }
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_PD_C_WT();
                if(CTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("C is preferred to be fired.\nHis total work time in this month is %d hours.\n",CTW);
                }
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_PD_D_WT();
                if(DTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("D is preferred to be fired.\nHis total work time in this month is %d hours.\n",DTW);
                }
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_PD_E_WT();
                if(ETW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("E is preferred to be fired.\nHis total work time in this month is %d hours.\n",ETW);
                }
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_PD_F_WT();
                if(FTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("F is preferred to be fired.\nHis total work time in this month is %d hours.\n",FTW);
                }
            }
            else if(strcmp("G",Given_Name)==0){
                GTW=Employee_PD_G_WT();
                if(GTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("G is preferred to be fired.\nHis total work time in this month is %d hours.\n",GTW);
                }
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==7){
        break;
    }
    }
    fclose(f);
}
void Marketing_Department(){
    printf("Number of employees in Marketing Department: 5\n");
    printf("Name of employees and their positions:\n");
    int i,j,option,ATW,BTW,CTW,DTW,ETW,FTW,GTW,HTW,ITW,AEW,BEW,CEW,DEW,EEW,FEW,GEW,HEW,IEW,IRA,IRB,IRC,IRD,IRE,IRF,IRG,IRH,IRI;
    char Name[51],Position[51],Given_Name[51];
    printf("Name\t Position\n");
    struct PDe Employee[10];
    FILE *f=fopen("Marketing Department info.txt","r");
    for(i=1;i<=5;i++){
        fscanf(f,"%s",Employee[i].Name);
        fgets(Employee[i].Position,51,f);
    }
    for(i=1;i<=5;i++){
        printf("%s\t",Employee[i].Name);
        printf("%s",Employee[i].Position);
    }
    printf("\nWhat do you want to do?\n");
    printf("1. Want to know any employee's salary?\n");
    printf("2. Want to know any employee's total work time of that month?\n");
    printf("3. Want to know the amount of extra hours done by any employee of that month?\n");
    printf("4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n");
    printf("5. Want to find out all of the above of any employee?\n");
    printf("6. Want to know if any of the employee will be fired or not?\n");
    printf("7. Quit\n");
    printf("Select an option:\n");
    while(1){
    scanf("%d",&option);
    if(option==1){
    printf("Enter a Name from above employee list\n");
    fflush(stdin);
    gets(Given_Name);
        if(strcmp("A",Given_Name)==0){
            printf("A is a Marketing Manager\nA's salary is 100,000 Taka\n");
        }
        else if(strcmp("B",Given_Name)==0){
            printf("B is a Sales Manager\nB's salary is 70,000 Taka\n");
        }
        else if(strcmp("C",Given_Name)==0){
            printf("C is a Sales Executive\nC's salary is 50,000 Taka\n");
        }
        else if(strcmp("D",Given_Name)==0){
            printf("D is a Sales Executive\nD's salary is 50,000 Taka\n");
        }
        else if(strcmp("E",Given_Name)==0){
            printf("E is a Sales Executive\nE's salary is 50,000 Taka\n");
        }
    printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==2){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_MD_A_WT();
                printf("A has worked total %d hours in this month\n",ATW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_MD_B_WT();
                printf("B has worked total %d hours in this month\n",BTW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_MD_C_WT();
                printf("C has worked total %d hours in this month\n",CTW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_MD_D_WT();
                printf("D has worked total %d hours in this month\n",DTW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_MD_E_WT();
                printf("E has worked total %d hours in this month\n",ETW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==3){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_MD_A_WT();
                AEW=(ATW-156);
                printf("A has worked extra %d hours in this month\n",AEW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_MD_B_WT();
                BEW=(BTW-156);
                printf("B has worked extra %d hours in this month\n",BEW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_MD_C_WT();
                CEW=(CTW-156);
                printf("C has worked extra %d hours in this month\n",CEW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_MD_D_WT();
                DEW=(DTW-156);
                printf("D has worked extra %d hours in this month\n",DEW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_MD_E_WT();
                EEW=(ETW-156);
                printf("E has worked extra %d hours in this month\n",EEW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==4){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_MD_A_WT();
                AEW=(ATW-156);
                IRA=((AEW*100)/156);
                printf("A's salary increse rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_MD_B_WT();
                BEW=(BTW-156);
                IRB=((BEW*100)/156);
                printf("B's salary increse rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_MD_C_WT();
                CEW=(CTW-156);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_MD_D_WT();
                DEW=(DTW-156);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_MD_E_WT();
                EEW=(ETW-156);
                IRE=((EEW*100)/156);
                printf("E's promotion rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will be promoted from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will be promoted from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==5){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                printf("A is a Marketing Manager\nA's salary is 100,000 Taka\n");
                ATW=Employee_MD_A_WT();
                AEW=(ATW-156);
                printf("A has worked total %d hours in this month\n",ATW);
                printf("A has worked extra %d hours in this month\n",AEW);
                IRA=((AEW*100)/156);
                printf("A's salary increse rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                printf("B is an Sales Manager\nB's salary is 70,000 Taka\n");
                BTW=Employee_MD_B_WT();
                BEW=(BTW-156);
                printf("B has worked total %d hours in this month\n",BTW);
                printf("B has worked extra %d hours in this month\n",BEW);
                IRB=((BEW*100)/156);
                printf("B's salary increse rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                printf("C is a Sales Executive\nC's salary is 50,000 Taka\n");
                CTW=Employee_MD_C_WT();
                CEW=(CTW-156);
                printf("C has worked total %d hours in this month\n",CTW);
                printf("C has worked extra %d hours in this month\n",CEW);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                printf("D is a Sales Executive\nD's salary is 50,000 Taka\n");
                DTW=Employee_MD_D_WT();
                DEW=(DTW-156);
                printf("D has worked total %d hours in this month\n",DTW);
                printf("D has worked extra %d hours in this month\n",DEW);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                printf("E is an Sales Executive\nE's salary is 50,000 Taka\n");
                ETW=Employee_MD_E_WT();
                EEW=(ETW-156);
                printf("E has worked total %d hours in this month\n",ETW);
                printf("E has worked extra %d hours in this month\n",EEW);
                IRE=((EEW*100)/156);
                printf("E's promotion rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will be promoted from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will be promoted from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==6){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_MD_A_WT();
                if(ATW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("A is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_MD_B_WT();
                if(BTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("B is preferred to be fired.\nHis total work time in this month is %d hours.\n",BTW);
                }
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_MD_C_WT();
                if(CTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("C is preferred to be fired.\nHis total work time in this month is %d hours.\n",CTW);
                }
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_MD_D_WT();
                if(DTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("D is preferred to be fired.\nHis total work time in this month is %d hours.\n",DTW);
                }
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_MD_E_WT();
                if(ETW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("E is preferred to be fired.\nHis total work time in this month is %d hours.\n",ETW);
                }
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==7){
        break;
    }
    }
    fclose(f);
}
void Logistics_Department(){
    printf("Number of employees in Logistics Department: 6\n");
    printf("Name of employees and their positions:\n");
    int i,j,option,ATW,BTW,CTW,DTW,ETW,FTW,GTW,HTW,ITW,AEW,BEW,CEW,DEW,EEW,FEW,GEW,HEW,IEW,IRA,IRB,IRC,IRD,IRE,IRF,IRG,IRH,IRI;
    char Name[51],Position[51],Given_Name[51];
    printf("Name\t Position\n");
    struct PDe Employee[10];
    FILE *f=fopen("Logistics Department info.txt","r");
    for(i=1;i<=6;i++){
        fscanf(f,"%s",Employee[i].Name);
        fgets(Employee[i].Position,51,f);
    }
    for(i=1;i<=6;i++){
        printf("%s\t",Employee[i].Name);
        printf("%s",Employee[i].Position);
    }
    printf("\nWhat do you want to do?\n");
    printf("1. Want to know any employee's salary?\n");
    printf("2. Want to know any employee's total work time of that month?\n");
    printf("3. Want to know the amount of extra hours done by any employee of that month?\n");
    printf("4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n");
    printf("5. Want to find out all of the above of any employee?\n");
    printf("6. Want to know if any of the employee will be fired or not?\n");
    printf("7. Quit\n");
    printf("Select an option:\n");
    while(1){
    scanf("%d",&option);
    if(option==1){
    printf("Enter a Name from above employee list\n");
    fflush(stdin);
    gets(Given_Name);
        if(strcmp("A",Given_Name)==0){
            printf("A is a Logistics Manager\nA's salary is 100,000 Taka\n");
        }
        else if(strcmp("B",Given_Name)==0){
            printf("B is a senior officer\nB's salary is 50,000 Taka\n");
        }
        else if(strcmp("C",Given_Name)==0){
            printf("C is a Junior Officer\nC's salary is 40,000 Taka\n");
        }
        else if(strcmp("D",Given_Name)==0){
            printf("D is a Junior Officer\nD's salary is 40,000 Taka\n");
        }
        else if(strcmp("E",Given_Name)==0){
            printf("E is an Officer\nE's salary is 25,000 Taka\n");
        }
        else if(strcmp("F",Given_Name)==0){
            printf("F is an Officer\nF's salary is 25,000 Taka\n");
        }
    printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==2){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_LD_A_WT();
                printf("A has worked total %d hours in this month\n",ATW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_LD_B_WT();
                printf("B has worked total %d hours in this month\n",BTW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_LD_C_WT();
                printf("C has worked total %d hours in this month\n",CTW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_LD_D_WT();
                printf("D has worked total %d hours in this month\n",DTW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_LD_E_WT();
                printf("E has worked total %d hours in this month\n",ETW);
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_LD_F_WT();
                printf("F has worked total %d hours in this month\n",FTW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==3){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_LD_A_WT();
                AEW=(ATW-156);
                printf("A has worked extra %d hours in this month\n",AEW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_LD_B_WT();
                BEW=(BTW-156);
                printf("B has worked extra %d hours in this month\n",BEW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_LD_C_WT();
                CEW=(CTW-156);
                printf("C has worked extra %d hours in this month\n",CEW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_LD_D_WT();
                DEW=(DTW-156);
                printf("D has worked extra %d hours in this month\n",DEW);
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_LD_E_WT();
                EEW=(ETW-156);
                printf("E has worked extra %d hours in this month\n",EEW);
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_LD_F_WT();
                FEW=(FTW-156);
                printf("F has worked extra %d hours in this month\n",FEW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==4){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_LD_A_WT();
                AEW=(ATW-156);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_LD_B_WT();
                BEW=(BTW-156);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_LD_C_WT();
                CEW=(CTW-156);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_LD_D_WT();
                DEW=(DTW-156);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_LD_E_WT();
                EEW=(ETW-156);
                IRE=((EEW*100)/156);
                printf("E's promotion rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will be promoted from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will be promoted from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will be promoted from three months later\n");}
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_LD_F_WT();
                FEW=(FTW-156);
                IRF=((FEW*100)/156);
                printf("F's promotion rate is %d%%\n",IRF);
                if(IRF>=66){printf("F will be promoted from next month\n");}
                else if(IRF>=34&&IRF<=65){printf("F will be promoted from two months later\n");}
                else if(IRF>=0&&IRF<=33){printf("F will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==5){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                printf("A is a Logistics Manager\nA's salary is 100,000 Taka\n");
                ATW=Employee_LD_A_WT();
                AEW=(ATW-156);
                printf("A has worked total %d hours in this month\n",ATW);
                printf("A has worked extra %d hours in this month\n",AEW);
                IRA=((AEW*100)/156);
                printf("A's salary increse rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                printf("B is a Senior officer\nB's salary is 50,000 Taka\n");
                BTW=Employee_HR_B_WT();
                BEW=(BTW-156);
                printf("B has worked total %d hours in this month\n",BTW);
                printf("B has worked extra %d hours in this month\n",BEW);
                IRB=((BEW*100)/156);
                printf("B's salary increse rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                printf("C is a Junior Officer\nC's salary is 40,000 Taka\n");
                CTW=Employee_HR_C_WT();
                CEW=(CTW-156);
                printf("C has worked total %d hours in this month\n",CTW);
                printf("C has worked extra %d hours in this month\n",CEW);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                printf("D is a Junior Officer\nD's salary is 40,000 Taka\n");
                DTW=Employee_HR_D_WT();
                DEW=(DTW-156);
                printf("D has worked total %d hours in this month\n",DTW);
                printf("D has worked extra %d hours in this month\n",DEW);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
            else if(strcmp("E",Given_Name)==0){
                printf("E is an Officer\nE's salary is 25,000 Taka\n");
                ETW=Employee_HR_E_WT();
                EEW=(ETW-156);
                printf("E has worked total %d hours in this month\n",ETW);
                printf("E has worked extra %d hours in this month\n",EEW);
                IRE=((EEW*100)/156);
                printf("E's promotion rate is %d%%\n",IRE);
                if(IRE>=66){printf("E will be promoted from next month\n");}
                else if(IRE>=34&&IRE<=65){printf("E will be promoted from two months later\n");}
                else if(IRE>=0&&IRE<=33){printf("E will be promoted from three months later\n");}
            }
            else if(strcmp("F",Given_Name)==0){
                printf("F is an Officer\nF's salary is 25,000 Taka\n");
                FTW=Employee_HR_F_WT();
                FEW=(FTW-156);
                printf("F has worked total %d hours in this month\n",FTW);
                printf("F has worked extra %d hours in this month\n",FEW);
                IRF=((FEW*100)/156);
                printf("F's promotion rate is %d%%\n",IRF);
                if(IRF>=66){printf("F will be promoted from next month\n");}
                else if(IRF>=34&&IRF<=65){printf("F will be promoted from two months later\n");}
                else if(IRF>=0&&IRF<=33){printf("F will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==6){
        printf("Enter the name of an employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_LD_A_WT();
                if(ATW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("A is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_LD_B_WT();
                if(BTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("B is preferred to be fired.\nHis total work time in this month is %d hours.\n",BTW);
                }
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_LD_C_WT();
                if(CTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("C is preferred to be fired.\nHis total work time in this month is %d hours.\n",CTW);
                }
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_LD_D_WT();
                if(DTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("D is preferred to be fired.\nHis total work time in this month is %d hours.\n",DTW);
                }
            }
            else if(strcmp("E",Given_Name)==0){
                ETW=Employee_LD_E_WT();
                if(ETW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("E is preferred to be fired.\nHis total work time in this month is %d hours.\n",ETW);
                }
            }
            else if(strcmp("F",Given_Name)==0){
                FTW=Employee_LD_F_WT();
                if(FTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("F is preferred to be fired.\nHis total work time in this month is %d hours.\n",FTW);
                }
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==7){
        break;
    }
    }
    fclose(f);
}
void Accountant_Department(){
    printf("Number of employees in Accountant Department: 4\n");
    printf("Name of employees and their positions:\n");
    int i,j,option,ATW,BTW,CTW,DTW,ETW,FTW,GTW,HTW,ITW,AEW,BEW,CEW,DEW,EEW,FEW,GEW,HEW,IEW,IRA,IRB,IRC,IRD,IRE,IRF,IRG,IRH,IRI;
    char Name[51],Position[51],Given_Name[51];
    printf("Name\t Position\n");
    struct PDe Employee[10];
    FILE *f=fopen("Accountant Department info.txt","r");
    for(i=1;i<=4;i++){
        fscanf(f,"%s",Employee[i].Name);
        fgets(Employee[i].Position,51,f);
    }
    for(i=1;i<=4;i++){
        printf("%s\t",Employee[i].Name);
        printf("%s",Employee[i].Position);
    }
    printf("\nWhat do you want to do?\n");
    printf("1. Want to know any employee's salary?\n");
    printf("2. Want to know any employee's total work time of that month?\n");
    printf("3. Want to know the amount of extra hours done by any employee of that month?\n");
    printf("4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n");
    printf("5. Want to find out all of the above of any employee?\n");
    printf("6. Want to know if any of the employee will be fired or not?\n");
    printf("7. Quit\n");
    printf("Select an option:\n");
    while(1){
    scanf("%d",&option);
    if(option==1){
    printf("Enter a Name from above employee list\n");
    fflush(stdin);
    gets(Given_Name);
        if(strcmp("A",Given_Name)==0){
            printf("A is a Accountant Manager\nA's salary is 100,000 Taka\n");
        }
        else if(strcmp("B",Given_Name)==0){
            printf("B is a Cenior Accountant\nB's salary is 50,000 Taka\n");
        }
        else if(strcmp("C",Given_Name)==0){
            printf("C is an Accountant\nC's salary is 30,000 Taka\n");
        }
        else if(strcmp("D",Given_Name)==0){
            printf("D is an Accountant\nD's salary is 30,000 Taka\n");
        }
    printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==2){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_AD_A_WT();
                printf("A has worked total %d hours in this month\n",ATW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_AD_B_WT();
                printf("B has worked total %d hours in this month\n",BTW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_AD_C_WT();
                printf("C has worked total %d hours in this month\n",CTW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_AD_D_WT();
                printf("D has worked total %d hours in this month\n",DTW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==3){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_AD_A_WT();
                AEW=(ATW-156);
                printf("A has worked extra %d hours in this month\n",AEW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_AD_B_WT();
                BEW=(BTW-156);
                printf("B has worked extra %d hours in this month\n",BEW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_AD_C_WT();
                CEW=(CTW-156);
                printf("C has worked extra %d hours in this month\n",CEW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_AD_D_WT();
                DEW=(DTW-156);
                printf("D has worked extra %d hours in this month\n",DEW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==4){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_AD_A_WT();
                AEW=(ATW-156);
                IRA=((AEW*100)/156);
                printf("A's salary increse rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_AD_B_WT();
                BEW=(BTW-156);
                IRB=((BEW*100)/156);
                printf("B's salary increse rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_AD_C_WT();
                CEW=(CTW-156);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_AD_D_WT();
                DEW=(DTW-156);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==5){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                printf("A is a Accountant Manager\nA's salary is 100,000 Taka\n");
                ATW=Employee_AD_A_WT();
                AEW=(ATW-156);
                printf("A has worked total %d hours in this month\n",ATW);
                printf("A has worked extra %d hours in this month\n",AEW);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                printf("B is an Senior officer\nB's salary is 75,000 Taka\n");
                BTW=Employee_AD_B_WT();
                BEW=(BTW-156);
                printf("B has worked total %d hours in this month\n",BTW);
                printf("B has worked extra %d hours in this month\n",BEW);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                printf("C is a Senior Officer\nC's salary is 55,000 Taka\n");
                CTW=Employee_AD_C_WT();
                CEW=(CTW-156);
                printf("C has worked total %d hours in this month\n",CTW);
                printf("C has worked extra %d hours in this month\n",CEW);
                IRC=((CEW*100)/156);
                printf("C's promotion rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will be promoted from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will be promoted from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will be promoted from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                printf("D is a Junior Officer\nD's salary is 38,000 Taka\n");
                DTW=Employee_AD_D_WT();
                DEW=(DTW-156);
                printf("D has worked total %d hours in this month\n",DTW);
                printf("D has worked extra %d hours in this month\n",DEW);
                IRD=((DEW*100)/156);
                printf("D's promotion rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will be promoted from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==6){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_AD_A_WT();
                if(ATW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("A is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_AD_B_WT();
                if(BTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("B is preferred to be fired.\nHis total work time in this month is %d hours.\n",BTW);
                }
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_AD_C_WT();
                if(CTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("C is preferred to be fired.\nHis total work time in this month is %d hours.\n",CTW);
                }
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_AD_D_WT();
                if(DTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("D is preferred to be fired.\nHis total work time in this month is %d hours.\n",DTW);
                }
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==7){
        break;
    }
    }
    fclose(f);
}
void IT_Department(){
    printf("Number of employees in IT Department: 4\n");
    printf("Name of employees and their positions:\n");
    int i,j,option,ATW,BTW,CTW,DTW,ETW,FTW,GTW,HTW,ITW,AEW,BEW,CEW,DEW,EEW,FEW,GEW,HEW,IEW,IRA,IRB,IRC,IRD,IRE,IRF,IRG,IRH,IRI;
    char Name[51],Position[51],Given_Name[51];
    printf("Name\t Position\n");
    struct PDe Employee[10];
    FILE *f=fopen("IT Department info.txt","r");
    for(i=1;i<=4;i++){
        fscanf(f,"%s",Employee[i].Name);
        fgets(Employee[i].Position,51,f);
    }
    for(i=1;i<=4;i++){
        printf("%s\t",Employee[i].Name);
        printf("%s",Employee[i].Position);
    }
    printf("\nWhat do you want to do?\n");
    printf("1. Want to know any employee's salary?\n");
    printf("2. Want to know any employee's total work time of that month?\n");
    printf("3. Want to know the amount of extra hours done by any employee of that month?\n");
    printf("4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n");
    printf("5. Want to find out all of the above of any employee?\n");
    printf("6. Want to know if any of the employee will be fired or not?\n");
    printf("7. Quit\n");
    printf("Select an option:\n");
    while(1){
    scanf("%d",&option);
    if(option==1){
    printf("Enter a Name from above employee list\n");
    fflush(stdin);
    gets(Given_Name);
        if(strcmp("A",Given_Name)==0){
            printf("A is a IT Manager\nA's salary is 100,000 Taka\n");
        }
        else if(strcmp("B",Given_Name)==0){
            printf("B is an IT Expert\nB's salary is 50,000 Taka\n");
        }
        else if(strcmp("C",Given_Name)==0){
            printf("C is a Computer Expert\nC's salary is 40,000 Taka\n");
        }
        else if(strcmp("D",Given_Name)==0){
            printf("D is a Computer Expert\nD's salary is 40,000 Taka\n");
        }
    printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==2){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_ID_A_WT();
                printf("A has worked total %d hours in this month\n",ATW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_ID_B_WT();
                printf("B has worked total %d hours in this month\n",BTW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_ID_C_WT();
                printf("C has worked total %d hours in this month\n",CTW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_ID_D_WT();
                printf("D has worked total %d hours in this month\n",DTW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==3){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_ID_A_WT();
                AEW=(ATW-156);
                printf("A has worked extra %d hours in this month\n",AEW);
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_ID_B_WT();
                BEW=(BTW-156);
                printf("B has worked extra %d hours in this month\n",BEW);
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_ID_C_WT();
                CEW=(CTW-156);
                printf("C has worked extra %d hours in this month\n",CEW);
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_ID_D_WT();
                DEW=(DTW-156);
                printf("D has worked extra %d hours in this month\n",DEW);
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==4){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_ID_A_WT();
                AEW=(ATW-156);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_ID_B_WT();
                BEW=(BTW-156);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_ID_C_WT();
                CEW=(CTW-156);
                IRC=((CEW*100)/156);
                printf("C's salary increase rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will have his increased salary from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will have his increased salary from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will have his increased salary from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_ID_D_WT();
                DEW=(DTW-156);
                IRD=((DEW*100)/156);
                printf("D's salary increase rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will have his increased salary from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will have his increased salary from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will have his increased salary from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==5){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                printf("A is a IT Manager\nA's salary is 100,000 Taka\n");
                ATW=Employee_ID_A_WT();
                AEW=(ATW-156);
                printf("A has worked total %d hours in this month\n",ATW);
                printf("A has worked extra %d hours in this month\n",AEW);
                IRA=((AEW*100)/156);
                printf("A's salary increase rate is %d%%\n",IRA);
                if(IRA>=66){printf("A will have his increased salary from next month\n");}
                else if(IRA>=34&&IRA<=65){printf("A will have his increased salary from two months later\n");}
                else if(IRA>=0&&IRA<=33){printf("A will have his increased salary from three months later\n");}
            }
            else if(strcmp("B",Given_Name)==0){
                printf("B is an IT Expert\nB's salary is 50,000 Taka\n");
                BTW=Employee_ID_B_WT();
                BEW=(BTW-156);
                printf("B has worked total %d hours in this month\n",BTW);
                printf("B has worked extra %d hours in this month\n",BEW);
                IRB=((BEW*100)/156);
                printf("B's salary increase rate is %d%%\n",IRB);
                if(IRB>=66){printf("B will have his increased salary from next month\n");}
                else if(IRB>=34&&IRB<=65){printf("B will have his increased salary from two months later\n");}
                else if(IRB>=0&&IRB<=33){printf("B will have his increased salary from three months later\n");}
            }
            else if(strcmp("C",Given_Name)==0){
                printf("C is a Computer Expert\nC's salary is 40,000 Taka\n");
                CTW=Employee_ID_C_WT();
                CEW=(CTW-156);
                printf("C has worked total %d hours in this month\n",CTW);
                printf("C has worked extra %d hours in this month\n",CEW);
                IRC=((CEW*100)/156);
                printf("C's salary increase rate is %d%%\n",IRC);
                if(IRC>=66){printf("C will have his increased salary from next month\n");}
                else if(IRC>=34&&IRC<=65){printf("C will have his increased salary from two months later\n");}
                else if(IRC>=0&&IRC<=33){printf("C will have his increased salary from three months later\n");}
            }
            else if(strcmp("D",Given_Name)==0){
                printf("D is a Computer Expert\nD's salary is 40,000 Taka\n");
                DTW=Employee_ID_D_WT();
                DEW=(DTW-156);
                printf("D has worked total %d hours in this month\n",DTW);
                printf("D has worked extra %d hours in this month\n",DEW);
                IRD=((DEW*100)/156);
                printf("D's salary increase rate is %d%%\n",IRD);
                if(IRD>=66){printf("D will have his increased salary from next month\n");}
                else if(IRD>=34&&IRD<=65){printf("D will be promoted from two months later\n");}
                else if(IRD>=0&&IRD<=33){printf("D will be promoted from three months later\n");}
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==6){
        printf("Enter the name of employee:\n");
        fflush(stdin);
        gets(Given_Name);
            if(strcmp("A",Given_Name)==0){
                ATW=Employee_ID_A_WT();
                if(ATW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("A is preferred to be fired.\nHis total work time in this month is %d hours.\n",ATW);
                }
            }
            else if(strcmp("B",Given_Name)==0){
                BTW=Employee_ID_B_WT();
                if(BTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("B is preferred to be fired.\nHis total work time in this month is %d hours.\n",BTW);
                }
            }
            else if(strcmp("C",Given_Name)==0){
                CTW=Employee_ID_C_WT();
                if(CTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("C is preferred to be fired.\nHis total work time in this month is %d hours.\n",CTW);
                }
            }
            else if(strcmp("D",Given_Name)==0){
                DTW=Employee_ID_D_WT();
                if(DTW>=117){
                    printf("This employee is not preferred to be fired this month.\n");
                }
                else{
                    printf("D is preferred to be fired.\nHis total work time in this month is %d hours.\n",DTW);
                }
            }
        printf("\nAnything else you want to know?\n1. Want to know any employee's salary?\n2. Want to know any employee's total work time of that month?\n3. Want to know the amount of extra hours done by any employee of that month?\n4. Want to know any employee's promotion rate or salary increase rate and when they will recieve it?\n5. Want to find out all of the above of any employee?\n6. Want to know if any of the employee will be fired or not?\n7. Quit\nSelect an option:\n");
    }
    else if(option==7){
        break;
    }
    }
    fclose(f);
}
int main()
{
    int choice;
    printf("Company name: AT Textiles\n");
    printf("Total departments in the office: 6\n");
    printf("Total number of employees in office: 36\n");
    printf("The departments are:\n1. HR Department\n2. Production Department\n3. Marketing Department\n4. Logistics Department\n5. Accountant Department\n6. IT Department\n");
    printf("Select a department from above numbers:\n");
    scanf("%d",&choice);
    if(choice==1){
        HR_Department();
    }
    if(choice==2){
        Production_Department();
    }
    if(choice==3){
        Marketing_Department();
    }
    if(choice==4){
        Logistics_Department();
    }
    if(choice==5){
        Accountant_Department();
    }
    if(choice==6){
        IT_Department();
    }
    return 0;
}
