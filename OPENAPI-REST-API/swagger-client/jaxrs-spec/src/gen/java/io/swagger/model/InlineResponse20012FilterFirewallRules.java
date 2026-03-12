package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class InlineResponse20012FilterFirewallRules   {

  private @Valid String id = null;

  private @Valid String sourceIp = null;

  private @Valid String destinationIp = null;

  private @Valid String protocolId = null;

  private @Valid String sourcePort = null;

  private @Valid String destinationPort = null;

  private @Valid String xdpAction = null;

  private @Valid String globalDrop = null;

  /**
   **/
  public InlineResponse20012FilterFirewallRules id(String id) {
    this.id = id;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  @NotNull

  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules sourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("source_ip")
  @NotNull

  public String getSourceIp() {
    return sourceIp;
  }
  public void setSourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules destinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("destination_ip")
  @NotNull

  public String getDestinationIp() {
    return destinationIp;
  }
  public void setDestinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules protocolId(String protocolId) {
    this.protocolId = protocolId;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("protocol_id")
  @NotNull

  public String getProtocolId() {
    return protocolId;
  }
  public void setProtocolId(String protocolId) {
    this.protocolId = protocolId;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules sourcePort(String sourcePort) {
    this.sourcePort = sourcePort;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("source_port")
  @NotNull

  public String getSourcePort() {
    return sourcePort;
  }
  public void setSourcePort(String sourcePort) {
    this.sourcePort = sourcePort;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules destinationPort(String destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("destination_port")
  @NotNull

  public String getDestinationPort() {
    return destinationPort;
  }
  public void setDestinationPort(String destinationPort) {
    this.destinationPort = destinationPort;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules xdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("xdp_action")
  @NotNull

  public String getXdpAction() {
    return xdpAction;
  }
  public void setXdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
  }

  /**
   **/
  public InlineResponse20012FilterFirewallRules globalDrop(String globalDrop) {
    this.globalDrop = globalDrop;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("global_drop")
  @NotNull

  public String getGlobalDrop() {
    return globalDrop;
  }
  public void setGlobalDrop(String globalDrop) {
    this.globalDrop = globalDrop;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20012FilterFirewallRules inlineResponse20012FilterFirewallRules = (InlineResponse20012FilterFirewallRules) o;
    return Objects.equals(id, inlineResponse20012FilterFirewallRules.id) &&
        Objects.equals(sourceIp, inlineResponse20012FilterFirewallRules.sourceIp) &&
        Objects.equals(destinationIp, inlineResponse20012FilterFirewallRules.destinationIp) &&
        Objects.equals(protocolId, inlineResponse20012FilterFirewallRules.protocolId) &&
        Objects.equals(sourcePort, inlineResponse20012FilterFirewallRules.sourcePort) &&
        Objects.equals(destinationPort, inlineResponse20012FilterFirewallRules.destinationPort) &&
        Objects.equals(xdpAction, inlineResponse20012FilterFirewallRules.xdpAction) &&
        Objects.equals(globalDrop, inlineResponse20012FilterFirewallRules.globalDrop);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, sourceIp, destinationIp, protocolId, sourcePort, destinationPort, xdpAction, globalDrop);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20012FilterFirewallRules {\n");
    
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
