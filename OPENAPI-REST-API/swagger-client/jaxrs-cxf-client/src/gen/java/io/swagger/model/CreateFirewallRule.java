package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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

/**
  * Create firewall rule for your ip
 **/
@Schema(description="Create firewall rule for your ip")
public class CreateFirewallRule   {
  
  @Schema(example = "22", description = "")
  private Integer destinationPort = 80;
  
  @Schema(example = "1.2.4.5", description = "")
  private String sourceIp = "0";
  
  @Schema(example = "1302", description = "")
  private Integer sourcePort = 0;
  public enum ProtocolIdEnum {
    NUMBER_1(1),
    NUMBER_2(2);

    private Integer value;

    ProtocolIdEnum(Integer value) {
      this.value = value;
    }
    @JsonValue
    public Integer getValue() {
      return value;
    }

    @Override
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
  @Schema(example = "1", required = true, description = "1 = TCP, 2 = UDP")
 /**
   * 1 = TCP, 2 = UDP  
  **/
  private ProtocolIdEnum protocolId = null;
  public enum XdpActionEnum {
    NUMBER_0(0),
    NUMBER_1(1);

    private Integer value;

    XdpActionEnum(Integer value) {
      this.value = value;
    }
    @JsonValue
    public Integer getValue() {
      return value;
    }

    @Override
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
  @Schema(example = "1", required = true, description = "1 = Block,  0 = Whitelist")
 /**
   * 1 = Block,  0 = Whitelist  
  **/
  private XdpActionEnum xdpAction = null;
 /**
   * Get destinationPort
   * @return destinationPort
  **/
  @JsonProperty("destination_port")
  public Integer getDestinationPort() {
    return destinationPort;
  }

  public void setDestinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
  }

  public CreateFirewallRule destinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
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

  public CreateFirewallRule sourceIp(String sourceIp) {
    this.sourceIp = sourceIp;
    return this;
  }

 /**
   * Get sourcePort
   * @return sourcePort
  **/
  @JsonProperty("source_port")
  public Integer getSourcePort() {
    return sourcePort;
  }

  public void setSourcePort(Integer sourcePort) {
    this.sourcePort = sourcePort;
  }

  public CreateFirewallRule sourcePort(Integer sourcePort) {
    this.sourcePort = sourcePort;
    return this;
  }

 /**
   * 1 &#x3D; TCP, 2 &#x3D; UDP
   * @return protocolId
  **/
  @JsonProperty("protocol_id")
  public Integer getProtocolId() {
    if (protocolId == null) {
      return null;
    }
    return protocolId.getValue();
  }

  public void setProtocolId(ProtocolIdEnum protocolId) {
    this.protocolId = protocolId;
  }

  public CreateFirewallRule protocolId(ProtocolIdEnum protocolId) {
    this.protocolId = protocolId;
    return this;
  }

 /**
   * 1 &#x3D; Block,  0 &#x3D; Whitelist
   * @return xdpAction
  **/
  @JsonProperty("xdp_action")
  public Integer getXdpAction() {
    if (xdpAction == null) {
      return null;
    }
    return xdpAction.getValue();
  }

  public void setXdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
  }

  public CreateFirewallRule xdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
