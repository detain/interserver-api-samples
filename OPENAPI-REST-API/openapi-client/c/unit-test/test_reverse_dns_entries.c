#ifndef reverse_dns_entries_TEST
#define reverse_dns_entries_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define reverse_dns_entries_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/reverse_dns_entries.h"
reverse_dns_entries_t* instantiate_reverse_dns_entries(int include_optional);



reverse_dns_entries_t* instantiate_reverse_dns_entries(int include_optional) {
  reverse_dns_entries_t* reverse_dns_entries = NULL;
  if (include_optional) {
    reverse_dns_entries = reverse_dns_entries_create(
      list_createList()
    );
  } else {
    reverse_dns_entries = reverse_dns_entries_create(
      list_createList()
    );
  }

  return reverse_dns_entries;
}


#ifdef reverse_dns_entries_MAIN

void test_reverse_dns_entries(int include_optional) {
    reverse_dns_entries_t* reverse_dns_entries_1 = instantiate_reverse_dns_entries(include_optional);

	cJSON* jsonreverse_dns_entries_1 = reverse_dns_entries_convertToJSON(reverse_dns_entries_1);
	printf("reverse_dns_entries :\n%s\n", cJSON_Print(jsonreverse_dns_entries_1));
	reverse_dns_entries_t* reverse_dns_entries_2 = reverse_dns_entries_parseFromJSON(jsonreverse_dns_entries_1);
	cJSON* jsonreverse_dns_entries_2 = reverse_dns_entries_convertToJSON(reverse_dns_entries_2);
	printf("repeating reverse_dns_entries:\n%s\n", cJSON_Print(jsonreverse_dns_entries_2));
}

int main() {
  test_reverse_dns_entries(1);
  test_reverse_dns_entries(0);

  printf("Hello world \n");
  return 0;
}

#endif // reverse_dns_entries_MAIN
#endif // reverse_dns_entries_TEST
