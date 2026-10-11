#include <stdio.h>
#define RATE_PER_HOUR 30
int main()
{
    int slotno,vehicletype,minin,minout,totalmins,billedhours;
    char vehicleplate[];
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

    return 0;
}
