

#include <stdio.h>
#include<math.h>

void Square();
void Rectangle();
void Triangle();
void Circle();

void main()
{
    int choice;
    do{
        printf("__________Area of the 2-d Shapes__________");
        printf("\n 1.Square\n 2.Rectangle \n3.Triangle \n4.Circle\n 5.Exit");
        printf("\n__________________________________________________\n");
        printf("Enter Your Choice");
        printf("\n__________________________________________________\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:Square();
            break;
            case 2:Rectangle();
            break;
            case 3:Triangle();
            break;
            case 4:Circle();
        
            break;
            case 5:printf("exit the program\n Good Bye!");
            break;
            
            default :printf("invalid Input");
        }
            
        }while(choice!=5);
    }
    void Square(){
        int a, side;
        printf("Enter the side of the square");
        scanf("%d",&side);
        a=side*side;
        printf("Area of Square is %d",a);
    }
      void Rectangle(){
        int a, l,b;
        printf("Enter the length of the Rectangle");
        scanf("%d",&l);
        printf("Enter the width of the Rectangle");
        scanf("%d",&b);
        a=2*(l+b);
        printf("Area of Rectangle is %d",a);
    }

          void Triangle(){
        int a,b,h;
        printf("Enter the base of the triangle");
        scanf("%d",&b);
        printf("Enter the height of the triangle");
        scanf("%d",&h);
        a=0.5*(b*h);
        printf("Area of Triangle is %d",a);
    }
      void Circle(){
        int a,r;
        printf("Enter the radius of the Circle");
        scanf("%d",&r);
        a=3.14*r*r;
        printf("Area of Circle is %d",a);
    }
