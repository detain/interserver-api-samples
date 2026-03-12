package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.HomeServicesBackups;
import org.openapitools.model.HomeServicesDomains;
import org.openapitools.model.HomeServicesLicenses;
import org.openapitools.model.HomeServicesServers;
import org.openapitools.model.HomeServicesVps;
import org.openapitools.model.HomeServicesWebhosting;

@Canonical
class HomeServices {
    
    HomeServicesDomains domains
    
    HomeServicesWebhosting webhosting
    
    HomeServicesVps vps
    
    HomeServicesLicenses licenses
    
    HomeServicesServers servers
    
    HomeServicesBackups backups
}
