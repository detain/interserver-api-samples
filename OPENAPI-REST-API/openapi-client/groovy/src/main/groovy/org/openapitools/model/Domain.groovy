package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import org.openapitools.model.BackupExtraInfoTables;
import org.openapitools.model.DomainAllInfo;
import org.openapitools.model.DomainBillingDetails;
import org.openapitools.model.DomainBillingExtra;
import org.openapitools.model.DomainClientLink;
import org.openapitools.model.DomainContactDetails;
import org.openapitools.model.DomainServiceInfo;
import org.openapitools.model.DomainServiceType;

@Canonical
class Domain {
    
    DomainServiceInfo serviceInfo
    
    Map<String, DomainServiceType> serviceTypes = new HashMap<>()
    
    List<DomainClientLink> clientLinks = new ArrayList<>()
    
    DomainBillingDetails billingDetails
    
    String custCurrency
    
    String custCurrencySymbol
    
    DomainBillingExtra serviceExtra
    
    BackupExtraInfoTables extraInfoTables
    
    DomainServiceType serviceType
    
    DomainContactDetails contactDetails
    
    String pwarning
    
    String transferInfo
    
    Boolean errors
    
    List<String> domainLogs = new ArrayList<>()
    
    DomainAllInfo allInfo
    
    String registrarStatus
    
    String locked
    
    String whoisPrivacy
    
    String autoRenew
}
