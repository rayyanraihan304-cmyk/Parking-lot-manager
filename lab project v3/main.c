#include <stdio.h>
#include <math.h>
#define RATE_PER_HOUR 30

// function defination and called part done by OviSaha2005
// global variables and Arithmetic part done by rayhan

    int slotno,vehicletype,minin,minout,totalmins,billedhours;
    char c1,c2,c3,c4,c5,sig1,sig2,sig3,num1,num2,num3,num4;
    double charge;
    
void header_p(void);

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

    printf("Enter Vehicle Plate(Format:DHAKA XYZ 1234): ");
    scanf(" %c%c%c%c%c %c%c%c %c%c%c%c" , &c1,&c2,&c3,&c4,&c5,&sig1,&sig2,&sig3,&num1,&num2,&num3,&num4);

    printf("Enter vehicle type(1 for car,2 for bike): ");
    scanf(" %d",&vehicletype);

    printf("Enter entry minute: ");
    scanf(" %d",&minin);

    printf("Enter exit minute: ");
    scanf("%d",&minout);
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
     //billing and charge part done by MahimHossain
     printf("Billed Hours:%d\nCharge:%.2f Taka",billedhours,charge);
printf("\n---------------------------------------------------------------\n");

}
int main()
{
    header_p();
    menu_p();
    read_p();
    body_p(calculate_charges(minin,minout));
    return 0;
}
