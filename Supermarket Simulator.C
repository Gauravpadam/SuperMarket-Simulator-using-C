#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
       int price;
       int qty;
       char *item;
       struct node *next;
}node;

node *top;
int count;


//prototypes
void groceries();
void essentials();
void grooming();
void coldstorage();
void winery();
void cart(int,int,char []);
void cashcounter();

void main()
{
    int op,val,i;

    printf("Welcome to Gaurav's Supermart!\n");
    printf("**Special offers Everyday**\n");
    printf("Your cart has maximum space of 15 items!\n");

    do
    {
        printf("Walk into...\n1.Groceries section\n2.Essentials section\n3.Grooming & Hygiene\n4.Cold storage\n5.Beer and Wine section\n0.Billing counter\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:groceries();
                   break;

            case 2:essentials();
                   break;

            case 3:grooming();
                   break;
            
            case 4:coldstorage();
                   break;

            case 5:winery();
                  break;

            case 0:cashcounter();
                   break;

            default:printf("Wrong input\n");
            
        }
        
    }while(op!=0);
}

void groceries()
{
       int op,qty;
       printf("Welcome to the groceries section!\nIm Abdul, How may I assist you?\n");
       do
       {
              printf("1.I would like to buy some groceries\n2.Leave\n");
              scanf("%d",&op);

              if (op==1)
              {
                     printf("Sure, Here's today's available groceries!\n1.Methi\n2.Spinach\n3.Carrots\n4.Raddish\n5.Brinjal\n");
                     scanf("%d",&op);

                     switch(op)
                     {
                            case 1:printf("Methi costs 10rs per bunch, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(10,qty,"Methi");
                                   count++;
                                   break;

                            case 2:printf("Spinach costs 15rs per bunch, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(15,qty,"Spinach");
                                   count++;
                                   break;

                            case 3:printf("Carrots costs 30rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(30,qty,"carrots");
                                   count++;
                                   break;

                            case 4:printf("Raddish costs 25rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(25,qty,"Raddish");
                                   count++;
                                   break;

                            case 5:printf("Brinjal costs 35rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(35,qty,"Brinjal");
                                   count++;
                                   break;

                            default:printf("Wrong input\n");
                     }
              
              }

              else
              printf("Have a good day sir!\n");

       }while(op!=2);



}

void grooming()
{
       int op,qty;
       printf("Welcome to the grooming section!\nIm Gaurav, How may I assist you?\n");
       do
       {
              printf("1.I would like to buy something\n2.Leave\n");
              scanf("%d",&op);

              if (op==1)
              {
                     printf("Sure, Here's today's hygiene and grooming utilities!\n1.Beard Trimmer\n2.Shaving cream\n3.Aftershave\n4.Hair gel\n5.Pomade\n");
                     scanf("%d",&op);

                     switch(op)
                     {
                            case 1:printf("Beard trimmer costs 250rs per unit, How many do you want?\n");
                                   scanf("%d",&qty);
                                   cart(250,qty,"Beard_Trimmer");
                                   count++;
                                   break;

                            case 2:printf("Shaving cream costs 75rs per unit, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(15,qty,"Shaving_Cream");
                                   count++;
                                   break;

                            case 3:printf("Aftershave costs 50rs per unit, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(50,qty,"Aftershave");
                                   count++;
                                   break;

                            case 4:printf("Hair gel costs 100rs per unit, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(100,qty,"Hair_Gel");
                                   count++;
                                   break;

                            case 5:printf("Hair oil costs 35rs per unit, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(35,qty,"Hair_Oil");
                                   count++;
                                   break;

                            default:printf("Wrong input\n");
                     }
              
              }

              else
              printf("Have a good day sir!\n");

       }while(op!=2);



}

void coldstorage()
{
       int op,qty;
       printf("Welcome to the cold storage section!\nIm Sarah, How may I assist you?\n");
       do
       {
              printf("1.I would like to buy something\n2.Leave\n");
              scanf("%d",&op);

              if (op==1)
              {
                     printf("Sure, Have a Look!\n1.Milk\n2.Chicken\n3.Eggs\n4.Butter\n5.Fryables\n");
                     scanf("%d",&op);

                     switch(op)
                     {
                            case 1:printf("Milk costs 24rs per 500ml, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(24,qty,"Milk");
                                   count++;
                                   break;

                            case 2:printf("Chicken costs 160rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(160,qty,"Chicken");
                                   count++;
                                   break;

                            case 3:printf("Eggs costs 88rs per dozen, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(88,qty,"Eggs");
                                   count++;
                                   break;

                            case 4:printf("Butter costs 150rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(150,qty,"Butter");
                                   count++;
                                   break;

                            case 5:printf("Fryables costs 75rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(75,qty,"Fryables");
                                   count++;
                                   break;

                            default:printf("Wrong input\n");
                     }
              
              }

              else
              printf("Have a good day sir!\n");

       }while(op!=2);



}

void essentials()
{
       int op,qty;
       printf("Welcome to the essentials section!\nIm Strong, How may I assist you?\n");
       do
       {
              printf("1.I would like to buy something\n2.Leave\n");
              scanf("%d",&op);

              if (op==1)
              {
                     printf("Sure, Have a Look!\n1.Atta\n2.Cooking oil\n3.Rice\n4.Biscuits\n5.Farsan\n");
                     scanf("%d",&op);

                     switch(op)
                     {
                            case 1:printf("Atta costs 135rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(135,qty,"Atta");
                                   count++;
                                   break;

                            case 2:printf("Cooking oil costs 75rs per litre, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(75,qty,"Cooking_Oil");
                                   count++;
                                   break;

                            case 3:printf("Rice costs 88rs per kilo, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(88,qty,"Rice");
                                   count++;
                                   break;

                            case 4:printf("Biscuits costs 150rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(150,qty,"Biscuits");
                                   count++;
                                   break;

                            case 5:printf("Farsan costs 99rs per kg, How much do you want?\n");
                                   scanf("%d",&qty);
                                   cart(99,qty,"Farsan");
                                   count++;
                                   break;

                            default:printf("Wrong input\n");
                     }
              
              }

              else
              printf("Have a good day sir!\n");

       }while(op!=2);



}

void winery()
{
       printf("Sorry, This section is only for Adults Above 21 years of age!\n");
}

void cart(int cost,int qt,char str[])
{
       if (count==15)
       {
              printf("Oops, Cart is Full, Moving to Cashcounter!\n");
              cashcounter();
       }

       else
       {
              node *newnode=(node *)malloc(sizeof(node));
              newnode->price=cost;
              newnode->qty=qt;
              newnode->item=str;

              if (count==0)
              {
                     newnode->next=NULL;
                     top=newnode;
              }

              else
              {
                   newnode->next=top;
                   top=newnode;
              }

              
       }

}

void cashcounter()
{
       int op,sum=0;
       printf("Welcome to the billing counter, Pay by Card or Cash only!\n");
       printf("Would you like to generate the bill?\n1.Yes, Im done shopping\n2.No, I forgot to take something\n");
       scanf("%d",&op);

       if (op==2)
       main();

       else
       {
              node *ptr=top;
              printf("**--------BILL--------**\n");
              printf("ITEM \tQTY\tPRICE\n");

              while (ptr!=NULL)
              {
                     printf("%s\t",ptr->item);
                     printf("%d\t",ptr->qty);
                     printf("%d\t\n",(ptr->price)*(ptr->qty));
                     sum=sum+(ptr->price)*(ptr->qty);
                     ptr=ptr->next;
                     free(top);
                     top=ptr;
              }

              printf("*---TOTAL AMOUNT---*\n");
              printf("\t%d\n",sum);
              printf("---------------------\n");

              printf("Thank you! Visit Again!\n");
              

       }


}