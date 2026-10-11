#include <stdio.h>
#define RATE_PER_HOUR 30

int main()
{   // variable declaration and inputs part done by OviSaha
    int slotno,vehicletype,minin,minout,totalmins,billedhours;
    char vehicleplate[20];
    double charge;

    printf("Enter Slot Number:");
    scanf("%d", &slotno);

    printf("Enter Vehicle Plate: ");
    scanf("%19s",&vehicleplate);

    printf("Enter vehicle type: ");
    scanf("%d",&vehicletype);

    printf("Enter entry minute: ");
    scanf("%d",&minin);

    printf("Enter exit minute: ");
    scanf("%d",&minout);
    //Arithmetic equation part done by MahiShad
    totalmins=minout-minin;
    billedhours=(totalmins+59)/60;
    charge=billedhours*RATE_PER_HOUR;
    printf("\n---------------------------------------------------------------\n");
printf("\t\t\tVehicle Record\n");
      printf("---------------------------------------------------------------\n");

printf("Slot no.\tPlate Number\tType\tMin in\tMin out\n");
printf("%d\t\t%s\t\t%d\t%d\t%d\n\n",slotno,vehicleplate,vehicletype,minin,minout);

     printf("Billed Hours:%d\nCharge:%.2lf Taka",billedhours,charge);
printf("\n---------------------------------------------------------------\n");

    return 0;
}
