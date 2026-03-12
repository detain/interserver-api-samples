package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import org.openapitools.model.BuyItNowRowCpuInner;

@Canonical
class BuyItNowRow {
    /* Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`. */
    String serverId
    
    List<BuyItNowRowCpuInner> cpu = new ArrayList<>()
    
    String memory
    
    Map<String, String> disk = new HashMap<>()
    
    String bandwidth
    
    String ips
    
    String location
    
    Integer price
}
