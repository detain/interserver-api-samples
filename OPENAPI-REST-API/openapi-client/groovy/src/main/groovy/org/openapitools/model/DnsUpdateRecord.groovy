package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DnsRecordType;

@Canonical
class DnsUpdateRecord {
    
    String name
    
    DnsRecordType type
    
    String content
    
    String ttl
    
    String prio
    
    String disabled
    
    String ordername
    
    String auth
}
