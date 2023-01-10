#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32

void gotoxy(int x,int y){
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void textattr(int i){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

//functions prototype
int sum (int,int);
int subtract (int,int);
int multiby (int,int);
float divide (int,int);
float circle_area (int);
float circle_circumference (int);

int main()
{
    char myMenu [7][30]={"1. Add of Two Numbers",
                         "2. Subtract of Two Numbers",
                         "3. Multibly of Two Numbers",
                         "4. Divide of Two Numbers",
                         "5. Area of Circle",
                         "6. Circumference of circle",
                         "7. Exit"};
    int col=0,row=0;
    int normalColor=15;
    int highlightColor=100;
    int currentItem=0;
    int n1,n2;
    char c;


    do{
        col=0;
        row=0;
        system("cls");

        gotoxy(col,row++);
        printf("***********************************");
        gotoxy(col,row++);
        printf("******* Welcome To My Menu ********");
        gotoxy(col,row++);
        printf("***********************************");


        for(int i=0; i<7; i++){
            gotoxy(col+5,row+i);
            if(currentItem==i){
                textattr(highlightColor);
                printf("%s\n",myMenu[i]);
            }
            else{
                textattr(normalColor);
                printf("%s\n",myMenu[i]);
            }

        }
        textattr(normalColor);
        printf("***********************************");

        c = getch();

        switch(c){
           case -32:
            {
                c=getch();
                switch(c){
                    case 72:   //up
                    {
                        if(currentItem >0){
                            currentItem--;
                        }
                        else{
                            currentItem=5;
                        }
                        break;
                    }
                    case 80:   //down
                    {
                        if(currentItem >=5){
                            currentItem=0;
                        }
                        else{
                            currentItem++;
                        }
                        break;
                    }
                    case 73:   //pg up
                    {
                        currentItem=0;
                        break;
                    }
                    case 81:   //pg down
                    {
                        currentItem=5;
                        break;
                    }
                }
                break;
            }
           case 13:
            {
                switch(currentItem){
                    case 0:   //Add
                    {
                        system("cls");
                        printf("1. Add of Two Numbers\n");
                        printf("Enter 1st number : ");
                        scanf("%i",&n1);
                        printf("Enter 2nd number : ");
                        scanf("%i",&n2);
                        printf("The result = %i\n",sum(n1,n2));
                        break;
                    }
                    case 1:   //Subtraction
                    {
                        system("cls");
                        printf("2. Subtract of Two Numbers\n");
                        printf("Enter 1st number : ");
                        scanf("%i",&n1);
                        printf("Enter 2nd number : ");
                        scanf("%i",&n2);
                        printf("The result = %i\n",subtract(n1,n2));
                        break;
                    }
                    case 2:   //Multibly
                    {
                        system("cls");
                        printf("Multibly of Two Numbers\n");
                        printf("Enter 1st number : ");
                        scanf("%i",&n1);
                        printf("Enter 2nd number : ");
                        scanf("%i",&n2);
                        printf("The result = %i\n",multiby(n1,n2));
                        break;
                    }
                    case 3:   //Divide
                    {
                        system("cls");
                        printf("4. Divide of Two Numbers\n");
                        printf("Enter 1st number : ");
                        scanf("%i",&n1);
                        printf("Enter 2nd number : ");
                        scanf("%i",&n2);
                        float d =divide(n1,n2);

                        if(d != -1){
                            printf("The result = %f\n",d);
                        }else
                        {
                            printf("You can not divide by zero\n");
                        }
                        break;
                    }
                    case 4:   //Area of Circle
                    {
                        system("cls");
                        printf("5. Area of Circle");
                        printf("Enter reduis : ");
                        scanf("%i",&n1);
                        printf("The result = %f\n",circle_area(n1));
                        break;
                    }
                    case 5:   //Circumference of circle
                    {
                        system("cls");
                        printf("6. Circumference of circle\n");
                        printf("Enter reduis : ");
                        scanf("%i",&n1);
                        printf("The result = %f\n",circle_circumference(n1));
                        break;
                    }
                    case 6:   //exit
                    {
                        system("cls");
                        printf("Good Bye ^_^\n");
                        c=27;
                        break;
                    }
                }
                printf("\n\nPress any key to continue ...\n\n");
                getch();
                break;
            }
        }
        textattr(normalColor);
    }while(c != 27);


     return 0;
}

//functions implementation
int sum (int n1,int n2){
    return n1+n2;
}
int subtract (int n1,int n2){
    return n1-n2;
}
int multiby (int n1,int n2){
    return n1*n2;
}
float divide (int n1,int n2){
    if(n2>0){
        return (float)n1/n2;
    }
    else{
        return -1;
    }
}
float circle_area (int reduis){
    return reduis*reduis*3.14;
}

float circle_circumference (int reduis){
    return 2*reduis*3.14;
}
