#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum section_t {
	FREEZER,
	GENERAL
} Section;


typedef struct food_t {
	char * name;
	double price;
} Food;


typedef struct aisle_t {
	Section section_type;
	int capacity;
	int count;
	Food * content;
} Aisle;


typedef struct store_t {
	char * name;
	int freezer_count;
	int general_count;
	Aisle * aisles;
} Store;

/* create a Store Struct which has freezer_count freezer aisles and general_count general aisles */
/* initialize the aisles also with no content */
Store * storeInit(char * name, int freezer_count, int general_count, int freezer_cap, int general_cap) {
	return NULL;
}

/* add food to the first available spot in the section of the store */
void addFood(Store * store, char* foodname, double price, Section section) {
}


// Function to print the store details
void printStore(const Store *store) {
    printf("Store: %s\n", store->name);
    printf("Aisles:\n");

    for (int i = 0; i < store->freezer_count + store->general_count; i++) {
        printf("Aisle %d - Section Type: %s\n", i + 1,
               (store->aisles[i].section_type == FREEZER) ? "FREEZER" : "GENERAL");
        printf("Capacity: %d\n", store->aisles[i].capacity);
        printf("Count: %d\n", store->aisles[i].count);

        printf("Food Items:\n");
        for (int j = 0; j < store->aisles[i].count; j++) {
            printf("  %-20s %-10.2f\n", store->aisles[i].content[j].name, store->aisles[i].content[j].price);
        }
        printf("\n");
    }
}

int main() {
    // Initialize the store with smaller capacities
    Store *myStore = storeInit("My Grocery Store", 2, 3, 3, 4);

    // Print the initial store state
    printf("Initial Store State:\n");
    printStore(myStore);

    // Add food items to aisles
    addFood(myStore, "Frozen Pizza", 5.99, FREEZER);
    addFood(myStore, "Ice Cream", 4.79, FREEZER);
    addFood(myStore, "Cereal", 3.49, GENERAL);
    addFood(myStore, "Pasta", 2.99, GENERAL);
    addFood(myStore, "Fresh Produce", 1.99, GENERAL);

    // Add more food items
    addFood(myStore, "Chicken Nuggets", 6.49, FREEZER);
    addFood(myStore, "Fish Fillets", 7.99, FREEZER);
    addFood(myStore, "Yogurt", 2.29, FREEZER);
    addFood(myStore, "Bread", 1.49, GENERAL);
    addFood(myStore, "Milk", 2.19, GENERAL);
    addFood(myStore, "Cheese", 4.29, GENERAL);

    // Print the updated store state
    printf("\nUpdated Store State:\n");
    printStore(myStore);

    // Free allocated memory
    // Note: In a real program, you would want to call freeStore to free all allocated memory.
    free(myStore->name);
    for (int i = 0; i < myStore->freezer_count + myStore->general_count; i++) {
        for (int j = 0; j < myStore->aisles[i].count; j++) {
            free(myStore->aisles[i].content[j].name);
        }
        free(myStore->aisles[i].content);
    }
    free(myStore->aisles);
    free(myStore);

    return 0;
}
