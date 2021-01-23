#include<stdio.h>
int play1[11]={0,0,0,0,0,0,0,0,0,0,0};
int play2[11]={0,0,0,0,0,0,0,0,0,0,0};
char *team1[15],*team2[15];
char *player1[12][15],*player2[12][15];
char ball1[11],ball2[11];
int fall1[11],fall2[11];
void option()
{
  
  printf("\n1)1 run \t2)2 runs\t3)3 runs\t4)4 runs\n5)6 runs\t6)wide/No ball\t7)wicket\t8)Dot\n");
printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"); 
}
  
int run_cross(int player,int p1,int p2)
  { 
    if(player==p1)
    return p2;
    else
       return p1;
       return player;
  }
    
      void display1(int player,int p1,int p2,int sum1,int ball,int wicket1,int sum3)
{    
printf("\n\n\n\n------------------------------------------------------------");
printf("\n\t\t\t  SCORE");
  if (player==p1)
{

  printf("\n------------------------------------------------------------");
printf("\n%s: %d/%d\t  %s    %d*(%d)\t\tovers : %d.%d",team1,sum1,wicket1,player1[p1-1],play1[p1-1],ball1[p1-1],ball/6,ball%6);
printf("\n          \t  %s    %d(%d)",player1[p2-1],play1[p2-1],ball1[p2-1],ball/6,ball%6);
printf("\n\nRunrate : %0.2f\t\t\t\t\textras : %d",(float)sum1/ball*6,sum1-sum3);
printf("\n\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••");
}
  else
  {
  printf("\n------------------------------------------------------------");
printf("\n%s: %d/%d\t  %s    %d(%d)\t\t\tovers : %d.%d",team1,sum1,wicket1,player1[p1-1],play1[p1-1],ball1[p1-1],ball/6,ball%6);
printf("\n          \t  %s    %d*(%d)",player1[p2-1],play1[p2-1],ball1[p2-1]);
printf("\n\nRunrate : %0.2f\t\t\t\t\textras : %d",(float)sum1/ball*6,sum1-sum3);
printf("\n\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••");

}
}
        void display2(int player,int p1,int p2,int sum2,int sum1,int overs,int ball,int wicket2,int sum4 )
{    
printf("\n\n\n\n------------------------------------------------------------");
printf("\n\t\t\t  SCORE");
  if (player==p1)
{
  printf("\n------------------------------------------------------------");
printf("\n%s: %d/%d\t  %s    %d*(%d)\t \t\tovers : %d.%d",team2,sum2,wicket2,player2[p1-1],play2[p1-1],ball2[p1-1],ball/6,ball%6);
printf("\n          \t  %s    %d(%d)",player2[p2-1],play2[p2-1],ball2[p2-1]);
printf("\n\nRunrate : %.2f\nRequired Runrate : %.2f\t\t\t\textras : %d",(float)sum2/ball*6,(float)(sum1-sum2)/((overs*6)-ball)*6,sum2-sum4);
printf("\n\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••");
}
  else
  {
  printf("\n------------------------------------------------------------");
printf("\n%s: %d/%d\t  %s    %d(%d)\t\t\tovers : %d.%d",team2,sum2,wicket2,player2[p1-1],play2[p1-1],ball2[p1-1],ball/6,ball%6);
printf("\n          \t  %s    %d*(%d)",player2[p2-1],play2[p2-1],ball2[p2-1]);
printf("\n\nRunrate : %.2f\t\t\t\nRequired Runrate : %.2f\t\t\t\textras : %d",(float)sum2/ball*6,(float)(sum1-sum2)/((overs*6)-ball)*6,sum2-sum4);

printf("\n\n••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••");

}
}
int main()
  {
    int sum1=0,sum2=0,i,j,ball,next=3,overs,wicket1=0,wicket2=0,p1=1,p2=2,player;player=p1;
    int sum3=0,sum4=0,f=0;
    printf("\nenter team1 name : ");
    scanf("%s",team1);
    printf("\nenter team2 name : ");
    scanf("%s",team2);
    printf("\nenter %s team batsman",team1);
    printf("\n player1 : ");
    scanf("%s",player1[0]);
    printf("\n player2 : ");
    scanf("%s",player1[1]);
    printf("\n\nenter no.of overs:");
    scanf("%d",&overs);

    
    for(ball=0;ball<6*overs;)
    {
      option();
      printf("\n\n\n\nenter your choice: ");
      scanf("%d",&i);
      if(wicket1==10)
        break;
      else if(i==1)
      {
        sum1+=1;
        play1[player-1]+=1;
        ball1[player-1]+=1;
        player=run_cross(player,p1,p2);
        
        
      }
      else if(i==2)
      { 
        sum1+=2;
        play1[player-1]+=2;
        ball1[player-1]+=1;
        
        
      }
      else if(i==3)
      {
        sum1+=3;
        play1[player-1]+=3;
        ball1[player-1]+=1;
        player=run_cross(player,p1,p2);
        
      }
      else if(i==4)
      {
        sum1+=4;
        play1[player-1]+=4;
        ball1[player-1]+=1;
        
      }
      else if(i==5)
      {
        sum1+=6;
        play1[player-1]+=6;
        ball1[player-1]+=1;
      }
      else if(i==6)
      {
        sum1+=1;
        ball--;
      
      }
      else if(i==7)
      {   
          ball1[player-1]+=1;
        if (player==p1)
        p1=next;
        else
        p2=next;
        player=next;
        fall1[f]=sum1;
        f++;
          printf("\nenter next player name : ");
        scanf("%s",player1[next-1]);
        wicket1++;
          
        next++;
          
      
      }
      else if (i==8)
      {
        ball++;
        ball--;
        ball1[player-1]++;
      }
      else 
      { printf("\nInvalid Option\n");
        ball--;
      }
      ball++;
      sum3=0;
      for (j=0;j<next-1;j++)
      sum3=sum3+play1[j];
      display1(player,p1,p2,sum1,ball,wicket1,sum3);
    }



    printf("\n\n\n\n***********************************************************\n\t\t    %s scorecard \n***********************************************************\n\n",team1);
    for(i=0;i<next-1;i++)
    {
      if (i+1==p1|| i+1==p2)
        printf("\t\t     %s \t%d*(%d)\n",player1[i],play1[i],ball1[i]);
        else
    printf("\t\t     %s  \t%d(%d)\n",player1[i],play1[i],ball1[i]);
    }
    printf("\n\t\t\t\t\tTotal score : %d/%d",sum1,wicket1);
    printf("\nfall of wicket : ");
    for (i=0;i<f;i++)
    {printf(" %d",fall1[i]);
   }
    printf("\n\n\n\n\n------------------%s batting starts------------------\n\n\n",team2);
    p1=1,p2=2;player=p1;ball=0;
  int next1=3;int g=0;
  printf("\nenter %s team batsman",team2);
    printf("\n player1 : ");
    scanf("%s",player2[0]);
    printf("\n player2 : ");
    scanf("%s",player2[1]);
    for(ball=0;ball<6*overs;)
  {
    option();
    printf("\n\n\n\nenter your choice: ");
    scanf("%d",&i);
    if(wicket2==10)
    break;
    
    
    else if(i==1)
    {
      sum2+=1;
      play2[player-1]+=1;
      ball2[player-1]+=1;
      player=run_cross(player,p1,p2);
      
    }
    else if(i==2)
    {
      sum2+=2;
      play2[player-1]+=2;
      ball2[player-1]+=1;
      
      
    }
    else if(i==3)
    {
      sum2+=3;
      play2[player-1]+=3;
      ball2[player-1]+=1;
      player=run_cross(player,p1,p2);
      
    }
    else if(i==4)
    {
      sum2+=4;
      play2[player-1]+=4;
      ball2[player-1]+=1;
    }
    else if(i==5)
    {
      sum2+=6;
      play2[player-1]+=6;
      ball2[player-1]+=1;
    }
    else if(i==6)
    {
      sum2+=1;
      ball--;
    
    }
    else if(i==7)
    {
      ball2[player-1]+=1;
      if (player==p1)
      p1=next1;
      else
      p2=next1;
      player=next1;
      printf("\nenter next player name : ");
      scanf("%s",player2[next1-1]);
      wicket2++;
      next1++;
        fall2[g]=sum2;
        g++;
      
      
    }
    else if (i==8)
    {
      ball++;
      ball--;
      ball2[player-1]++;
    }
    else
    {
      printf("\nInvalid Option");
      ball--;
    }
    if (sum2>sum1)
    break;
    ball++;
    sum4=0;
    for(j=0;j<next1-1;j++)
    sum4=sum4+play2[j];
    display2(player,p1,p2,sum2,sum1,overs,ball,wicket2,sum4);
    
  }
  
  printf("\n\n\n\n***********************************************************\n\t\t    %s scorecard \n***********************************************************\n\n",team2);
     for(i=0;i<next1-1;i++)
 {    if (i+1==p1|| i+1==p2)
     printf("\t\t     %s \t%d*(%d)\n",player2[i],play2[i],ball2[i]);
     else
  printf("\t\t     %s  \t%d(%d)\n",player2[i],play2[i],ball2[i]);
 }
  printf("\n\t\t\t\t\tTotal score : %d/%d",sum2,wicket2);
  printf("\nfall of wicket : ");
   for (i=0;i<g;i++)
 { printf(" %d",fall2[i]);
  }
  printf("\n\n\n\n\n------------------------------------------------------------\n\t\t\tMAIN SCORECARD\n------------------------------------------------------------");
  printf("\n\t %s\t\t \t     %s",team1,team2);
  for(i=0,j=0;i<next-1||j<next1-1;)
  {
  if (i<next-1&&j<next1-1)
{  printf("\n\t%s     \t%d(%d)\t     %s          \t%d(%d)",player1[i],play1[i],ball1[i],player2[j],play2[j],ball2[i]);
i++;j++;
}
else if (i==next-1&&j<next1-1)
{
  printf("\n\t       \t  \t    \t     %s     \t\t%d(%d)",player2[j],play2[j],ball2[i]);
  j++;
}
else if (i<next-1&&j==next1-1)
{
  printf("\n\t%s     \t%d(%d)",player1[i],play1[i],ball1[i]);
}
  }
  printf("\n\n\t   score : %d/%d\t\t\t  score : %d/%d",sum1,wicket1,sum2,wicket2);
  printf("\n\n\n\n\n✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓");
     if(sum1>sum2)
     printf("\n\t\t %s won the match by %d runs",team1,sum1-sum2);
     else if(sum2>sum1)
     printf("\n\t\t %s won the match by %d wickets",team2,10-wicket2);
     else if(sum1==sum2)
     printf("\n\t\tThe match is drawn");
     printf("\n✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓");
     
  
}