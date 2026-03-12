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


public class CreateGeoFirewallRule   {
  @JsonProperty("destination_port")
  private Integer destinationPort = 80;
  @JsonProperty("country_code")
  private Integer countryCode = null;
  @JsonProperty("asn")
  private Integer asn = null;
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
  public CreateGeoFirewallRule destinationPort(Integer destinationPort) {
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
   * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
   **/
  public CreateGeoFirewallRule countryCode(Integer countryCode) {
    this.countryCode = countryCode;
    return this;
  }

  
  @Schema(example = "10", description = "To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode")
  @JsonProperty("country_code")
  public Integer getCountryCode() {
    return countryCode;
  }
  public void setCountryCode(Integer countryCode) {
    this.countryCode = countryCode;
  }

  /**
   * ASN number
   **/
  public CreateGeoFirewallRule asn(Integer asn) {
    this.asn = asn;
    return this;
  }

  
  @Schema(example = "1331", description = "ASN number")
  @JsonProperty("asn")
  public Integer getAsn() {
    return asn;
  }
  public void setAsn(Integer asn) {
    this.asn = asn;
  }

  /**
   * 1 = Block,  0 = Whitelist
   **/
  public CreateGeoFirewallRule xdpAction(XdpActionEnum xdpAction) {
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
    CreateGeoFirewallRule createGeoFirewallRule = (CreateGeoFirewallRule) o;
    return Objects.equals(destinationPort, createGeoFirewallRule.destinationPort) &&
        Objects.equals(countryCode, createGeoFirewallRule.countryCode) &&
        Objects.equals(asn, createGeoFirewallRule.asn) &&
        Objects.equals(xdpAction, createGeoFirewallRule.xdpAction);
  }

  @Override
  public int hashCode() {
    return Objects.hash(destinationPort, countryCode, asn, xdpAction);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
