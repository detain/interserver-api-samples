#ifndef download_qs_backup_request_TEST
#define download_qs_backup_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define download_qs_backup_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/download_qs_backup_request.h"
download_qs_backup_request_t* instantiate_download_qs_backup_request(int include_optional);



download_qs_backup_request_t* instantiate_download_qs_backup_request(int include_optional) {
  download_qs_backup_request_t* download_qs_backup_request = NULL;
  if (include_optional) {
    download_qs_backup_request = download_qs_backup_request_create(
      "0"
    );
  } else {
    download_qs_backup_request = download_qs_backup_request_create(
      "0"
    );
  }

  return download_qs_backup_request;
}


#ifdef download_qs_backup_request_MAIN

void test_download_qs_backup_request(int include_optional) {
    download_qs_backup_request_t* download_qs_backup_request_1 = instantiate_download_qs_backup_request(include_optional);

	cJSON* jsondownload_qs_backup_request_1 = download_qs_backup_request_convertToJSON(download_qs_backup_request_1);
	printf("download_qs_backup_request :\n%s\n", cJSON_Print(jsondownload_qs_backup_request_1));
	download_qs_backup_request_t* download_qs_backup_request_2 = download_qs_backup_request_parseFromJSON(jsondownload_qs_backup_request_1);
	cJSON* jsondownload_qs_backup_request_2 = download_qs_backup_request_convertToJSON(download_qs_backup_request_2);
	printf("repeating download_qs_backup_request:\n%s\n", cJSON_Print(jsondownload_qs_backup_request_2));
}

int main() {
  test_download_qs_backup_request(1);
  test_download_qs_backup_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // download_qs_backup_request_MAIN
#endif // download_qs_backup_request_TEST
