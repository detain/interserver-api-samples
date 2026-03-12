#ifndef control_panel_TEST
#define control_panel_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define control_panel_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/control_panel.h"
control_panel_t* instantiate_control_panel(int include_optional);



control_panel_t* instantiate_control_panel(int include_optional) {
  control_panel_t* control_panel = NULL;
  if (include_optional) {
    control_panel = control_panel_create(
      56,
      "0",
      1.337
    );
  } else {
    control_panel = control_panel_create(
      56,
      "0",
      1.337
    );
  }

  return control_panel;
}


#ifdef control_panel_MAIN

void test_control_panel(int include_optional) {
    control_panel_t* control_panel_1 = instantiate_control_panel(include_optional);

	cJSON* jsoncontrol_panel_1 = control_panel_convertToJSON(control_panel_1);
	printf("control_panel :\n%s\n", cJSON_Print(jsoncontrol_panel_1));
	control_panel_t* control_panel_2 = control_panel_parseFromJSON(jsoncontrol_panel_1);
	cJSON* jsoncontrol_panel_2 = control_panel_convertToJSON(control_panel_2);
	printf("repeating control_panel:\n%s\n", cJSON_Print(jsoncontrol_panel_2));
}

int main() {
  test_control_panel(1);
  test_control_panel(0);

  printf("Hello world \n");
  return 0;
}

#endif // control_panel_MAIN
#endif // control_panel_TEST
