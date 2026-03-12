package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DomainOrderResponseAttributes;

@Canonical
class DomainOrderResponse {
    
    String oPSVersion
    
    String protocol
    
    String isSuccess
    
    String action
    
    DomainOrderResponseAttributes attributes
    
    String responseText
    
    String _object
    
    String responseCode
}
