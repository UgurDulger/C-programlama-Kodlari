#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,r,s,boyut;

    printf("boyutu giriniz (minimum 5 ) :");
    scanf("%d",&boyut);




        if(boyut%2==0)
    {

    }

     else
    {
        boyut=boyut+1;
    }


    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==boyut-1 || i==boyut-1 || j==0 || j==boyut-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
     printf("\n\n\n");


         for(i=0;i<boyut/2;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==0 || j==0 )
               {
                   printf("*");
               }
            else if(i==(boyut-1)/2)
            {
              for(k=1;k<boyut/2;k++)
              {
                  printf(" ");
              }
              for(r=0;r<boyut/2;r++)
              {
                  printf("*");
              }
              break;
            }

        }
        printf(" \n");
    }

     for(i=0;i<boyut/2;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==(boyut-1)/2 || i==boyut || j==0 || j==boyut-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\n");

        for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==boyut-1 || i==boyut-1 || j==0 || j==boyut-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

      printf("\n\n\n");

          boyut=boyut/2;

    for(k=0;k<boyut;k++)
    {
        printf("*");

        for(r=1;r<=boyut;r++)
        {

            if( k==r-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
    printf("\n");
    }


    for(i=0;i<=boyut;i++)
    {
        printf("*");
        for(j=0;j<=boyut;j++)
        {
            if(i==boyut-j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(k=0;k<boyut+2;k++)
    {
        printf("*");

        for(r=1;r<=boyut+2;r++)
        {

            if( k==r-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");

    }
    boyut=boyut*2;
    boyut=boyut-2;

    printf("\n\n\n\n\n");
    printf("\n\n\n");

        for(k=0;k<boyut;k++)
    {
        printf("*");

        for(r=1;r<=boyut;r++)
        {

            if( k==r-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
    printf("\n");
    }

    for(i=0;i<=boyut;i++)
    {
        printf("*");
        for(j=0;j<=boyut;j++)
        {
            if(i==boyut-j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\n");

boyut=boyut+2;

    for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==boyut-1 || i==boyut-1 || j==0 || j==boyut-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\n");

       for(i=0;i<boyut;i++)
    printf("*\n");

   for(j=0;j<boyut;j++)
    printf("*");

   printf("\n\n\n");

       for(i=0;i<boyut/2;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==0 || j==0 )
               {
                   printf("*");
               }
            else if(i==(boyut-1)/2)
            {
              for(k=1;k<boyut/2;k++)
              {
                  printf(" ");
              }
              for(r=0;r<boyut/2;r++)
              {
                  printf("*");
              }
              break;
            }

        }
        printf(" \n");
    }

     for(i=0;i<boyut/2;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==(boyut-1)/2 || i==boyut || j==0 || j==boyut-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n\n\n");

        for(i=0;i<boyut;i++)
    {
        for(j=0;j<boyut;j++)
        {
            if(i==0 || j==0  || i==boyut-1)
            {
                printf("*");
            }
            else if(i==boyut/2)
            {
                for(k=0;k<boyut/(i+j);k++)
                {
                    printf("*");
                }
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    printf("\n\n\n");

    boyut=boyut/2;

    for(k=0;k<boyut;k++)
    {
        printf("*");

        for(r=1;r<=boyut;r++)
        {

            if( k==r-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
    printf("\n");
    }


    for(i=0;i<=boyut;i++)
    {
        printf("*");
        for(j=0;j<=boyut;j++)
        {
            if(i==boyut-j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(k=0;k<boyut+2;k++)
    {
        printf("*");

        for(r=1;r<=boyut+2;r++)
        {

            if( k==r-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");

    }



    return 0;
}
