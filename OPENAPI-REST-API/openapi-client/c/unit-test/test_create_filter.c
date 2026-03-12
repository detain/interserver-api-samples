#ifndef create_filter_TEST
#define create_filter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define create_filter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/create_filter.h"
create_filter_t* instantiate_create_filter(int include_optional);



create_filter_t* instantiate_create_filter(int include_optional) {
  create_filter_t* create_filter = NULL;
  if (include_optional) {
    create_filter = create_filter_create(
      "cs2_udp",
      8080
    );
  } else {
    create_filter = create_filter_create(
      "cs2_udp",
      8080
    );
  }

  return create_filter;
}


#ifdef create_filter_MAIN

void test_create_filter(int include_optional) {
    create_filter_t* create_filter_1 = instantiate_create_filter(include_optional);

	cJSON* jsoncreate_filter_1 = create_filter_convertToJSON(create_filter_1);
	printf("create_filter :\n%s\n", cJSON_Print(jsoncreate_filter_1));
	create_filter_t* create_filter_2 = create_filter_parseFromJSON(jsoncreate_filter_1);
	cJSON* jsoncreate_filter_2 = create_filter_convertToJSON(create_filter_2);
	printf("repeating create_filter:\n%s\n", cJSON_Print(jsoncreate_filter_2));
}

int main() {
  test_create_filter(1);
  test_create_filter(0);

  printf("Hello world \n");
  return 0;
}

#endif // create_filter_MAIN
#endif // create_filter_TEST
