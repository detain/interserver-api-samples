#ifndef form_values_TEST
#define form_values_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define form_values_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/form_values.h"
form_values_t* instantiate_form_values(int include_optional);



form_values_t* instantiate_form_values(int include_optional) {
  form_values_t* form_values = NULL;
  if (include_optional) {
    form_values = form_values_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56
    );
  } else {
    form_values = form_values_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56
    );
  }

  return form_values;
}


#ifdef form_values_MAIN

void test_form_values(int include_optional) {
    form_values_t* form_values_1 = instantiate_form_values(include_optional);

	cJSON* jsonform_values_1 = form_values_convertToJSON(form_values_1);
	printf("form_values :\n%s\n", cJSON_Print(jsonform_values_1));
	form_values_t* form_values_2 = form_values_parseFromJSON(jsonform_values_1);
	cJSON* jsonform_values_2 = form_values_convertToJSON(form_values_2);
	printf("repeating form_values:\n%s\n", cJSON_Print(jsonform_values_2));
}

int main() {
  test_form_values(1);
  test_form_values(0);

  printf("Hello world \n");
  return 0;
}

#endif // form_values_MAIN
#endif // form_values_TEST
