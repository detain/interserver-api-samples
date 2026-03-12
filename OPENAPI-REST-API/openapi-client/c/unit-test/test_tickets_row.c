#ifndef tickets_row_TEST
#define tickets_row_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define tickets_row_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/tickets_row.h"
tickets_row_t* instantiate_tickets_row(int include_optional);



tickets_row_t* instantiate_tickets_row(int include_optional) {
  tickets_row_t* tickets_row = NULL;
  if (include_optional) {
    tickets_row = tickets_row_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      null,
      "0",
      1
    );
  } else {
    tickets_row = tickets_row_create(
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      null,
      "0",
      1
    );
  }

  return tickets_row;
}


#ifdef tickets_row_MAIN

void test_tickets_row(int include_optional) {
    tickets_row_t* tickets_row_1 = instantiate_tickets_row(include_optional);

	cJSON* jsontickets_row_1 = tickets_row_convertToJSON(tickets_row_1);
	printf("tickets_row :\n%s\n", cJSON_Print(jsontickets_row_1));
	tickets_row_t* tickets_row_2 = tickets_row_parseFromJSON(jsontickets_row_1);
	cJSON* jsontickets_row_2 = tickets_row_convertToJSON(tickets_row_2);
	printf("repeating tickets_row:\n%s\n", cJSON_Print(jsontickets_row_2));
}

int main() {
  test_tickets_row(1);
  test_tickets_row(0);

  printf("Hello world \n");
  return 0;
}

#endif // tickets_row_MAIN
#endif // tickets_row_TEST
