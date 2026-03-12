#ifndef tickets_count_array_TEST
#define tickets_count_array_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tickets_count_array_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tickets_count_array.h"
tickets_count_array_t* instantiate_tickets_count_array(int include_optional);



tickets_count_array_t* instantiate_tickets_count_array(int include_optional) {
  tickets_count_array_t* tickets_count_array = NULL;
  if (include_optional) {
    tickets_count_array = tickets_count_array_create(
      56,
      56,
      56
    );
  } else {
    tickets_count_array = tickets_count_array_create(
      56,
      56,
      56
    );
  }

  return tickets_count_array;
}


#ifdef tickets_count_array_MAIN

void test_tickets_count_array(int include_optional) {
    tickets_count_array_t* tickets_count_array_1 = instantiate_tickets_count_array(include_optional);

	cJSON* jsontickets_count_array_1 = tickets_count_array_convertToJSON(tickets_count_array_1);
	printf("tickets_count_array :\n%s\n", cJSON_Print(jsontickets_count_array_1));
	tickets_count_array_t* tickets_count_array_2 = tickets_count_array_parseFromJSON(jsontickets_count_array_1);
	cJSON* jsontickets_count_array_2 = tickets_count_array_convertToJSON(tickets_count_array_2);
	printf("repeating tickets_count_array:\n%s\n", cJSON_Print(jsontickets_count_array_2));
}

int main() {
  test_tickets_count_array(1);
  test_tickets_count_array(0);

  printf("Hello world \n");
  return 0;
}

#endif // tickets_count_array_MAIN
#endif // tickets_count_array_TEST
