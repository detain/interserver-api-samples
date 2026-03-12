#ifndef reply_ticket_response_schema_TEST
#define reply_ticket_response_schema_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reply_ticket_response_schema_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reply_ticket_response_schema.h"
reply_ticket_response_schema_t* instantiate_reply_ticket_response_schema(int include_optional);



reply_ticket_response_schema_t* instantiate_reply_ticket_response_schema(int include_optional) {
  reply_ticket_response_schema_t* reply_ticket_response_schema = NULL;
  if (include_optional) {
    reply_ticket_response_schema = reply_ticket_response_schema_create(
      1,
      56
    );
  } else {
    reply_ticket_response_schema = reply_ticket_response_schema_create(
      1,
      56
    );
  }

  return reply_ticket_response_schema;
}


#ifdef reply_ticket_response_schema_MAIN

void test_reply_ticket_response_schema(int include_optional) {
    reply_ticket_response_schema_t* reply_ticket_response_schema_1 = instantiate_reply_ticket_response_schema(include_optional);

	cJSON* jsonreply_ticket_response_schema_1 = reply_ticket_response_schema_convertToJSON(reply_ticket_response_schema_1);
	printf("reply_ticket_response_schema :\n%s\n", cJSON_Print(jsonreply_ticket_response_schema_1));
	reply_ticket_response_schema_t* reply_ticket_response_schema_2 = reply_ticket_response_schema_parseFromJSON(jsonreply_ticket_response_schema_1);
	cJSON* jsonreply_ticket_response_schema_2 = reply_ticket_response_schema_convertToJSON(reply_ticket_response_schema_2);
	printf("repeating reply_ticket_response_schema:\n%s\n", cJSON_Print(jsonreply_ticket_response_schema_2));
}

int main() {
  test_reply_ticket_response_schema(1);
  test_reply_ticket_response_schema(0);

  printf("Hello world \n");
  return 0;
}

#endif // reply_ticket_response_schema_MAIN
#endif // reply_ticket_response_schema_TEST
