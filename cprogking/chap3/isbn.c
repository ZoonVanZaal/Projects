// This program takes an ISBN as input, dashes included, and parses 
// the ISBN by section, outputting the results

#include <stdio.h>

int main (void)
{
	int gs1, group_ID, pub_code, item_num, check_dig;

	// Get ISBN from user
	printf("Enter ISBN (include dashes): ");
	scanf("%d-%d-%d-%d-%d", &gs1, &group_ID, &pub_code, &item_num, &check_dig);

	// Display ISBN segments
	printf("GS1: %d\nGroup ID: %d\nPublisher Code: %d\nItem Number: %d\nCheck Digit: %d\n", gs1, group_ID, pub_code, item_num, check_dig);

	return 0;
}
