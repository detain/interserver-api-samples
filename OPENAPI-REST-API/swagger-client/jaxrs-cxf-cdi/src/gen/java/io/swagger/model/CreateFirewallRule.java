package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Create firewall rule for your ip
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Create firewall rule for your ip")

public class CreateFirewallRule   {
  private Integer destinationPort = 80;
  private String sourceIp = "0.0.0.0";
  private Integer sourcePort = 0;
@XmlType(name="ProtocolIdEnum")
@XmlEnum(Integer.class)
public enum ProtocolIdEnum {

    @XmlEnumValue(1) NUMBER_1(Integer.valueOf(1)), @XmlEnumValue(2) NUMBER_2(Integer.valueOf(2));


    private Integer value;

    ProtocolIdEnum (Integer v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static ProtocolIdEnum fromValue(String v) {
        for (ProtocolIdEnum b : ProtocolIdEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private ProtocolIdEnum protocolId = null;
@XmlType(name="XdpActionEnum")
@XmlEnum(Integer.class)
public enum XdpActionEnum {

    @XmlEnumValue(0) NUMBER_0(Integer.valueOf(0)), @XmlEnumValue(1) NUMBER_1(Integer.valueOf(1));


    private Integer value;

    XdpActionEnum (Integer v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static XdpActionEnum fromValue(String v) {
        for (XdpActionEnum b : XdpActionEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private XdpActionEnum xdpAction = null;

  /**
   **/
  public CreateFirewallRule destinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

  
  
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
   * Source IP address to match. Use &#x27;0.0.0.0&#x27; to match any source.
   **/
  public CreateFirewallRule sourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
    return this;
  }

  
  
  @Schema(example = "1.2.4.5", description = "Source IP address to match. Use '0.0.0.0' to match any source.")
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
  public CreateFirewallRule sourcePort(Integer sourcePort) {
    this.sourcePort = sourcePort;
    return this;
  }

  
  
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
  public CreateFirewallRule protocolId(ProtocolIdEnum protocolId) {
    this.protocolId = protocolId;
    return this;
  }

  
  
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
  public CreateFirewallRule xdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  
  
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
