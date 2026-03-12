package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;

@Canonical
class IpBlock {
    
    Integer id
    
    String shortDesc
    
    String qty
    
    BigDecimal monthlyPrice
}
