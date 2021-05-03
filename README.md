/*question
It's a pleasant sunny day in the hidden leaf village! The members of team 7 are chilling out at some place.
Naruto and Sasuke are playing a game. Both of them are at a height X . In each jump Naruto moves up by height A and Sasuke moves up by height B. Naruto and Sasuke want to know which is the next height which will be visited by both of them.
Meanwhile Sakura and Kakashi are spectating them and are counting the number of jumps.
Sakura is counting the number of jumps made by Sasuke (obviously) and Kakashi is counting the number of jumps made by Naruto.
INPUT:
The first line contains an integer T the number of test cases.
Then next T lines have the following input -
Each test case has 1 line containing 3 integers X, A, B and respectively.
CONSTRAINTS:
1≤T≤105
1≤X,A,B≤109
OUTPUT:
The first and only line of your output for each test case should have - The next height which will be visited by both Naruto and Sasuke
Sample Input
3
1 1 2
1 19 19
17 2 3

Sample Output
3
20
23
*/





#include<stdio.h>
void main()
{

    int noOfLine;
    int x[50],a[50],b[50];
    int i,j,k,flag;
    scanf("%d",&noOfLine);
    for(i=0; i<noOfLine; i++)
    {
        scanf("%d",&x[i]);
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);

    }
    for(j=0; j<noOfLine; j++)
    {   flag=0;
        for(i=1; i<100&&flag==0; i++)
        {
            for(k=1; k<100&&flag==0; k++)
            {
                if(x[j]+a[j]*i==x[j]+b[j]*k){
                    flag=1;
                    printf("\nFound: %d",x[j]+b[j]*k);

                }
            }
        }
    }
}

