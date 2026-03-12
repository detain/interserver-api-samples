#ifndef download_qs_backup_200_response_TEST
#define download_qs_backup_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define download_qs_backup_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/download_qs_backup_200_response.h"
download_qs_backup_200_response_t* instantiate_download_qs_backup_200_response(int include_optional);



download_qs_backup_200_response_t* instantiate_download_qs_backup_200_response(int include_optional) {
  download_qs_backup_200_response_t* download_qs_backup_200_response = NULL;
  if (include_optional) {
    download_qs_backup_200_response = download_qs_backup_200_response_create(
      "0",
      "0"
    );
  } else {
    download_qs_backup_200_response = download_qs_backup_200_response_create(
      "0",
      "0"
    );
  }

  return download_qs_backup_200_response;
}


#ifdef download_qs_backup_200_response_MAIN

void test_download_qs_backup_200_response(int include_optional) {
    download_qs_backup_200_response_t* download_qs_backup_200_response_1 = instantiate_download_qs_backup_200_response(include_optional);

	cJSON* jsondownload_qs_backup_200_response_1 = download_qs_backup_200_response_convertToJSON(download_qs_backup_200_response_1);
	printf("download_qs_backup_200_response :\n%s\n", cJSON_Print(jsondownload_qs_backup_200_response_1));
	download_qs_backup_200_response_t* download_qs_backup_200_response_2 = download_qs_backup_200_response_parseFromJSON(jsondownload_qs_backup_200_response_1);
	cJSON* jsondownload_qs_backup_200_response_2 = download_qs_backup_200_response_convertToJSON(download_qs_backup_200_response_2);
	printf("repeating download_qs_backup_200_response:\n%s\n", cJSON_Print(jsondownload_qs_backup_200_response_2));
}

int main() {
  test_download_qs_backup_200_response(1);
  test_download_qs_backup_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // download_qs_backup_200_response_MAIN
#endif // download_qs_backup_200_response_TEST
