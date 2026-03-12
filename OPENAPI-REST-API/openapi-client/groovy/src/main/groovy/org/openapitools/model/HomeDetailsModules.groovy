package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.HomeDetailsModulesBackups;
import org.openapitools.model.HomeDetailsModulesDomains;
import org.openapitools.model.HomeDetailsModulesLicenses;
import org.openapitools.model.HomeDetailsModulesQuickservers;
import org.openapitools.model.HomeDetailsModulesServers;
import org.openapitools.model.HomeDetailsModulesVps;
import org.openapitools.model.HomeDetailsModulesWebhosting;

@Canonical
class HomeDetailsModules {
    
    HomeDetailsModulesDomains domains
    
    HomeDetailsModulesWebhosting webhosting
    
    HomeDetailsModulesVps vps
    
    HomeDetailsModulesLicenses licenses
    
    HomeDetailsModulesBackups backups
    
    HomeDetailsModulesServers servers
    
    HomeDetailsModulesQuickservers quickservers
}
