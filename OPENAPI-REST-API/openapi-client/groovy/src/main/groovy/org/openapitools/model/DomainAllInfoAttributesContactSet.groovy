package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.DomainAdminContact;
import org.openapitools.model.DomainOwnerContact;
import org.openapitools.model.DomainTechContact;

@Canonical
class DomainAllInfoAttributesContactSet {
    
    DomainOwnerContact owner
    
    DomainAdminContact admin
    
    DomainTechContact tech
}
