package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DomainAllInfoAttributes;

@Canonical
class DomainAllInfo {
    
    String oPSVersion
    
    DomainAllInfoAttributes attributes
    
    String _object
    
    String protocol
    
    String responseText
    
    String responseCode
    
    String action
    
    String isSuccess
}
