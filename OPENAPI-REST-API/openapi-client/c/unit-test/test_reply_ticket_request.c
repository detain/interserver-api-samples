#ifndef reply_ticket_request_TEST
#define reply_ticket_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reply_ticket_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reply_ticket_request.h"
reply_ticket_request_t* instantiate_reply_ticket_request(int include_optional);



reply_ticket_request_t* instantiate_reply_ticket_request(int include_optional) {
  reply_ticket_request_t* reply_ticket_request = NULL;
  if (include_optional) {
    reply_ticket_request = reply_ticket_request_create(
      "0"
    );
  } else {
    reply_ticket_request = reply_ticket_request_create(
      "0"
    );
  }

  return reply_ticket_request;
}


#ifdef reply_ticket_request_MAIN

void test_reply_ticket_request(int include_optional) {
    reply_ticket_request_t* reply_ticket_request_1 = instantiate_reply_ticket_request(include_optional);

	cJSON* jsonreply_ticket_request_1 = reply_ticket_request_convertToJSON(reply_ticket_request_1);
	printf("reply_ticket_request :\n%s\n", cJSON_Print(jsonreply_ticket_request_1));
	reply_ticket_request_t* reply_ticket_request_2 = reply_ticket_request_parseFromJSON(jsonreply_ticket_request_1);
	cJSON* jsonreply_ticket_request_2 = reply_ticket_request_convertToJSON(reply_ticket_request_2);
	printf("repeating reply_ticket_request:\n%s\n", cJSON_Print(jsonreply_ticket_request_2));
}

int main() {
  test_reply_ticket_request(1);
  test_reply_ticket_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // reply_ticket_request_MAIN
#endif // reply_ticket_request_TEST
