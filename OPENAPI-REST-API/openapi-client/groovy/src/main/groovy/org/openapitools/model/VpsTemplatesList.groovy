package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.VpsTemplateRow;

@Canonical
class VpsTemplatesList {
    /* A listing of the templates. */
    List<VpsTemplateRow> templates = new ArrayList<>()
}
