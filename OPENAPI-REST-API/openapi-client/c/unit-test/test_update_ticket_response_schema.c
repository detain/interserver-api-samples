#ifndef update_ticket_response_schema_TEST
#define update_ticket_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_ticket_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_ticket_response_schema.h"
update_ticket_response_schema_t* instantiate_update_ticket_response_schema(int include_optional);



update_ticket_response_schema_t* instantiate_update_ticket_response_schema(int include_optional) {
  update_ticket_response_schema_t* update_ticket_response_schema = NULL;
  if (include_optional) {
    update_ticket_response_schema = update_ticket_response_schema_create(
      1,
      "0"
    );
  } else {
    update_ticket_response_schema = update_ticket_response_schema_create(
      1,
      "0"
    );
  }

  return update_ticket_response_schema;
}


#ifdef update_ticket_response_schema_MAIN

void test_update_ticket_response_schema(int include_optional) {
    update_ticket_response_schema_t* update_ticket_response_schema_1 = instantiate_update_ticket_response_schema(include_optional);

	cJSON* jsonupdate_ticket_response_schema_1 = update_ticket_response_schema_convertToJSON(update_ticket_response_schema_1);
	printf("update_ticket_response_schema :\n%s\n", cJSON_Print(jsonupdate_ticket_response_schema_1));
	update_ticket_response_schema_t* update_ticket_response_schema_2 = update_ticket_response_schema_parseFromJSON(jsonupdate_ticket_response_schema_1);
	cJSON* jsonupdate_ticket_response_schema_2 = update_ticket_response_schema_convertToJSON(update_ticket_response_schema_2);
	printf("repeating update_ticket_response_schema:\n%s\n", cJSON_Print(jsonupdate_ticket_response_schema_2));
}

int main() {
  test_update_ticket_response_schema(1);
  test_update_ticket_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_ticket_response_schema_MAIN
#endif // update_ticket_response_schema_TEST
