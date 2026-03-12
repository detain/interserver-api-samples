package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import org.openapitools.model.AssetServerCPUInner;

@Canonical
class AssetServer {
    
    Integer id
    
    String region
    
    String price
    
    List<AssetServerCPUInner> CPU = new ArrayList<>()
    
    List<AssetServerCPUInner> memory = new ArrayList<>()
    
    List<AssetServerCPUInner> bandwidth = new ArrayList<>()
    
    List<AssetServerCPUInner> ips = new ArrayList<>()
    
    Map<String, String> HD = new HashMap<>()
}
