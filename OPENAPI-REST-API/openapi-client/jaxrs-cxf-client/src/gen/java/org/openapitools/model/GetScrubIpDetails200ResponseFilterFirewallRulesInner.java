package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GetScrubIpDetails200ResponseFilterFirewallRulesInner  {
  
  @ApiModelProperty(value = "")

  private String id;

  @ApiModelProperty(value = "")

  private String sourceIp;

  @ApiModelProperty(value = "")

  private String destinationIp;

  @ApiModelProperty(value = "")

  private String protocolId;

  @ApiModelProperty(value = "")

  private String sourcePort;

  @ApiModelProperty(value = "")

  private String destinationPort;

  @ApiModelProperty(value = "")

  private String xdpAction;

  @ApiModelProperty(value = "")

  private String globalDrop;
 /**
   * Get id
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Get sourceIp
   * @return sourceIp
  **/
  @JsonProperty("source_ip")
  public String getSourceIp() {
    return sourceIp;
  }

  public void setSourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner sourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
    return this;
  }

 /**
   * Get destinationIp
   * @return destinationIp
  **/
  @JsonProperty("destination_ip")
  public String getDestinationIp() {
    return destinationIp;
  }

  public void setDestinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner destinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
    return this;
  }

 /**
   * Get protocolId
   * @return protocolId
  **/
  @JsonProperty("protocol_id")
  public String getProtocolId() {
    return protocolId;
  }

  public void setProtocolId(String protocolId) {
    this.protocolId = protocolId;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner protocolId(String protocolId) {
    this.protocolId = protocolId;
    return this;
  }

 /**
   * Get sourcePort
   * @return sourcePort
  **/
  @JsonProperty("source_port")
  public String getSourcePort() {
    return sourcePort;
  }

  public void setSourcePort(String sourcePort) {
    this.sourcePort = sourcePort;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner sourcePort(String sourcePort) {
    this.sourcePort = sourcePort;
    return this;
  }

 /**
   * Get destinationPort
   * @return destinationPort
  **/
  @JsonProperty("destination_port")
  public String getDestinationPort() {
    return destinationPort;
  }

  public void setDestinationPort(String destinationPort) {
    this.destinationPort = destinationPort;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner destinationPort(String destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

 /**
   * Get xdpAction
   * @return xdpAction
  **/
  @JsonProperty("xdp_action")
  public String getXdpAction() {
    return xdpAction;
  }

  public void setXdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner xdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

 /**
   * Get globalDrop
   * @return globalDrop
  **/
  @JsonProperty("global_drop")
  public String getGlobalDrop() {
    return globalDrop;
  }

  public void setGlobalDrop(String globalDrop) {
    this.globalDrop = globalDrop;
  }

  public GetScrubIpDetails200ResponseFilterFirewallRulesInner globalDrop(String globalDrop) {
    this.globalDrop = globalDrop;
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
    GetScrubIpDetails200ResponseFilterFirewallRulesInner getScrubIpDetails200ResponseFilterFirewallRulesInner = (GetScrubIpDetails200ResponseFilterFirewallRulesInner) o;
    return Objects.equals(this.id, getScrubIpDetails200ResponseFilterFirewallRulesInner.id) &&
        Objects.equals(this.sourceIp, getScrubIpDetails200ResponseFilterFirewallRulesInner.sourceIp) &&
        Objects.equals(this.destinationIp, getScrubIpDetails200ResponseFilterFirewallRulesInner.destinationIp) &&
        Objects.equals(this.protocolId, getScrubIpDetails200ResponseFilterFirewallRulesInner.protocolId) &&
        Objects.equals(this.sourcePort, getScrubIpDetails200ResponseFilterFirewallRulesInner.sourcePort) &&
        Objects.equals(this.destinationPort, getScrubIpDetails200ResponseFilterFirewallRulesInner.destinationPort) &&
        Objects.equals(this.xdpAction, getScrubIpDetails200ResponseFilterFirewallRulesInner.xdpAction) &&
        Objects.equals(this.globalDrop, getScrubIpDetails200ResponseFilterFirewallRulesInner.globalDrop);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, sourceIp, destinationIp, protocolId, sourcePort, destinationPort, xdpAction, globalDrop);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetScrubIpDetails200ResponseFilterFirewallRulesInner {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    sourceIp: ").append(toIndentedString(sourceIp)).append("\n");
    sb.append("    destinationIp: ").append(toIndentedString(destinationIp)).append("\n");
    sb.append("    protocolId: ").append(toIndentedString(protocolId)).append("\n");
    sb.append("    sourcePort: ").append(toIndentedString(sourcePort)).append("\n");
    sb.append("    destinationPort: ").append(toIndentedString(destinationPort)).append("\n");
    sb.append("    xdpAction: ").append(toIndentedString(xdpAction)).append("\n");
    sb.append("    globalDrop: ").append(toIndentedString(globalDrop)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

