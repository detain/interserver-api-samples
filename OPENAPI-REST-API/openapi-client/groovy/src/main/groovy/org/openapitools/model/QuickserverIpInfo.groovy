package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.QuickserverIpTableRow;

@Canonical
class QuickserverIpInfo {
    /* Table title */
    String title
    
    List<QuickserverIpTableRow> rows = new ArrayList<>()
}
