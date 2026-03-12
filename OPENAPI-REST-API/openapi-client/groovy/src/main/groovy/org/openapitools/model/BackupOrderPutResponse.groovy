package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;

@Canonical
class BackupOrderPutResponse {
    
    Boolean _continue
    
    List<String> errors = new ArrayList<>()
    
    Integer serviceType
    
    String serviceCost
    
    String originalCost
    
    String repeatServiceCost
    
    String hostname
    
    String password
    
    String coupon
    
    Integer couponCode
}
