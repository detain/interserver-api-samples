package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DomainOrderResponse;
import org.openapitools.model.DomainProvProcessPending;

@Canonical
class DomainBillingExtra {
    
    DomainOrderResponse order
    
    String orderId
    
    String domainId
    
    DomainProvProcessPending provProcessPending
    
    String email
    
    String firstname
    
    String lastname
    
    String company
    
    String address
    
    String address2
    
    String address3
    
    String city
    
    String state
    
    String zip
    
    String country
    
    String phone
    
    String fax
}
