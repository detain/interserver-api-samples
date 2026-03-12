#ifndef tickets_TEST
#define tickets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tickets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tickets.h"
tickets_t* instantiate_tickets(int include_optional);

#include "test_tickets_count_array.c"


tickets_t* instantiate_tickets(int include_optional) {
  tickets_t* tickets = NULL;
  if (include_optional) {
    tickets = tickets_create(
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      list_createList(),
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_tickets_count_array(0),
      "0"
    );
  } else {
    tickets = tickets_create(
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      list_createList(),
      56,
      56,
      56,
      NULL,
      "0"
    );
  }

  return tickets;
}


#ifdef tickets_MAIN

void test_tickets(int include_optional) {
    tickets_t* tickets_1 = instantiate_tickets(include_optional);

	cJSON* jsontickets_1 = tickets_convertToJSON(tickets_1);
	printf("tickets :\n%s\n", cJSON_Print(jsontickets_1));
	tickets_t* tickets_2 = tickets_parseFromJSON(jsontickets_1);
	cJSON* jsontickets_2 = tickets_convertToJSON(tickets_2);
	printf("repeating tickets:\n%s\n", cJSON_Print(jsontickets_2));
}

int main() {
  test_tickets(1);
  test_tickets(0);

  printf("Hello world \n");
  return 0;
}

#endif // tickets_MAIN
#endif // tickets_TEST
