package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.QuickserverAddons;
import org.openapitools.model.QuickserverIpInfo;

@Canonical
class QuickserverExtraInfoTables {
    
    QuickserverIpInfo ipInfo
    
    QuickserverAddons addons
}
