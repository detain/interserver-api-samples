package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.DomainAllInfoAttributesContactSet;
import org.openapitools.model.DomainNameServer;

@Canonical
class DomainAllInfoAttributes {
    
    DomainAllInfoAttributesContactSet contactSet
    
    String registryCreatedate
    
    String registryExpiredate
    
    String tldData
    
    String letExpire
    
    String autoRenew
    
    String sponsoringRsp
    
    String gdprConsentStatus
    
    List<DomainNameServer> nameserverList = new ArrayList<>()
    
    String registryUpdatedate
    
    String affiliateId
    
    String expiredate
}
