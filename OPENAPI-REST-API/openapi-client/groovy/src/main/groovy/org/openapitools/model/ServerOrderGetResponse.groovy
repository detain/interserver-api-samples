package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import org.openapitools.model.AssetServer;
import org.openapitools.model.ConfigIds;
import org.openapitools.model.ConfigLists;
import org.openapitools.model.Cpu;
import org.openapitools.model.CpuWithDefaults;
import org.openapitools.model.FieldLabel;
import org.openapitools.model.FormValues;
import org.openapitools.model.Region;

@Canonical
class ServerOrderGetResponse {
    
    FormValues formValues
    
    ConfigIds configIds
    
    Integer cpu
    
    Map<String, Cpu> cpuLi = new HashMap<>()
    
    ConfigLists configLi
    
    Integer frequency
    
    String currency
    
    String country
    
    String step
    
    Map<String, FieldLabel> fieldLabel = new HashMap<>()
    
    Map<String, Map<String, CpuWithDefaults>> cpuCores = new HashMap<>()
    
    String currencySymbol
    
    Integer custid
    
    String ima
    
    List<Region> regions = new ArrayList<>()
    
    List<AssetServer> assetServers = new ArrayList<>()
    
    List<Object> buyItServers = new ArrayList<>()
    
    String displayShowmore
    
    BigDecimal custDiscount
}
