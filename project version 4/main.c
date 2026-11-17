#include <stdio.h>
#include <math.h>
#define RATE_PER_HOUR 30

// function defination, called part and global variables  done by OviSaha2005
// While loop and switch part done by rayhan
// Header menu and display part done by mahi shad
//billing and charge part done by MahimHossain
int slotno,vehicletype,minin,minout,totalmins,billedhours;
char c1,c2,c3,c4,c5,sig1,sig2,sig3,num1,num2,num3,num4;
double charge;
int record_count = 0;
double running_total = 0.0;

void header_p(void);
void menu_p(void);
void read_p(void);
double calculate_charges(int minin, int minout);
void body_p(double charge);

void header_p(void)
{
    printf("\t\t\t==================================");
    printf("\n\t\t\t\tPARKING LOT MANAGER\n");
    printf("\t\t\t==================================");
}
void menu_p(void)
{
    printf("\nMAIN MENU\n\n");
    printf("1.PARK A VEHICLE\n");
    printf("2.Release and charge\n");
    printf("3.Show free slots\n");
    printf("4.Search by plate\n");
    printf("5.Days's earnings\n");
    printf("6.Save and load\n");
    printf("7.Exit\n\n");
}
void read_p(void)
{
    printf("Enter Slot Number:");
    scanf("%d", &slotno);
    while(slotno <= 0)
    {
        printf("Invalid input please input a positve integer. Enter again:");
        scanf("%d", &slotno);
    }
    printf("Enter Vehicle Plate(Format:DHAKA XYZ 1234): ");
    scanf(" %c%c%c%c%c %c%c%c %c%c%c%c", &c1,&c2,&c3,&c4,&c5,&sig1,&sig2,&sig3,&num1,&num2,&num3,&num4);

    printf("Enter vehicle type(1 for car,2 for bike): ");
    scanf(" %d",&vehicletype);
    while(vehicletype !=1 && vehicletype != 2)
    {
        printf("Invalid type! Enter 1 for car or 2 for bike. Enter again: ");
        scanf("%d", &vehicletype);
    }
    printf("Enter entry minute: ");
    scanf(" %d",&minin);
    while(minin<0)
    {
        printf("Please input a positive integer. Enter again: ");
        scanf(" %d", &minin);
    }
    printf("Enter exit minute: ");
    scanf("%d",&minout);
    while(minout<minin || minout<0)
    {
        printf("exit minute must be positve and greater than entry minutes. Enter again: ");
        scanf(" %d", &minout);
    }

}

double calculate_charges(int minin,int minout)
{
    totalmins = minout - minin;
    billedhours = (int)ceil(totalmins / 60.0);
    charge = billedhours * RATE_PER_HOUR;

    return charge;
}
void body_p(double charge)
{
    printf("\n---------------------------------------------------------------\n");
    printf("\t\t\tVehicle Record\n");
    printf("---------------------------------------------------------------\n");



    printf("Slot no.\tPlate Number\tType\tMin in\tMin out\n");
    printf("%d\t\t%c%c%c%c%c-%c%c%c-%c%c%c%c\t%d\t%d\t%d\n\n",slotno,c1,c2,c3,c4,c5,sig1,sig2,sig3,num1,num2,num3,num4,vehicletype,minin,minout);

    printf("Billed Hours:%d\nCharge:%.2f Taka",billedhours,charge);
    printf("\n---------------------------------------------------------------\n");

}
int main()
{
    int choice, active_record = 0;
    header_p();
    do
    {
        menu_p();
        printf("Enter your choice (1-7): ");
        scanf(" %d", &choice);
        if (choice < 1 || choice > 7)
        {
            printf("\nINVALID MENU CHOCIE! PLEASE SELECT A NUMBER BETWEEN (1-7):");
            continue;
        }

        switch(choice)
        {
        case 1:
        {
            read_p();
            active_record = 1;
            printf("\nVehicle record saved! Choose option 2 to release and calculate charge.\n");
            break;
        }
        case 2:
            if (active_record == 0)
            {
                printf("No vehicle parked yet! Please use option 1 first.");
            }
            else
            {
                double current_charge = calculate_charges(minin, minout);
                body_p(current_charge);

                record_count++;
                running_total += current_charge;
                active_record = 0;
            }
            break;
        case 3:
            printf("\nNeed array\n");
            break;
        case 4:
            printf("\nNeed strings");
            break;
        case 5:

            printf("\n=======================================\n");
            printf("          DAY'S SUMMARY REPORT         \n");
            printf("=======================================\n");
            printf("Total Records Entered : %d\n", record_count);
            printf("Running Total Earnings: %.2f Taka\n", running_total);
            printf("=======================================\n");
            break;
        case 6:
            printf("not yet");
            break;

        case 7:

            printf("\nExiting Parking Lot Manager. Goodbye!\n");
            break;
        }




    }
    while (choice != 7);
    return 0;
}
