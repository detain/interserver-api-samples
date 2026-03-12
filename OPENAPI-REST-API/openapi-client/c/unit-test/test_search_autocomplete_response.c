#ifndef search_autocomplete_response_TEST
#define search_autocomplete_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define search_autocomplete_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/search_autocomplete_response.h"
search_autocomplete_response_t* instantiate_search_autocomplete_response(int include_optional);



search_autocomplete_response_t* instantiate_search_autocomplete_response(int include_optional) {
  search_autocomplete_response_t* search_autocomplete_response = NULL;
  if (include_optional) {
    search_autocomplete_response = search_autocomplete_response_create(
    );
  } else {
    search_autocomplete_response = search_autocomplete_response_create(
    );
  }

  return search_autocomplete_response;
}


#ifdef search_autocomplete_response_MAIN

void test_search_autocomplete_response(int include_optional) {
    search_autocomplete_response_t* search_autocomplete_response_1 = instantiate_search_autocomplete_response(include_optional);

	cJSON* jsonsearch_autocomplete_response_1 = search_autocomplete_response_convertToJSON(search_autocomplete_response_1);
	printf("search_autocomplete_response :\n%s\n", cJSON_Print(jsonsearch_autocomplete_response_1));
	search_autocomplete_response_t* search_autocomplete_response_2 = search_autocomplete_response_parseFromJSON(jsonsearch_autocomplete_response_1);
	cJSON* jsonsearch_autocomplete_response_2 = search_autocomplete_response_convertToJSON(search_autocomplete_response_2);
	printf("repeating search_autocomplete_response:\n%s\n", cJSON_Print(jsonsearch_autocomplete_response_2));
}

int main() {
  test_search_autocomplete_response(1);
  test_search_autocomplete_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // search_autocomplete_response_MAIN
#endif // search_autocomplete_response_TEST
