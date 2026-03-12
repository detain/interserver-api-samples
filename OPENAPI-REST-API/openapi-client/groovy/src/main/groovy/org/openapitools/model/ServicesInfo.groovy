package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.Modules;
import org.openapitools.model.ServiceCategories;
import org.openapitools.model.ServiceTypes;
import org.openapitools.model.Services;

@Canonical
class ServicesInfo {
    
    Modules modules = new HashMap<>()
    
    Services services = new HashMap<>()
    
    ServiceTypes serviceTypes = new HashMap<>()
    
    ServiceCategories serviceCategories = new HashMap<>()
}
