/*
 * module_settings.h
 *
 * The settings for a module.
 */

#ifndef _module_settings_H_
#define _module_settings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_settings_t module_settings_t;




typedef struct module_settings_t {
    int service_id_offset; //numeric
    int use_repeat_invoice; //boolean
    int use_packages; //boolean
    int billing_days_offset; //numeric
    char *imgname; // string
    int repeat_billing_method; //numeric
    int delete_pending_days; //numeric
    int suspend_days; //numeric
    int suspend_warning_days; //numeric
    char *title; // string
    char *menuname; // string
    char *email_from; // string
    char *tblname; // string
    char *table; // string
    char *title_field; // string
    char *prefix; // string
    char *title_field2; // string
    char *title_field3; // string

    int _library_owned; // Is the library responsible for freeing this object?
} module_settings_t;

__attribute__((deprecated)) module_settings_t *module_settings_create(
    int service_id_offset,
    int use_repeat_invoice,
    int use_packages,
    int billing_days_offset,
    char *imgname,
    int repeat_billing_method,
    int delete_pending_days,
    int suspend_days,
    int suspend_warning_days,
    char *title,
    char *menuname,
    char *email_from,
    char *tblname,
    char *table,
    char *title_field,
    char *prefix,
    char *title_field2,
    char *title_field3
);

void module_settings_free(module_settings_t *module_settings);

module_settings_t *module_settings_parseFromJSON(cJSON *module_settingsJSON);

cJSON *module_settings_convertToJSON(module_settings_t *module_settings);

#endif /* _module_settings_H_ */

