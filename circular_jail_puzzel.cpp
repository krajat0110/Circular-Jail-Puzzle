/*There is a circular jail with 100 cells numbered 1-100. Each cell has an inmate and the door is
locked. One night the jailor gets drunk and starts running around the jail in circles. In his first
round he opens each door. In his second round he visits every 2nd door (2,4,6---) and shuts the
door. In the 3rd round he visits every 3rd door (3,6,9---) and if the door is shut he opens it, if it
is open he shuts it. This continues for 100 rounds (i.e. 4,8,12 ---; 5,10,15 ---; ---; 49,98 etc.) and
exhausted the jailor falls down. How many prisoners found their doors open after 100 rounds?*/
/*
the solution to this problem can be seen as a no of each no have,if factors are even door will remain closed 
 vice versa    ex: 
 1----(1)----open
 2-----(1,2)---closed
 3------(1,3)----closed
 4------(1,2,4)---open
 */
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n=100;
    int l_count=0,t_count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%j==0){l_count++;}

        }
        if(l_count%2==0){t_count++;}
        l_count=0;
    }
    cout<<"total no door closed="<< t_count;

}