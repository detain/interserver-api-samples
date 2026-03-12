package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Create firewall rule for your ip
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Create firewall rule for your ip")

public class CreateGeoFirewallRule   {

  private @Valid Integer destinationPort = 80;

  private @Valid Integer countryCode = null;

  private @Valid Integer asn = null;

public enum XdpActionEnum {

    NUMBER_0(Integer.valueOf(0)), NUMBER_1(Integer.valueOf(1));


    private Integer value;

    XdpActionEnum (Integer v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    @JsonValue
    public String toString() {
        return String.valueOf(value);
    }

    @JsonCreator
    public static XdpActionEnum fromValue(String v) {
        for (XdpActionEnum b : XdpActionEnum.values()) {
            if (String.valueOf(b.value).equals(v)) {
                return b;
            }
        }
        return null;
    }
}
  private @Valid XdpActionEnum xdpAction = null;

  /**
   **/
  public CreateGeoFirewallRule destinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

  
  @ApiModelProperty(example = "22", value = "")
  @JsonProperty("destination_port")
  @NotNull

  public Integer getDestinationPort() {
    return destinationPort;
  }
  public void setDestinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
  }

  /**
   * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode
   **/
  public CreateGeoFirewallRule countryCode(Integer countryCode) {
    this.countryCode = countryCode;
    return this;
  }

  
  @ApiModelProperty(example = "10", value = "To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode")
  @JsonProperty("country_code")
  @NotNull

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

  
  @ApiModelProperty(example = "1331", value = "ASN number")
  @JsonProperty("asn")
  @NotNull

  public Integer getAsn() {
    return asn;
  }
  public void setAsn(Integer asn) {
    this.asn = asn;
  }

  /**
   * 1 &#x3D; Block,  0 &#x3D; Whitelist
   **/
  public CreateGeoFirewallRule xdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  
  @ApiModelProperty(example = "1", required = true, value = "1 = Block,  0 = Whitelist")
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
