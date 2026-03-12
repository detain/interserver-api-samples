package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Create firewall rule for your ip")

public class CreateFirewallRule   {
  private Integer destinationPort = 80;  private String sourceIp = "0";  private Integer sourcePort = 0;  /**
   * 1 &#x3D; TCP, 2 &#x3D; UDP
   */
  public enum ProtocolIdEnum {
    NUMBER_1(1),
    NUMBER_2(2);
    private Integer value;

    ProtocolIdEnum(Integer value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private ProtocolIdEnum protocolId = null;  /**
   * 1 &#x3D; Block,  0 &#x3D; Whitelist
   */
  public enum XdpActionEnum {
    NUMBER_0(0),
    NUMBER_1(1);
    private Integer value;

    XdpActionEnum(Integer value) {
      this.value = value;
    }

    @Override
    @JsonValue
    public String toString() {
      return String.valueOf(value);
    }
  }
  private XdpActionEnum xdpAction = null;

  /**
   **/
  
  @Schema(example = "22", description = "")
  @JsonProperty("destination_port")
  @NotNull
  public Integer getDestinationPort() {
    return destinationPort;
  }
  public void setDestinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
  }

  /**
   **/
  
  @Schema(example = "1.2.4.5", description = "")
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
  
  @Schema(example = "1302", description = "")
  @JsonProperty("source_port")
  @NotNull
  public Integer getSourcePort() {
    return sourcePort;
  }
  public void setSourcePort(Integer sourcePort) {
    this.sourcePort = sourcePort;
  }

  /**
   * 1 &#x3D; TCP, 2 &#x3D; UDP
   **/
  
  @Schema(example = "1", required = true, description = "1 = TCP, 2 = UDP")
  @JsonProperty("protocol_id")
  @NotNull
  public ProtocolIdEnum getProtocolId() {
    return protocolId;
  }
  public void setProtocolId(ProtocolIdEnum protocolId) {
    this.protocolId = protocolId;
  }

  /**
   * 1 &#x3D; Block,  0 &#x3D; Whitelist
   **/
  
  @Schema(example = "1", required = true, description = "1 = Block,  0 = Whitelist")
  @JsonProperty("xdp_action")
  @NotNull
  public XdpActionEnum getXdpAction() {
    return xdpAction;
  }
  public void setXdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CreateFirewallRule createFirewallRule = (CreateFirewallRule) o;
    return Objects.equals(destinationPort, createFirewallRule.destinationPort) &&
        Objects.equals(sourceIp, createFirewallRule.sourceIp) &&
        Objects.equals(sourcePort, createFirewallRule.sourcePort) &&
        Objects.equals(protocolId, createFirewallRule.protocolId) &&
        Objects.equals(xdpAction, createFirewallRule.xdpAction);
  }

  @Override
  public int hashCode() {
    return Objects.hash(destinationPort, sourceIp, sourcePort, protocolId, xdpAction);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateFirewallRule {\n");
    
    sb.append("    destinationPort: ").append(toIndentedString(destinationPort)).append("\n");
    sb.append("    sourceIp: ").append(toIndentedString(sourceIp)).append("\n");
    sb.append("    sourcePort: ").append(toIndentedString(sourcePort)).append("\n");
    sb.append("    protocolId: ").append(toIndentedString(protocolId)).append("\n");
    sb.append("    xdpAction: ").append(toIndentedString(xdpAction)).append("\n");
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
