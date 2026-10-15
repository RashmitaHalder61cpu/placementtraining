#include <stdio.h>
#include <stdlib.h>

struct Ticket {
    int ticket_no;
    char vehicle[20];
    float gross;
    float tare;
};

float netWeight(struct Ticket *t) {
    return t->gross - t->tare;
}

void printTicket(struct Ticket *t) {
    printf("%d %s gross %.2f tare %.2f\n",
           t->ticket_no, t->vehicle, t->gross, t->tare);
    printf("net %.2f\n", netWeight(t));
}

int main() {
    int n, i, maxIndex = 0;
    float total = 0.0;

    scanf("%d", &n);

    if (n <= 0 || n > 100000) {
        printf("INVALID COUNT");
        return 0;
    }

    struct Ticket *tickets;
    tickets = (struct Ticket *)malloc(n * sizeof(struct Ticket));

    if (tickets == NULL) {
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d %19s %f %f",
              &tickets[i].ticket_no,
              tickets[i].vehicle,
              &tickets[i].gross,
              &tickets[i].tare);
    }

    printf("WEIGHBRIDGE DAY BOOK\n");

    for (i = 0; i < n; i++) {
        printTicket(&tickets[i]);

        total += netWeight(&tickets[i]);

        if (netWeight(&tickets[i]) >
            netWeight(&tickets[maxIndex])) {
            maxIndex = i;
        }
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);

    printf("Heaviest net load: ticket %d %s\n",
           tickets[maxIndex].ticket_no,
           tickets[maxIndex].vehicle);

    printf("%.2f\n", netWeight(&tickets[maxIndex]));

    free(tickets);

    return 0;
}
