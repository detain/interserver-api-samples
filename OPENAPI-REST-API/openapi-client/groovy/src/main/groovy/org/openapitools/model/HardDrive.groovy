package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;

@Canonical
class HardDrive {
    
    Integer id
    
    String shortDesc
    
    String size
    
    String driveType
    
    BigDecimal monthlyPrice
    
    String monthlyPriceDisplay
}
