#include <stdio.h>
#define RATE_PER_HOUR 30
int main()
{
    int slotno,vehicletype,minin,minout,totalmins,billedhours;
    char vehicleplate[30];
    double charge;

    printf("Enter Slot Number:");
    scanf("%d", &slotno);

    printf("Enter Vehicle Plate: ");
    scanf("%29s",&vehicleplate);

    printf("Enter vehicle type: ");
    scanf("%d",&vehicletype);

    printf("Enter entry minute: ");
    scanf("%d",&minin);

    printf("Enter exit minute: ");
    scanf("%d",&minout);
    
    totalmins=minout-minin;
    billedhours=(totalmins+59)/60;
    charge=billedhours*RATE_PER_HOUR;
    printf("\n---------------------------------------------------------------\n");
printf("\t\t\tVehicle Record\n");
      printf("---------------------------------------------------------------\n");

printf("Slot no.\tPlate Number\tType\tMin in\tMin out\n");
printf("%d\t%s\t%d\t%d\t%d\n",slotno,vehicleplate,vehicletype,minin,minout);

     printf("Billed Hours:%d\nCharge:%.2lf",billedhours,charge);
printf("\n---------------------------------------------------------------\n");

    return 0;
}
