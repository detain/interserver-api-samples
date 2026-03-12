/*
 * quickserver_order_distro_sel_ubuntu.h
 *
 * 
 */

#ifndef _quickserver_order_distro_sel_ubuntu_H_
#define _quickserver_order_distro_sel_ubuntu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickserver_order_distro_sel_ubuntu_t quickserver_order_distro_sel_ubuntu_t;




typedef struct quickserver_order_distro_sel_ubuntu_t {
    char *ubuntu; // string

    int _library_owned; // Is the library responsible for freeing this object?
} quickserver_order_distro_sel_ubuntu_t;

__attribute__((deprecated)) quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_create(
    char *ubuntu
);

void quickserver_order_distro_sel_ubuntu_free(quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu);

quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu_parseFromJSON(cJSON *quickserver_order_distro_sel_ubuntuJSON);

cJSON *quickserver_order_distro_sel_ubuntu_convertToJSON(quickserver_order_distro_sel_ubuntu_t *quickserver_order_distro_sel_ubuntu);

#endif /* _quickserver_order_distro_sel_ubuntu_H_ */

