#ifndef url_request_TEST
#define url_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define url_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/url_request.h"
url_request_t* instantiate_url_request(int include_optional);



url_request_t* instantiate_url_request(int include_optional) {
  url_request_t* url_request = NULL;
  if (include_optional) {
    url_request = url_request_create(
      "0"
    );
  } else {
    url_request = url_request_create(
      "0"
    );
  }

  return url_request;
}


#ifdef url_request_MAIN

void test_url_request(int include_optional) {
    url_request_t* url_request_1 = instantiate_url_request(include_optional);

	cJSON* jsonurl_request_1 = url_request_convertToJSON(url_request_1);
	printf("url_request :\n%s\n", cJSON_Print(jsonurl_request_1));
	url_request_t* url_request_2 = url_request_parseFromJSON(jsonurl_request_1);
	cJSON* jsonurl_request_2 = url_request_convertToJSON(url_request_2);
	printf("repeating url_request:\n%s\n", cJSON_Print(jsonurl_request_2));
}

int main() {
  test_url_request(1);
  test_url_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // url_request_MAIN
#endif // url_request_TEST
