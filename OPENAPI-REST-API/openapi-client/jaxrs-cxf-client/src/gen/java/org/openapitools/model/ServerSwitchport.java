package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerSwitchport  {
  
 /**
  * Unique identifier for the switchport.
  */
  @ApiModelProperty(example = "10414", required = true, value = "Unique identifier for the switchport.")

  private Integer switchportId;

 /**
  * Unique identifier for the switch associated with the switchport.
  */
  @ApiModelProperty(example = "118", required = true, value = "Unique identifier for the switch associated with the switchport.")

  private String switchId;

 /**
  * Name of the switch associated with the switchport.
  */
  @ApiModelProperty(example = "edge1", required = true, value = "Name of the switch associated with the switchport.")

  private String _switch;

 /**
  * Port name on the switch.
  */
  @ApiModelProperty(example = "Ethernet1/33", required = true, value = "Port name on the switch.")

  private String port;

 /**
  * Blade name associated with the port.
  */
  @ApiModelProperty(example = "Ethernet1", required = true, value = "Blade name associated with the port.")

  private String blade;

 /**
  * Port identifier.
  */
  @ApiModelProperty(example = "33", required = true, value = "Port identifier.")

  private String justport;

 /**
  * Identifier for the graph associated with the switchport.
  */
  @ApiModelProperty(example = "12622", required = true, value = "Identifier for the graph associated with the switchport.")

  private String graphId;

 /**
  * Unique identifier of the asset associated with the switchport.
  */
  @ApiModelProperty(example = "3497", required = true, value = "Unique identifier of the asset associated with the switchport.")

  private Integer assetId;

 /**
  * List of VLANs associated with the switchport.
  */
  @ApiModelProperty(example = "[]", value = "List of VLANs associated with the switchport.")

  private List<String> vlans = new ArrayList<>();

 /**
  * List of IPv6 VLANs associated with the switchport.
  */
  @ApiModelProperty(example = "[]", value = "List of IPv6 VLANs associated with the switchport.")

  private List<String> vlans6 = new ArrayList<>();
 /**
   * Unique identifier for the switchport.
   * @return switchportId
  **/
  @JsonProperty("switchport_id")
  public Integer getSwitchportId() {
    return switchportId;
  }

  public void setSwitchportId(Integer switchportId) {
    this.switchportId = switchportId;
  }

  public ServerSwitchport switchportId(Integer switchportId) {
    this.switchportId = switchportId;
    return this;
  }

 /**
   * Unique identifier for the switch associated with the switchport.
   * @return switchId
  **/
  @JsonProperty("switch_id")
  public String getSwitchId() {
    return switchId;
  }

  public void setSwitchId(String switchId) {
    this.switchId = switchId;
  }

  public ServerSwitchport switchId(String switchId) {
    this.switchId = switchId;
    return this;
  }

 /**
   * Name of the switch associated with the switchport.
   * @return _switch
  **/
  @JsonProperty("switch")
  public String getSwitch() {
    return _switch;
  }

  public void setSwitch(String _switch) {
    this._switch = _switch;
  }

  public ServerSwitchport _switch(String _switch) {
    this._switch = _switch;
    return this;
  }

 /**
   * Port name on the switch.
   * @return port
  **/
  @JsonProperty("port")
  public String getPort() {
    return port;
  }

  public void setPort(String port) {
    this.port = port;
  }

  public ServerSwitchport port(String port) {
    this.port = port;
    return this;
  }

 /**
   * Blade name associated with the port.
   * @return blade
  **/
  @JsonProperty("blade")
  public String getBlade() {
    return blade;
  }

  public void setBlade(String blade) {
    this.blade = blade;
  }

  public ServerSwitchport blade(String blade) {
    this.blade = blade;
    return this;
  }

 /**
   * Port identifier.
   * @return justport
  **/
  @JsonProperty("justport")
  public String getJustport() {
    return justport;
  }

  public void setJustport(String justport) {
    this.justport = justport;
  }

  public ServerSwitchport justport(String justport) {
    this.justport = justport;
    return this;
  }

 /**
   * Identifier for the graph associated with the switchport.
   * @return graphId
  **/
  @JsonProperty("graph_id")
  public String getGraphId() {
    return graphId;
  }

  public void setGraphId(String graphId) {
    this.graphId = graphId;
  }

  public ServerSwitchport graphId(String graphId) {
    this.graphId = graphId;
    return this;
  }

 /**
   * Unique identifier of the asset associated with the switchport.
   * @return assetId
  **/
  @JsonProperty("asset_id")
  public Integer getAssetId() {
    return assetId;
  }

  public void setAssetId(Integer assetId) {
    this.assetId = assetId;
  }

  public ServerSwitchport assetId(Integer assetId) {
    this.assetId = assetId;
    return this;
  }

 /**
   * List of VLANs associated with the switchport.
   * @return vlans
  **/
  @JsonProperty("vlans")
  public List<String> getVlans() {
    return vlans;
  }

  public void setVlans(List<String> vlans) {
    this.vlans = vlans;
  }

  public ServerSwitchport vlans(List<String> vlans) {
    this.vlans = vlans;
    return this;
  }

  public ServerSwitchport addVlansItem(String vlansItem) {
    this.vlans.add(vlansItem);
    return this;
  }

 /**
   * List of IPv6 VLANs associated with the switchport.
   * @return vlans6
  **/
  @JsonProperty("vlans6")
  public List<String> getVlans6() {
    return vlans6;
  }

  public void setVlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
  }

  public ServerSwitchport vlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
    return this;
  }

  public ServerSwitchport addVlans6Item(String vlans6Item) {
    this.vlans6.add(vlans6Item);
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerSwitchport serverSwitchport = (ServerSwitchport) o;
    return Objects.equals(this.switchportId, serverSwitchport.switchportId) &&
        Objects.equals(this.switchId, serverSwitchport.switchId) &&
        Objects.equals(this._switch, serverSwitchport._switch) &&
        Objects.equals(this.port, serverSwitchport.port) &&
        Objects.equals(this.blade, serverSwitchport.blade) &&
        Objects.equals(this.justport, serverSwitchport.justport) &&
        Objects.equals(this.graphId, serverSwitchport.graphId) &&
        Objects.equals(this.assetId, serverSwitchport.assetId) &&
        Objects.equals(this.vlans, serverSwitchport.vlans) &&
        Objects.equals(this.vlans6, serverSwitchport.vlans6);
  }

  @Override
  public int hashCode() {
    return Objects.hash(switchportId, switchId, _switch, port, blade, justport, graphId, assetId, vlans, vlans6);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerSwitchport {\n");
    
    sb.append("    switchportId: ").append(toIndentedString(switchportId)).append("\n");
    sb.append("    switchId: ").append(toIndentedString(switchId)).append("\n");
    sb.append("    _switch: ").append(toIndentedString(_switch)).append("\n");
    sb.append("    port: ").append(toIndentedString(port)).append("\n");
    sb.append("    blade: ").append(toIndentedString(blade)).append("\n");
    sb.append("    justport: ").append(toIndentedString(justport)).append("\n");
    sb.append("    graphId: ").append(toIndentedString(graphId)).append("\n");
    sb.append("    assetId: ").append(toIndentedString(assetId)).append("\n");
    sb.append("    vlans: ").append(toIndentedString(vlans)).append("\n");
    sb.append("    vlans6: ").append(toIndentedString(vlans6)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

