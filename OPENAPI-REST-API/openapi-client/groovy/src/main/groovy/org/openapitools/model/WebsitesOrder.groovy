package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.WebsitesOrderJsonServiceOffers;
import org.openapitools.model.WebsitesOrderJsonServices;
import org.openapitools.model.WebsitesOrderPackages;
import org.openapitools.model.WebsitesOrderPackges;
import org.openapitools.model.WebsitesOrderServiceOffers;
import org.openapitools.model.WebsitesOrderServiceTypes;

@Canonical
class WebsitesOrder {
    /* Step description */
    String step
    /* Website description */
    String website
    /* Period description */
    Integer period
    /* Service offer ID description */
    Integer serviceOfferId
    
    WebsitesOrderPackages packages
    /* Enable domain registering description */
    Boolean enableDomainRegistering
    
    WebsitesOrderJsonServices jsonServices
    
    WebsitesOrderJsonServiceOffers jsonServiceOffers
    
    WebsitesOrderServiceTypes serviceTypes
    
    WebsitesOrderServiceOffers serviceOffers
    
    WebsitesOrderPackges packges
}
