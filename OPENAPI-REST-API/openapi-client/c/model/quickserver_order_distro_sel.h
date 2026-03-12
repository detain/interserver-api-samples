/*
 * quickserver_order_distro_sel.h
 *
 * Distribution selection.
 */

#ifndef _quickserver_order_distro_sel_H_
#define _quickserver_order_distro_sel_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_distro_sel_t quickserver_order_distro_sel_t;

#include "quickserver_order_distro_sel_ubuntu.h"



typedef struct quickserver_order_distro_sel_t {
    struct quickserver_order_distro_sel_ubuntu_t *ubuntu; //model

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_distro_sel_t;

__attribute__((deprecated)) quickserver_order_distro_sel_t *quickserver_order_distro_sel_create(
    quickserver_order_distro_sel_ubuntu_t *ubuntu
);

void quickserver_order_distro_sel_free(quickserver_order_distro_sel_t *quickserver_order_distro_sel);

quickserver_order_distro_sel_t *quickserver_order_distro_sel_parseFromJSON(cJSON *quickserver_order_distro_selJSON);

cJSON *quickserver_order_distro_sel_convertToJSON(quickserver_order_distro_sel_t *quickserver_order_distro_sel);

#endif /* _quickserver_order_distro_sel_H_ */

