package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class ServerSwitchport   {
  @JsonProperty("switchport_id")
  private Integer switchportId = null;
  @JsonProperty("switch_id")
  private String switchId = null;
  @JsonProperty("switch")
  private String _switch = null;
  @JsonProperty("port")
  private String port = null;
  @JsonProperty("blade")
  private String blade = null;
  @JsonProperty("justport")
  private String justport = null;
  @JsonProperty("graph_id")
  private String graphId = null;
  @JsonProperty("vlans")
  private List<String> vlans = null;
  @JsonProperty("vlans6")
  private List<String> vlans6 = null;
  @JsonProperty("asset_id")
  private Integer assetId = null;
  /**
   * Unique identifier for the switchport.
   **/
  public ServerSwitchport switchportId(Integer switchportId) {
    this.switchportId = switchportId;
    return this;
  }

  
  @Schema(example = "10414", required = true, description = "Unique identifier for the switchport.")
  @JsonProperty("switchport_id")
  public Integer getSwitchportId() {
    return switchportId;
  }
  public void setSwitchportId(Integer switchportId) {
    this.switchportId = switchportId;
  }

  /**
   * Unique identifier for the switch associated with the switchport.
   **/
  public ServerSwitchport switchId(String switchId) {
    this.switchId = switchId;
    return this;
  }

  
  @Schema(example = "118", required = true, description = "Unique identifier for the switch associated with the switchport.")
  @JsonProperty("switch_id")
  public String getSwitchId() {
    return switchId;
  }
  public void setSwitchId(String switchId) {
    this.switchId = switchId;
  }

  /**
   * Name of the switch associated with the switchport.
   **/
  public ServerSwitchport _switch(String _switch) {
    this._switch = _switch;
    return this;
  }

  
  @Schema(example = "edge1", required = true, description = "Name of the switch associated with the switchport.")
  @JsonProperty("switch")
  public String getSwitch() {
    return _switch;
  }
  public void setSwitch(String _switch) {
    this._switch = _switch;
  }

  /**
   * Port name on the switch.
   **/
  public ServerSwitchport port(String port) {
    this.port = port;
    return this;
  }

  
  @Schema(example = "Ethernet1/33", required = true, description = "Port name on the switch.")
  @JsonProperty("port")
  public String getPort() {
    return port;
  }
  public void setPort(String port) {
    this.port = port;
  }

  /**
   * Blade name associated with the port.
   **/
  public ServerSwitchport blade(String blade) {
    this.blade = blade;
    return this;
  }

  
  @Schema(example = "Ethernet1", required = true, description = "Blade name associated with the port.")
  @JsonProperty("blade")
  public String getBlade() {
    return blade;
  }
  public void setBlade(String blade) {
    this.blade = blade;
  }

  /**
   * Port identifier.
   **/
  public ServerSwitchport justport(String justport) {
    this.justport = justport;
    return this;
  }

  
  @Schema(example = "33", required = true, description = "Port identifier.")
  @JsonProperty("justport")
  public String getJustport() {
    return justport;
  }
  public void setJustport(String justport) {
    this.justport = justport;
  }

  /**
   * Identifier for the graph associated with the switchport.
   **/
  public ServerSwitchport graphId(String graphId) {
    this.graphId = graphId;
    return this;
  }

  
  @Schema(example = "12622", required = true, description = "Identifier for the graph associated with the switchport.")
  @JsonProperty("graph_id")
  public String getGraphId() {
    return graphId;
  }
  public void setGraphId(String graphId) {
    this.graphId = graphId;
  }

  /**
   * List of VLANs associated with the switchport.
   **/
  public ServerSwitchport vlans(List<String> vlans) {
    this.vlans = vlans;
    return this;
  }

  
  @Schema(example = "[]", description = "List of VLANs associated with the switchport.")
  @JsonProperty("vlans")
  public List<String> getVlans() {
    return vlans;
  }
  public void setVlans(List<String> vlans) {
    this.vlans = vlans;
  }

  /**
   * List of IPv6 VLANs associated with the switchport.
   **/
  public ServerSwitchport vlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
    return this;
  }

  
  @Schema(example = "[]", description = "List of IPv6 VLANs associated with the switchport.")
  @JsonProperty("vlans6")
  public List<String> getVlans6() {
    return vlans6;
  }
  public void setVlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
  }

  /**
   * Unique identifier of the asset associated with the switchport.
   **/
  public ServerSwitchport assetId(Integer assetId) {
    this.assetId = assetId;
    return this;
  }

  
  @Schema(example = "3497", required = true, description = "Unique identifier of the asset associated with the switchport.")
  @JsonProperty("asset_id")
  public Integer getAssetId() {
    return assetId;
  }
  public void setAssetId(Integer assetId) {
    this.assetId = assetId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerSwitchport serverSwitchport = (ServerSwitchport) o;
    return Objects.equals(switchportId, serverSwitchport.switchportId) &&
        Objects.equals(switchId, serverSwitchport.switchId) &&
        Objects.equals(_switch, serverSwitchport._switch) &&
        Objects.equals(port, serverSwitchport.port) &&
        Objects.equals(blade, serverSwitchport.blade) &&
        Objects.equals(justport, serverSwitchport.justport) &&
        Objects.equals(graphId, serverSwitchport.graphId) &&
        Objects.equals(vlans, serverSwitchport.vlans) &&
        Objects.equals(vlans6, serverSwitchport.vlans6) &&
        Objects.equals(assetId, serverSwitchport.assetId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(switchportId, switchId, _switch, port, blade, justport, graphId, vlans, vlans6, assetId);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
