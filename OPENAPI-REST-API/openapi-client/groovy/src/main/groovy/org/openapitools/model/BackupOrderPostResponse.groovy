package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.BackupOrderPostResponseCjParams;

@Canonical
class BackupOrderPostResponse {
    
    Boolean _continue
    
    List<String> errors = new ArrayList<>()
    
    String totalCost
    
    String iid
    
    List<String> iids = new ArrayList<>()
    
    List<String> realIids = new ArrayList<>()
    
    Integer serviceId
    
    String invoiceDescription
    
    BackupOrderPostResponseCjParams cjParams
}
