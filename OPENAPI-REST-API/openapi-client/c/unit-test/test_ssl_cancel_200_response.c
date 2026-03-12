#ifndef ssl_cancel_200_response_TEST
#define ssl_cancel_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ssl_cancel_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ssl_cancel_200_response.h"
ssl_cancel_200_response_t* instantiate_ssl_cancel_200_response(int include_optional);



ssl_cancel_200_response_t* instantiate_ssl_cancel_200_response(int include_optional) {
  ssl_cancel_200_response_t* ssl_cancel_200_response = NULL;
  if (include_optional) {
    ssl_cancel_200_response = ssl_cancel_200_response_create(
      1,
      "0"
    );
  } else {
    ssl_cancel_200_response = ssl_cancel_200_response_create(
      1,
      "0"
    );
  }

  return ssl_cancel_200_response;
}


#ifdef ssl_cancel_200_response_MAIN

void test_ssl_cancel_200_response(int include_optional) {
    ssl_cancel_200_response_t* ssl_cancel_200_response_1 = instantiate_ssl_cancel_200_response(include_optional);

	cJSON* jsonssl_cancel_200_response_1 = ssl_cancel_200_response_convertToJSON(ssl_cancel_200_response_1);
	printf("ssl_cancel_200_response :\n%s\n", cJSON_Print(jsonssl_cancel_200_response_1));
	ssl_cancel_200_response_t* ssl_cancel_200_response_2 = ssl_cancel_200_response_parseFromJSON(jsonssl_cancel_200_response_1);
	cJSON* jsonssl_cancel_200_response_2 = ssl_cancel_200_response_convertToJSON(ssl_cancel_200_response_2);
	printf("repeating ssl_cancel_200_response:\n%s\n", cJSON_Print(jsonssl_cancel_200_response_2));
}

int main() {
  test_ssl_cancel_200_response(1);
  test_ssl_cancel_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ssl_cancel_200_response_MAIN
#endif // ssl_cancel_200_response_TEST
