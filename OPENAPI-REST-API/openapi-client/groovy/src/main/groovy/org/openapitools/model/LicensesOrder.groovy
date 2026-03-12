package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.LicensesOrderPackageCosts;
import org.openapitools.model.LicensesOrderServiceCategories;
import org.openapitools.model.LicensesOrderServiceTypes;

@Canonical
class LicensesOrder {
    
    LicensesOrderServiceCategories serviceCategories
    
    LicensesOrderPackageCosts packageCosts
    
    LicensesOrderServiceTypes serviceTypes
}
