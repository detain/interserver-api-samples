package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * InlineResponse20012FilterFirewallRules
 */




public class InlineResponse20012FilterFirewallRules   {
  private String id = null;

  private String sourceIp = null;

  private String destinationIp = null;

  private String protocolId = null;

  private String sourcePort = null;

  private String destinationPort = null;

  private String xdpAction = null;

  private String globalDrop = null;

  public InlineResponse20012FilterFirewallRules id(String id) {
    this.id = id;
    return this;
  }

  /**
   * Get id
   * @return id
   **/
    public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public InlineResponse20012FilterFirewallRules sourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
    return this;
  }

  /**
   * Get sourceIp
   * @return sourceIp
   **/
    public String getSourceIp() {
    return sourceIp;
  }

  public void setSourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
  }

  public InlineResponse20012FilterFirewallRules destinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
    return this;
  }

  /**
   * Get destinationIp
   * @return destinationIp
   **/
    public String getDestinationIp() {
    return destinationIp;
  }

  public void setDestinationIp(String destinationIp) {
    this.destinationIp = destinationIp;
  }

  public InlineResponse20012FilterFirewallRules protocolId(String protocolId) {
    this.protocolId = protocolId;
    return this;
  }

  /**
   * Get protocolId
   * @return protocolId
   **/
    public String getProtocolId() {
    return protocolId;
  }

  public void setProtocolId(String protocolId) {
    this.protocolId = protocolId;
  }

  public InlineResponse20012FilterFirewallRules sourcePort(String sourcePort) {
    this.sourcePort = sourcePort;
    return this;
  }

  /**
   * Get sourcePort
   * @return sourcePort
   **/
    public String getSourcePort() {
    return sourcePort;
  }

  public void setSourcePort(String sourcePort) {
    this.sourcePort = sourcePort;
  }

  public InlineResponse20012FilterFirewallRules destinationPort(String destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

  /**
   * Get destinationPort
   * @return destinationPort
   **/
    public String getDestinationPort() {
    return destinationPort;
  }

  public void setDestinationPort(String destinationPort) {
    this.destinationPort = destinationPort;
  }

  public InlineResponse20012FilterFirewallRules xdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  /**
   * Get xdpAction
   * @return xdpAction
   **/
    public String getXdpAction() {
    return xdpAction;
  }

  public void setXdpAction(String xdpAction) {
    this.xdpAction = xdpAction;
  }

  public InlineResponse20012FilterFirewallRules globalDrop(String globalDrop) {
    this.globalDrop = globalDrop;
    return this;
  }

  /**
   * Get globalDrop
   * @return globalDrop
   **/
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
    return Objects.equals(this.id, inlineResponse20012FilterFirewallRules.id) &&
        Objects.equals(this.sourceIp, inlineResponse20012FilterFirewallRules.sourceIp) &&
        Objects.equals(this.destinationIp, inlineResponse20012FilterFirewallRules.destinationIp) &&
        Objects.equals(this.protocolId, inlineResponse20012FilterFirewallRules.protocolId) &&
        Objects.equals(this.sourcePort, inlineResponse20012FilterFirewallRules.sourcePort) &&
        Objects.equals(this.destinationPort, inlineResponse20012FilterFirewallRules.destinationPort) &&
        Objects.equals(this.xdpAction, inlineResponse20012FilterFirewallRules.xdpAction) &&
        Objects.equals(this.globalDrop, inlineResponse20012FilterFirewallRules.globalDrop);
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
