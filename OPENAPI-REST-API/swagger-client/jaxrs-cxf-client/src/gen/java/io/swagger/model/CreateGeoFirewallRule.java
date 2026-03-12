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
public class CreateGeoFirewallRule   {
  
  @Schema(example = "22", description = "")
  private Integer destinationPort = 80;
  
  @Schema(example = "10", description = "To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode")
 /**
   * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode  
  **/
  private Integer countryCode = null;
  
  @Schema(example = "1331", description = "ASN number")
 /**
   * ASN number  
  **/
  private Integer asn = null;
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

  public CreateGeoFirewallRule destinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

 /**
   * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode
   * @return countryCode
  **/
  @JsonProperty("country_code")
  public Integer getCountryCode() {
    return countryCode;
  }

  public void setCountryCode(Integer countryCode) {
    this.countryCode = countryCode;
  }

  public CreateGeoFirewallRule countryCode(Integer countryCode) {
    this.countryCode = countryCode;
    return this;
  }

 /**
   * ASN number
   * @return asn
  **/
  @JsonProperty("asn")
  public Integer getAsn() {
    return asn;
  }

  public void setAsn(Integer asn) {
    this.asn = asn;
  }

  public CreateGeoFirewallRule asn(Integer asn) {
    this.asn = asn;
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

  public CreateGeoFirewallRule xdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CreateGeoFirewallRule {\n");
    
    sb.append("    destinationPort: ").append(toIndentedString(destinationPort)).append("\n");
    sb.append("    countryCode: ").append(toIndentedString(countryCode)).append("\n");
    sb.append("    asn: ").append(toIndentedString(asn)).append("\n");
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
