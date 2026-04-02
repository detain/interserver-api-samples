package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Create firewall rule for your ip
 **/
@Schema(description = "Create firewall rule for your ip")


public class CreateFirewallRule   {
  @JsonProperty("destination_port")
  private Integer destinationPort = 80;
  @JsonProperty("source_ip")
  private String sourceIp = "0.0.0.0";
  @JsonProperty("source_port")
  private Integer sourcePort = 0;
  /**
   * 1 = TCP, 2 = UDP
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

    @JsonCreator
    public static ProtocolIdEnum fromValue(String text) {
      for (ProtocolIdEnum b : ProtocolIdEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }
  @JsonProperty("protocol_id")
  private ProtocolIdEnum protocolId = null;
  /**
   * 1 = Block,  0 = Whitelist
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

    @JsonCreator
    public static XdpActionEnum fromValue(String text) {
      for (XdpActionEnum b : XdpActionEnum.values()) {
        if (String.valueOf(b.value).equals(text)) {
          return b;
        }
      }
      return null;
    }
  }
  @JsonProperty("xdp_action")
  private XdpActionEnum xdpAction = null;
  /**
   **/
  public CreateFirewallRule destinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

  
  @Schema(example = "22", description = "")
  @JsonProperty("destination_port")
  public Integer getDestinationPort() {
    return destinationPort;
  }
  public void setDestinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
  }

  /**
   * Source IP address to match. Use '0.0.0.0' to match any source.
   **/
  public CreateFirewallRule sourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
    return this;
  }

  
  @Schema(example = "1.2.4.5", description = "Source IP address to match. Use '0.0.0.0' to match any source.")
  @JsonProperty("source_ip")
  public String getSourceIp() {
    return sourceIp;
  }
  public void setSourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
  }

  /**
   **/
  public CreateFirewallRule sourcePort(Integer sourcePort) {
    this.sourcePort = sourcePort;
    return this;
  }

  
  @Schema(example = "1302", description = "")
  @JsonProperty("source_port")
  public Integer getSourcePort() {
    return sourcePort;
  }
  public void setSourcePort(Integer sourcePort) {
    this.sourcePort = sourcePort;
  }

  /**
   * 1 = TCP, 2 = UDP
   **/
  public CreateFirewallRule protocolId(ProtocolIdEnum protocolId) {
    this.protocolId = protocolId;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "1 = TCP, 2 = UDP")
  @JsonProperty("protocol_id")
  public ProtocolIdEnum getProtocolId() {
    return protocolId;
  }
  public void setProtocolId(ProtocolIdEnum protocolId) {
    this.protocolId = protocolId;
  }

  /**
   * 1 = Block,  0 = Whitelist
   **/
  public CreateFirewallRule xdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  
  @Schema(example = "1", required = true, description = "1 = Block,  0 = Whitelist")
  @JsonProperty("xdp_action")
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
