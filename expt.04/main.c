#include <stdio.h>
  int main()
  {
      int a,b,c;

      printf("enter three integers:");
      scanf("%d %d %d",&a,&b,&c);

      if(a==b &&b==c)
      {
          printf("All three numbers are equqal.\n");

      }
      else if (a==b)
      {
          if (a>c)
            printf("largest=%d\n",a);
          else
            printf("Largest=%d\n",c);
        printf("first and second numbers are equal.\n");
      }
      else if (a==c)
      {
          if (a>b)
            printf("largest=%d\n",a);
          else
            printf("largest-%d\n",b);

          printf("first and third numbers are equal.\n");
      }
      else if (c==b)
      {
          if (b>a)
            printf("largest=%d\n",b);
        else
            printf("largest=%d\n",a);

        printf("second and third numbers are equal.\n");
      }
            else

        {
            if (a<b)
        {
            if (a>c)
                printf("largest=%d\n",c);
        }
        else
        {
            if (b>c)
                printf("largest=%d\n",b);
            else
                printf("largest=%d\n",c);
        }
        }
        return 0;

}
