/*
 * control_panel.h
 *
 * A hosting control panel option (e.g., cPanel, Plesk) available for server provisioning.
 */

#ifndef _control_panel_H_
#define _control_panel_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct control_panel_t control_panel_t;




typedef struct control_panel_t {
    int id; //numeric
    char *short_desc; // string
    double monthly_price; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} control_panel_t;

__attribute__((deprecated)) control_panel_t *control_panel_create(
    int id,
    char *short_desc,
    double monthly_price
);

void control_panel_free(control_panel_t *control_panel);

control_panel_t *control_panel_parseFromJSON(cJSON *control_panelJSON);

cJSON *control_panel_convertToJSON(control_panel_t *control_panel);

#endif /* _control_panel_H_ */

