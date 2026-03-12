package io.swagger.model;

import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class ServerSwitchport   {
  
  @Schema(example = "10414", required = true, description = "Unique identifier for the switchport.")
 /**
   * Unique identifier for the switchport.  
  **/
  private Integer switchportId = null;
  
  @Schema(example = "118", required = true, description = "Unique identifier for the switch associated with the switchport.")
 /**
   * Unique identifier for the switch associated with the switchport.  
  **/
  private String switchId = null;
  
  @Schema(example = "edge1", required = true, description = "Name of the switch associated with the switchport.")
 /**
   * Name of the switch associated with the switchport.  
  **/
  private String _switch = null;
  
  @Schema(example = "Ethernet1/33", required = true, description = "Port name on the switch.")
 /**
   * Port name on the switch.  
  **/
  private String port = null;
  
  @Schema(example = "Ethernet1", required = true, description = "Blade name associated with the port.")
 /**
   * Blade name associated with the port.  
  **/
  private String blade = null;
  
  @Schema(example = "33", required = true, description = "Port identifier.")
 /**
   * Port identifier.  
  **/
  private String justport = null;
  
  @Schema(example = "12622", required = true, description = "Identifier for the graph associated with the switchport.")
 /**
   * Identifier for the graph associated with the switchport.  
  **/
  private String graphId = null;
  
  @Schema(example = "[]", description = "List of VLANs associated with the switchport.")
 /**
   * List of VLANs associated with the switchport.  
  **/
  private List<String> vlans = null;
  
  @Schema(example = "[]", description = "List of IPv6 VLANs associated with the switchport.")
 /**
   * List of IPv6 VLANs associated with the switchport.  
  **/
  private List<String> vlans6 = null;
  
  @Schema(example = "3497", required = true, description = "Unique identifier of the asset associated with the switchport.")
 /**
   * Unique identifier of the asset associated with the switchport.  
  **/
  private Integer assetId = null;
 /**
   * Unique identifier for the switchport.
   * @return switchportId
  **/
  @JsonProperty("switchport_id")
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
  @NotNull
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
   * List of VLANs associated with the switchport.
   * @return vlans
  **/
  @JsonProperty("vlans")
  @NotNull
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
  @NotNull
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

 /**
   * Unique identifier of the asset associated with the switchport.
   * @return assetId
  **/
  @JsonProperty("asset_id")
  @NotNull
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
    sb.append("    vlans: ").append(toIndentedString(vlans)).append("\n");
    sb.append("    vlans6: ").append(toIndentedString(vlans6)).append("\n");
    sb.append("    assetId: ").append(toIndentedString(assetId)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
