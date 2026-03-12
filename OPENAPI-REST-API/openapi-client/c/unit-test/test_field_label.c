#ifndef field_label_TEST
#define field_label_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_label_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_label.h"
field_label_t* instantiate_field_label(int include_optional);



field_label_t* instantiate_field_label(int include_optional) {
  field_label_t* field_label = NULL;
  if (include_optional) {
    field_label = field_label_create(
      "0",
      56
    );
  } else {
    field_label = field_label_create(
      "0",
      56
    );
  }

  return field_label;
}


#ifdef field_label_MAIN

void test_field_label(int include_optional) {
    field_label_t* field_label_1 = instantiate_field_label(include_optional);

	cJSON* jsonfield_label_1 = field_label_convertToJSON(field_label_1);
	printf("field_label :\n%s\n", cJSON_Print(jsonfield_label_1));
	field_label_t* field_label_2 = field_label_parseFromJSON(jsonfield_label_1);
	cJSON* jsonfield_label_2 = field_label_convertToJSON(field_label_2);
	printf("repeating field_label:\n%s\n", cJSON_Print(jsonfield_label_2));
}

int main() {
  test_field_label(1);
  test_field_label(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_label_MAIN
#endif // field_label_TEST
