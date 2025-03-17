#include <stdio.h>
#include <string.h>

struct Subscription {
    char userName[50];
    char subType[20];
    float cost;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Subscription subs[n];
    int basicUsers = 0, standardUsers = 0, premiumUsers = 0;
    float basicRevenue = 0.0, standardRevenue = 0.0, premiumRevenue = 0.0;

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", subs[i].userName, subs[i].subType, &subs[i].cost);

        if (strcmp(subs[i].subType, "Basic") == 0) {
            basicUsers++;
            basicRevenue += subs[i].cost;
        } else if (strcmp(subs[i].subType, "Standard") == 0) {
            standardUsers++;
            standardRevenue += subs[i].cost;
        } else if (strcmp(subs[i].subType, "Premium") == 0) {
            premiumUsers++;
            premiumRevenue += subs[i].cost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; ", basicUsers, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardUsers, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumUsers, premiumRevenue);

    return 0;
}
