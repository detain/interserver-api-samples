package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.model.HardDrive;
import org.openapitools.model.MemoryOption;

@Canonical
class CpuWithDefaults {
    
    Integer id
    
    String shortDesc
    
    String longDesc
    
    String type
    
    String speed
    
    String numCores
    
    String numCpus
    
    String benchmark
    
    BigDecimal monthlyPrice
    
    String monthlyPriceDisplay
    
    String maxRam
    
    String minRam
    
    String maxLff
    
    String maxSff
    
    String maxNve
    
    String visible
    
    String active
    
    MemoryOption memoryDet
    
    HardDrive hdDet
    
    String monthlyFee
}
