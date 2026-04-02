#ifndef add_server_200_response_TEST
#define add_server_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define add_server_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/add_server_200_response.h"
add_server_200_response_t* instantiate_add_server_200_response(int include_optional);



add_server_200_response_t* instantiate_add_server_200_response(int include_optional) {
  add_server_200_response_t* add_server_200_response = NULL;
  if (include_optional) {
    add_server_200_response = add_server_200_response_create(
      "Order Completed",
      56,
      56
    );
  } else {
    add_server_200_response = add_server_200_response_create(
      "Order Completed",
      56,
      56
    );
  }

  return add_server_200_response;
}


#ifdef add_server_200_response_MAIN

void test_add_server_200_response(int include_optional) {
    add_server_200_response_t* add_server_200_response_1 = instantiate_add_server_200_response(include_optional);

	cJSON* jsonadd_server_200_response_1 = add_server_200_response_convertToJSON(add_server_200_response_1);
	printf("add_server_200_response :\n%s\n", cJSON_Print(jsonadd_server_200_response_1));
	add_server_200_response_t* add_server_200_response_2 = add_server_200_response_parseFromJSON(jsonadd_server_200_response_1);
	cJSON* jsonadd_server_200_response_2 = add_server_200_response_convertToJSON(add_server_200_response_2);
	printf("repeating add_server_200_response:\n%s\n", cJSON_Print(jsonadd_server_200_response_2));
}

int main() {
  test_add_server_200_response(1);
  test_add_server_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // add_server_200_response_MAIN
#endif // add_server_200_response_TEST
