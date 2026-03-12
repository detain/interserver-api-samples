package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DomainOrderServices;

@Canonical
class DomainOrder {
    /* Cost of Whois Privacy */
    String whoisPrivacyCost
    
    DomainOrderServices services
    /* Map of TLDs to domain service IDs. */
    Object tldServices
}
