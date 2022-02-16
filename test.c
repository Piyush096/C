#include<stdio.h>
int main(void)
{
    int T, x;
    char K[14];


    scanf("%d",&T);
    for(int i = 0; i < T; i++)
      {
          int carlsen_win = 0, chef_win = 0;
          scanf("%d",&x);
          for(int p = 0; p < 15; p++)
            {
                scanf("%c",&K[p]);
                if(K[p] == 'C')
                  carlsen_win = carlsen_win + 2;
                else if (K[p] == 'N')
                  chef_win = chef_win +2;
                else if (K[p] == 'D')
                {
                  chef_win = chef_win +1;
                  carlsen_win = carlsen_win + 1;
                }
            }
                if(carlsen_win > chef_win)
                  printf("%d\n",60 * x );

                else if(carlsen_win < chef_win)
                  printf("%d\n",40 * x );

                else if (carlsen_win == chef_win )
                  printf("%d\n", 55 * x);
       }
}


/*#include<stdio.h>
int main(void)
{
    int T, x;

    char C,N,D;
    char K[14];

    int carlsen_win = 0, chef_win = 0, draw = 0;

    scanf("%d",&T);
    for(int i = 0; i < T; i++)
      {
          scanf("%d",&x);
          for(int p = 0; p < 15; p++)
            {
                scanf("%c",K[p]);
                if(K[p] == 'C' && K[p] == 'D')
                  carlsen_win++;
                else if (K[p]== 'N' && K[p] == 'D')
                  chef_win++;

                if(carlsen_win > chef_win)
                  printf("%d",60 * x );

                else if (carlsen_win == chef_win )
                  printf("%d", 55 * x);

            }

      }
}*/
