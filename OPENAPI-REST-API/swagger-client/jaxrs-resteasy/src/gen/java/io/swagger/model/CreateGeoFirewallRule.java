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

public class CreateGeoFirewallRule   {
  private Integer destinationPort = 80;  private Integer countryCode = null;  private Integer asn = null;  /**
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
   * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by&#x3D;numcode
   **/
  
  @Schema(example = "10", description = "To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode")
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
  
  @Schema(example = "1331", description = "ASN number")
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
