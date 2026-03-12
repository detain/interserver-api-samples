#ifndef queue_response_TEST
#define queue_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define queue_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/queue_response.h"
queue_response_t* instantiate_queue_response(int include_optional);



queue_response_t* instantiate_queue_response(int include_optional) {
  queue_response_t* queue_response = NULL;
  if (include_optional) {
    queue_response = queue_response_create(
      "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
      14670065
    );
  } else {
    queue_response = queue_response_create(
      "Action has been sent to the server. Please allow up to 2 minutes for action to be completed.",
      14670065
    );
  }

  return queue_response;
}


#ifdef queue_response_MAIN

void test_queue_response(int include_optional) {
    queue_response_t* queue_response_1 = instantiate_queue_response(include_optional);

	cJSON* jsonqueue_response_1 = queue_response_convertToJSON(queue_response_1);
	printf("queue_response :\n%s\n", cJSON_Print(jsonqueue_response_1));
	queue_response_t* queue_response_2 = queue_response_parseFromJSON(jsonqueue_response_1);
	cJSON* jsonqueue_response_2 = queue_response_convertToJSON(queue_response_2);
	printf("repeating queue_response:\n%s\n", cJSON_Print(jsonqueue_response_2));
}

int main() {
  test_queue_response(1);
  test_queue_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // queue_response_MAIN
#endif // queue_response_TEST
