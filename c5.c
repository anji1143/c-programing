#include <stdio.h>
#include <stdlib.h>
struct complex
{
  int real, img;
};

int main()
{
  int choice, x, y, z;
  struct complex a, b, c;

  while(1)
  {
    printf("1.Add two complex numbers.\n");
    printf("2.Subtract two complex numbers.\n");
    printf("3.Multiply two complex numbers.\n");
    printf("4.Divide two complex numbers.\n");
    printf("5.exit.\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);

    if (choice == 5)
      exit(0);

    if (choice >= 1 && choice <= 4)
    {
      printf("Enter first complex number:");
      printf("\nenter real part of complex number = ");
      scanf("%d", &a.real);
      printf("\nenter imaginary part of complex number= ");
      scanf("%d", &a.img);
      
      printf("\nEnter second complex number.");
      printf("\nenter real part of complex number  = ");
      scanf("%d", &b.real);
      printf("\nenter imaginary part of complex number=  = ");
      scanf("%d", &b.img);
    }
    if (choice == 1)
    {
      c.real = a.real + b.real;
      c.img = a.img + b.img;

      if (c.img >= 0)
        printf("Sum of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Sum of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 2)
    {
      c.real = a.real - b.real;
      c.img = a.img - b.img;

      if (c.img >= 0)
        printf("Difference of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Difference of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 3)
    {
      c.real = a.real*b.real - a.img*b.img;
      c.img = a.img*b.real + a.real*b.img;

      if (c.img >= 0)
        printf("Multiplication of the complex numbers = %d + %di", c.real, c.img);
      else
        printf("Multiplication of the complex numbers = %d %di", c.real, c.img);
    }
    else if (choice == 4)
    {
      if (b.real == 0 && b.img == 0)
        printf("Division by 0 + 0i isn't allowed.");
      else
      {
        x = a.real*b.real + a.img*b.img;
        y = a.img*b.real - a.real*b.img;
        z = b.real*b.real + b.img*b.img;

        if (x%z == 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("Division of the complex numbers = %d + %di", x/z, y/z);
          else
            printf("Division of the complex numbers = %d %di", x/z, y/z);
        }
        else if (x%z == 0 && y%z != 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d + %d/%di", x/z, y, z);
          else
            printf("Division of two complex numbers = %d %d/%di", x/z, y, z);
        }
        else if (x%z != 0 && y%z == 0)
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d/%d + %di", x, z, y/z);
          else
            printf("Division of two complex numbers = %d %d/%di", x, z, y/z);
        }
        else
        {
          if (y/z >= 0)
            printf("Division of two complex numbers = %d/%d + %d/%di",x, z, y, z);
          else
            printf("Division of two complex numbers = %d/%d %d/%di", x, z, y, z);
        }
    }
    }
    else
      printf("Invalid choice.");

    printf("\nPress any key to enter choice again...\n");
  }
}
