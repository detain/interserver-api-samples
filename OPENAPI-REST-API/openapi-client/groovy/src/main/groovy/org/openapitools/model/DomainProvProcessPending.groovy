package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DomainProvProcessPendingAttributes;

@Canonical
class DomainProvProcessPending {
    
    String oPSVersion
    
    String responseText
    
    String protocol
    
    String responseCode
    
    String action
    
    String _object
    
    String isSuccess
    
    DomainProvProcessPendingAttributes attributes
}
