package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.AccountInfoMaxMindResponse;

@Canonical
class AccountInfoDataCc {
    
    String cc
    
    String ccExp
    
    String name
    
    String address
    
    String city
    
    String state
    
    String zip
    
    String country
    
    String maxmindRiskscore
    
    AccountInfoMaxMindResponse maxmind
    
    Boolean verified
}
