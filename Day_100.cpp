#include<bits/stdc++.h>
using namespace std;
int ssp=40,psp=120,dsp=35,csp=15,isp=25,wsp=60,msp=300,bsp=170,shsp=250,pesp=15;
    /*scp=soap selling price,pcp=perfume selling price,dcp=drinks selling price,ccp=chips selling price,
    icp=ice-cream selling price,wcp=water bottle selling price,mcp=makeup kit selling price,
    bcp=body lotion selling price,shcp=shampoo selling price,pecp=pencil selling price*/
int scp=30,pcp=100,dcp=30,ccp=10,icp=20,wcp=50,mcp=250,bcp=150,shcp=200,pecp=10;
   /*scp=soap cost price,pcp=perfume cost price,dcp=drinks cost price,ccp=chips cost price,
    icp=ice-cream cost price,wcp=water bottle cost price,mcp=makeup kit cost price,
    bcp=body lotion cost price,shcp=shampoo cost price,pecp=pencil cost price,*/
int as=10,ap=10,ad=10,ac=10,ai=10,aw=10,am=10,ab=10,ash=10,ape=10;//a=available//
int cd,cost1,cost2,cost3,cost4,cost5,cost6,cost7,cost8,cost9,cost10,total_cost,investment;
int demand1,demand2,demand3,demand4,demand5,demand6,demand7,demand8,demand9,demand10;
int tcp,tsp,cp1,cp2,cp3,cp4,cp5,cp6,cp7,cp8,cp9,cp10,profit,loss;
   //sp=selling price,cp=cost price,p=profit,l=loss,a=amount,cd=customer demand//
int main()
{
    int  a,choice;
homepage:
    cout<<endl<<endl;
    cout<<"                                            WELCOME TO ";

    cout<<endl<<endl<<endl;
    cout<<"                                        MARZAN'S SUPERSHOP"<<endl<<endl<<endl;

    cout<<"                                   Press 1 for Admin mode"<<endl<<endl;

    cout<<"                                   Press 2 for Customer  mode"<<endl<<endl;

    cout<<"                                   Press 3 for accounting  mode"<<endl<<endl;
    cout<<"                                   Enter your choice : ";

    cin>>a;
    cout<<endl<<endl;
    system("cls");
    cout<<endl<<endl<<endl;
    if(a==1)
    {
        printf("                                  **WELCOME TO ADMIN MODE** ");
        printf(" \n\n\n");
        printf("          PRODUCT LIST      Available PRODUCT    price/product ");
        printf(" \n\n");
        printf("\n           soap                    %d              %d",as,scp);

        printf("\n           Perfume                 %d              %d",ap,pcp);

        printf("\n           Drinks                  %d              %d",ad,dcp);

        printf("\n           chips                   %d              %d",ac,ccp);

        printf("\n           Ice-cream               %d              %d",ai,icp);

        printf("\n           Water bottle            %d              %d",aw,wcp);

        printf("\n           Makeup kit              %d              %d",am,mcp);

        printf("\n           Body Lotion             %d              %d",ab,bcp);

        printf("\n           shampoo                 %d              %d",ash,shcp);

        printf("\n           pencil                  %d              %d",ape,pecp);

    }


    else if(a==2)
    {
        printf("                                   **WELCOME TO CUSTOMER MODE** ");
        printf(" \n\n\n");
        printf("               Available product      and       price/product");
        printf(" \n\n");
        printf("                  soap                 -           %d",ssp);

        printf("\n                  Perfume              -           %d",psp);

        printf("\n                  Drinks               -           %d",dsp);

        printf("\n                  chips                -           %d",csp);

        printf("\n                  Ice-cream            -           %d",isp);

        printf("\n                  Water bottle         -           %d",wsp);

        printf("\n                  Makeup kit           -           %d",msp);

        printf("\n                  Body Lotion          -           %d",bsp);

        printf("\n                  shampoo              -           %d",shsp);

        printf("\n                  pencil               -           %d",pesp);

customer_mode:
        printf("\n\n\n    Which product do you want to buy?\n");
        printf("                                    Press 1 for Soap");
        printf("\n\n");
        printf("                                    Press 2 for Perfume\n\n");
        printf("                                    Press 3 for Drinks\n\n");
        printf("                                    Press 4 for Chips\n\n");
        printf("                                    Press 5 for Ice-cream\n\n");
        printf("                                    Press 6 for Water bottle\n\n");
        printf("                                    Press 7 for Makeup kit\n\n");
        printf("                                    Press 8 for Body Lotion\n\n");
        printf("                                    Press 9 for Shampoo\n\n");
        printf("                                    Press 10 for Pencil\n\n");
        printf("                                    Press 0 for go to homepage..\n");
        printf("\n    Enter your choice : ");

        scanf("%d",&a);
        printf("\n\n");
        system("cls");
        printf(" \n\n\n");

        if(a==1)
        {
            printf("  How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=as)
             {
                cost1=cd*ssp,demand1=cd;

                printf("cost=%d",cost1);
                printf("\nProduct demand=%d",demand1);
             }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
            goto customer_mode;
        }

        else if(a==2)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ap)
            {
                cost2=cd*psp,demand2=cd;

                printf("cost=%d",cost2);
                printf("\nProduct demand=%d",demand2);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }


        else if(a==3)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ad)
            {
                cost3=cd*dsp,demand3=cd;

                printf("cost=%d",cost3);
                printf("\nProduct demand=%d",demand3);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }

        else if(a==4)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ac)
            {
                cost4=cd*csp,demand4=cd;

                printf("cost=%d",cost4);
                printf("\nProduct demand=%d",demand4);
            }
            else
               {
                   printf("\n\n    Sorry, we don't have so much...!!\n");
                   printf("\n    You can buy maximum 10 pieces.");
               }
        }

        else if(a==5)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ai)
            {
                cost5=cd*isp,demand5=cd;

                printf("cost=%d",cost5);
                printf("\nProduct demand=%d",demand5);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }

        else if(a==6)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=aw)
            {
                cost6=cd*wsp,demand6=cd;

                printf("cost=%d",cost6);
                printf("\nProduct demand=%d",demand6);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }

        else if(a==7)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=am)
            {
                cost7=cd*msp,demand7=cd;

                printf("cost=%d",cost7);
                printf("\nProduct demand=%d",demand7);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }

        else if(a==8)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ab)
            {
                cost8=cd*bsp,demand8=cd;

                printf("cost=%d",cost8);
                printf("\nProduct demand=%d",demand8);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }


        else if(a==9)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ash)
            {
                cost9=cd*shsp,demand9=cd;

                printf("cost=%d",cost9);
                printf("\nProduct demand=%d",demand9);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }


        else if(a==10)
        {
            printf("   How much do you want to buy? ");
            scanf("%d",&cd);
            if(cd<=ape)
            {
                cost10=cd*pesp,demand10=cd;

                printf("cost=%d",cost10);
                printf("\nProduct demand=%d",demand10);
            }
            else
               {
                  printf("\n\n    Sorry, we don't have so much...!!\n");
                  printf("\n    You can buy maximum 10 pieces.");
               }
        }


        else if(a==0)
        {
            goto homepage;
        }


        {
            tsp=cost1+cost2+cost3+cost4+cost5+cost6+cost7+cost8+cost9+cost10;
            printf("\n\n    Total cost=%d",tsp);
            goto customer_mode;
        }
    }
    else if(a=3)
    {
        printf("                                  **WELCOME TO Accounting MODE** ");
        printf(" \n\n\n");
        printf("           Available product       product demand    price/product      cost/product");
        printf(" \n\n");
        printf("         Soap                           %d               %d                 %d",demand1,ssp,cost1);
        printf("\n         Perfume                        %d               %d                %d",demand2,psp,cost2);
        printf("\n         Drinks                         %d               %d                 %d",demand3,dsp,cost3);
        printf("\n         Chips                          %d               %d                 %d",demand4,csp,cost4);
        printf("\n         Ice-cream                      %d               %d                 %d",demand5,isp,cost5);
        printf("\n         Water bottle                   %d               %d                 %d",demand6,wsp,cost6);
        printf("\n         Makeup kit                     %d               %d                %d",demand7,msp,cost7);
        printf("\n         Body Lotion                    %d               %d                %d",demand8,bsp,cost8);
        printf("\n         Shampoo                        %d               %d                %d",demand9,shsp,cost9);
        printf("\n         Pencil                         %d               %d                 %d",demand10,pesp,cost10);
        printf("\n     _______________________________________________________________________________");
        printf("\n                                                                  total cost=%d",tsp);


        cp1=scp*demand1;
        printf("\n    Soap investment=%d",cp1);
        cp2=pcp*demand2;
        printf("\n    Perfume investment=%d",cp2);
        cp3=dcp*demand3;
        printf("\n    Drinks investment=%d",cp3);
        cp4=ccp*demand4;
        printf("\n    Chips investment=%d",cp4);
        cp5=icp*demand5;
        printf("\n    Ice-cream investment=%d",cp5);
        cp6=wcp*demand6;
        printf("\n    Water bottle investment=%d",cp6);
        cp7=mcp*demand7;
        printf("\n    Makeup kit investment=%d",cp7);
        cp8=bcp*demand8;
        printf("\n    Body Lotion  investment=%d",cp8);
        cp9=shcp*demand9;
        printf("\n    Shampoo  investment=%d",cp9);
        cp10=pecp*demand10;
        printf("\n    Pencil investment=%d",cp10);


        tcp=cp1+cp2+cp3+cp4+cp5+cp6+cp7+cp8+cp9+cp10;
        printf("\n   ______________________________");
        printf("\n    Total investment=%d",tcp);




        if(tsp>tcp)

        {
            profit=tsp-tcp;
            printf("\n\n   profit=%d",profit);
        }
        else
           {
              loss=tcp-tsp;
              printf("\n\n   loss=%d",loss);
           }

    }
    printf("\n\n\n    Are you want to go home page?\n");
    printf("    1 Yes\n");
    printf("    2 No\n");
    printf("    Please enter your choice:");
    scanf("%d",&choice);

    if(choice==1)
    {
        system("cls");
        main();
    }
    else
        printf("\n\n\t\t\t..................Thank You..................");





}


