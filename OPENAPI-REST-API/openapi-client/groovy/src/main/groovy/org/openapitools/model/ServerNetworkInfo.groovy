package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import org.openapitools.model.ServerNetworkInfoAssets;
import org.openapitools.model.ServerNetworkInfoSwitchports;

@Canonical
class ServerNetworkInfo {
    /* List of VLANs. */
    List<String> vlans = new ArrayList<>()
    /* List of IPv6 VLANs. */
    List<String> vlans6 = new ArrayList<>()
    
    ServerNetworkInfoAssets assets
    
    ServerNetworkInfoSwitchports switchports
}
