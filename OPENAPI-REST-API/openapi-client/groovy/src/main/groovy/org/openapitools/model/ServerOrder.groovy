package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.ServerOrderBandwidthLi;
import org.openapitools.model.ServerOrderConfigIds;
import org.openapitools.model.ServerOrderCpLi;
import org.openapitools.model.ServerOrderCpuLi;
import org.openapitools.model.ServerOrderFieldLabels;
import org.openapitools.model.ServerOrderFormValues;
import org.openapitools.model.ServerOrderIpsLi;
import org.openapitools.model.ServerOrderMemoryLi;
import org.openapitools.model.ServerOrderOsLi;
import org.openapitools.model.ServerOrderRAID;

@Canonical
class ServerOrder {
    
    ServerOrderFormValues formValues
    
    ServerOrderConfigIds configIds
    /* Number of CPUs for the server order. */
    Integer cpu
    
    ServerOrderFieldLabels fieldLabel
    
    ServerOrderCpuLi cpuLi
    
    ServerOrderMemoryLi memoryLi
    
    ServerOrderBandwidthLi bandwidthLi
    
    ServerOrderIpsLi ipsLi
    
    ServerOrderOsLi osLi
    
    ServerOrderCpLi cpLi
    /* RAID options for the server order. */
    List<ServerOrderRAID> raidLi = new ArrayList<>()
}
