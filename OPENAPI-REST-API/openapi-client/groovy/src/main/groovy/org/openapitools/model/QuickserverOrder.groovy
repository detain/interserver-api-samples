package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.QuickserverOrderDistroSel;
import org.openapitools.model.QuickserverOrderServerDetails;
import org.openapitools.model.QuickserverOrderTemplates;
import org.openapitools.model.QuickserverOrderVersion;

@Canonical
class QuickserverOrder {
    /* Quickserver ID. */
    String qsId
    
    QuickserverOrderServerDetails serverDetails
    
    QuickserverOrderTemplates templates
    
    QuickserverOrderVersion version
    
    QuickserverOrderDistroSel distroSel
}
