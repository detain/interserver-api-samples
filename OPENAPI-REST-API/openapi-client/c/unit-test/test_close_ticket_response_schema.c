#ifndef close_ticket_response_schema_TEST
#define close_ticket_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define close_ticket_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/close_ticket_response_schema.h"
close_ticket_response_schema_t* instantiate_close_ticket_response_schema(int include_optional);



close_ticket_response_schema_t* instantiate_close_ticket_response_schema(int include_optional) {
  close_ticket_response_schema_t* close_ticket_response_schema = NULL;
  if (include_optional) {
    close_ticket_response_schema = close_ticket_response_schema_create(
      1,
      "0"
    );
  } else {
    close_ticket_response_schema = close_ticket_response_schema_create(
      1,
      "0"
    );
  }

  return close_ticket_response_schema;
}


#ifdef close_ticket_response_schema_MAIN

void test_close_ticket_response_schema(int include_optional) {
    close_ticket_response_schema_t* close_ticket_response_schema_1 = instantiate_close_ticket_response_schema(include_optional);

	cJSON* jsonclose_ticket_response_schema_1 = close_ticket_response_schema_convertToJSON(close_ticket_response_schema_1);
	printf("close_ticket_response_schema :\n%s\n", cJSON_Print(jsonclose_ticket_response_schema_1));
	close_ticket_response_schema_t* close_ticket_response_schema_2 = close_ticket_response_schema_parseFromJSON(jsonclose_ticket_response_schema_1);
	cJSON* jsonclose_ticket_response_schema_2 = close_ticket_response_schema_convertToJSON(close_ticket_response_schema_2);
	printf("repeating close_ticket_response_schema:\n%s\n", cJSON_Print(jsonclose_ticket_response_schema_2));
}

int main() {
  test_close_ticket_response_schema(1);
  test_close_ticket_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // close_ticket_response_schema_MAIN
#endif // close_ticket_response_schema_TEST
