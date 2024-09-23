#include "item.h"
#include <stdlib.h>
#include <stdio.h>

void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index)
void free_items(Item *item_list, int size);
double average_price(Item *item_list, int size);
void print_items(Item *item_list, int size);

int main(){
    Item *items = (*Item) malloc(sizeof(Item)*5);
    return 0;
};

void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index){
    Item item;
    item -> price = price;
    item -> sku = sku;
    item -> category = category;
    item -> name = name; 
    
    item_list[index] = item;
};

void free_items(Item *item_list, int size){
    for(int i = 0; i < size; i++ ){
        free(item_list[i]);
    }
    free(item_list);
};

double average_price(Item *item_list, int size){
    double avg = 0;
    for(int i = 0; i < size; i++ ){
        avg += item_list[size] -> price;
    }
    return avg/size;
}

void print_items(Item *item_list, int size){
    for(int i =0; i < size; i++ ){
        Item item = item_list[i];
        printf("###############\n");
        printf("item name = %s\n"; item -> name );
        printf("item sku = %s\n"; item -> sku );
        printf("item category = %s\n"; item -> category );
        printf("item name = %d\n"; item -> price );
    }
    printf("###############\n");
}