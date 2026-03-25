#ifndef view_mail_log_start_date_parameter_TEST
#define view_mail_log_start_date_parameter_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define view_mail_log_start_date_parameter_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/view_mail_log_start_date_parameter.h"
view_mail_log_start_date_parameter_t* instantiate_view_mail_log_start_date_parameter(int include_optional);



view_mail_log_start_date_parameter_t* instantiate_view_mail_log_start_date_parameter(int include_optional) {
  view_mail_log_start_date_parameter_t* view_mail_log_start_date_parameter = NULL;
  if (include_optional) {
    view_mail_log_start_date_parameter = view_mail_log_start_date_parameter_create(
    );
  } else {
    view_mail_log_start_date_parameter = view_mail_log_start_date_parameter_create(
    );
  }

  return view_mail_log_start_date_parameter;
}


#ifdef view_mail_log_start_date_parameter_MAIN

void test_view_mail_log_start_date_parameter(int include_optional) {
    view_mail_log_start_date_parameter_t* view_mail_log_start_date_parameter_1 = instantiate_view_mail_log_start_date_parameter(include_optional);

	cJSON* jsonview_mail_log_start_date_parameter_1 = view_mail_log_start_date_parameter_convertToJSON(view_mail_log_start_date_parameter_1);
	printf("view_mail_log_start_date_parameter :\n%s\n", cJSON_Print(jsonview_mail_log_start_date_parameter_1));
	view_mail_log_start_date_parameter_t* view_mail_log_start_date_parameter_2 = view_mail_log_start_date_parameter_parseFromJSON(jsonview_mail_log_start_date_parameter_1);
	cJSON* jsonview_mail_log_start_date_parameter_2 = view_mail_log_start_date_parameter_convertToJSON(view_mail_log_start_date_parameter_2);
	printf("repeating view_mail_log_start_date_parameter:\n%s\n", cJSON_Print(jsonview_mail_log_start_date_parameter_2));
}

int main() {
  test_view_mail_log_start_date_parameter(1);
  test_view_mail_log_start_date_parameter(0);

  printf("Hello world \n");
  return 0;
}

#endif // view_mail_log_start_date_parameter_MAIN
#endif // view_mail_log_start_date_parameter_TEST
