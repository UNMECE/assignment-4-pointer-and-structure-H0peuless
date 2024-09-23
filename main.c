#include "item.h"
#include <stdlib.h>
#include <stdio.h>

void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index);
void free_items(Item *item_list, int size);
double average_price(Item *item_list, int size);
void print_items(Item *item_list, int size);

int main(){
    Item *items = malloc(sizeof(Item)*5);
    add_item(items,12.34,"1234567","Food","Lait",0);
    print_items(items,1);
    printf("average price = %f\n",average_price(items,1));
    free_items(items,5);
    return 0;
};

void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index){
    Item item;
    item.price = price;
    item.sku = sku;
    item.category = category;
    item.name = name;
    
    item_list[index] = item;
};

void free_items(Item *item_list, int size){
    free(item_list);
};

double average_price(Item *item_list, int size){
    double avg = 0;
    for(int i = 0; i < size; i++ ){
        avg += item_list[i].price;
    }
    return avg/size;
}

void print_items(Item *item_list, int size){
    for(int i =0; i < size; i++ ){
        Item item = item_list[i];
        printf("###############\n");
        printf("item name = %s\n", item.name );
        printf("item sku = %s\n", item.sku );
        printf("item category = %s\n", item.category );
        printf("item name = %.2f\n", item.price );
    }
    printf("###############\n");
}