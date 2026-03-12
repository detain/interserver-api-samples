package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;

@Canonical
class MailDelistResponse {
    /* Mail service ID. */
    Integer id
    /* Local blocklist entries. */
    List<Object> local = new ArrayList<>()
    /* MailBaby trap block entries. */
    List<Object> mbtrap = new ArrayList<>()
    /* Subject-based block entries. */
    List<Object> subject = new ArrayList<>()
    /* Manually blocked entries. */
    List<Object> manual = new ArrayList<>()
}
