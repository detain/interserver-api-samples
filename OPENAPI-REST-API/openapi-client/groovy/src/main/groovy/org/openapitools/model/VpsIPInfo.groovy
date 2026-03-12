package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.VpsIPInfoRow;

@Canonical
class VpsIPInfo {
    /* Title of the table */
    String title
    
    List<VpsIPInfoRow> rows = new ArrayList<>()
}
