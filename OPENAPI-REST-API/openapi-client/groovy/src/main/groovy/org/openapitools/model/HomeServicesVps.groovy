package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.HomeServicesVpsLinks;

@Canonical
class HomeServicesVps {
    
    HomeServicesVpsLinks links
    /* Number of VPS services. */
    Integer count
}
