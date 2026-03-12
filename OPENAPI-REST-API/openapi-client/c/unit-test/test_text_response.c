#ifndef text_response_TEST
#define text_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define text_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/text_response.h"
text_response_t* instantiate_text_response(int include_optional);



text_response_t* instantiate_text_response(int include_optional) {
  text_response_t* text_response = NULL;
  if (include_optional) {
    text_response = text_response_create(
      ""You were successfull."",
      "0"
    );
  } else {
    text_response = text_response_create(
      ""You were successfull."",
      "0"
    );
  }

  return text_response;
}


#ifdef text_response_MAIN

void test_text_response(int include_optional) {
    text_response_t* text_response_1 = instantiate_text_response(include_optional);

	cJSON* jsontext_response_1 = text_response_convertToJSON(text_response_1);
	printf("text_response :\n%s\n", cJSON_Print(jsontext_response_1));
	text_response_t* text_response_2 = text_response_parseFromJSON(jsontext_response_1);
	cJSON* jsontext_response_2 = text_response_convertToJSON(text_response_2);
	printf("repeating text_response:\n%s\n", cJSON_Print(jsontext_response_2));
}

int main() {
  test_text_response(1);
  test_text_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // text_response_MAIN
#endif // text_response_TEST
