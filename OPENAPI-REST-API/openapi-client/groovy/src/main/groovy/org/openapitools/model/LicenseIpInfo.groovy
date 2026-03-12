package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.LicenseIpInfoRow;

@Canonical
class LicenseIpInfo {
    /* Table title */
    String title
    
    List<LicenseIpInfoRow> rows = new ArrayList<>()
}
