package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.BackupsOrderPackageCosts;
import org.openapitools.model.BackupsOrderServiceTypes;

@Canonical
class BackupsOrder {
    
    BackupsOrderPackageCosts packageCosts
    
    BackupsOrderServiceTypes serviceTypes
}
