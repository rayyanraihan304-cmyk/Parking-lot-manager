#include <stdio.h>

int main()
{
    int slotno,vehicletype,minin,minout;
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

    return 0;
}
