/*
 * view_mail_log_start_date_parameter.h
 *
 * 
 */

#ifndef _view_mail_log_start_date_parameter_H_
#define _view_mail_log_start_date_parameter_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct view_mail_log_start_date_parameter_t view_mail_log_start_date_parameter_t;




typedef struct view_mail_log_start_date_parameter_t {

    int _library_owned; // Is the library responsible for freeing this object?
} view_mail_log_start_date_parameter_t;

__attribute__((deprecated)) view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_create(
);

void view_mail_log_start_date_parameter_free(view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter);

view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter_parseFromJSON(cJSON *view_mail_log_start_date_parameterJSON);

cJSON *view_mail_log_start_date_parameter_convertToJSON(view_mail_log_start_date_parameter_t *view_mail_log_start_date_parameter);

#endif /* _view_mail_log_start_date_parameter_H_ */

