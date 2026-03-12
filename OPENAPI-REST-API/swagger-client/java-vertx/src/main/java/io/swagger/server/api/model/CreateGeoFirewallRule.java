package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Create firewall rule for your ip
 */




public class CreateGeoFirewallRule   {
  private Integer destinationPort = 80;

  private Integer countryCode = null;

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

    public Integer getValue() {
      return value;
    }

    @Override
    public String toString() {
      return String.valueOf(value);
    }

    public static XdpActionEnum fromValue(Integer value) {
      for (XdpActionEnum b : XdpActionEnum.values()) {
        if (b.value.equals(value)) {
          return b;
        }
      }
      return null;
    }

  }
  private XdpActionEnum xdpAction = null;

  public CreateGeoFirewallRule destinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
    return this;
  }

  /**
   * Get destinationPort
   * @return destinationPort
   **/
    public Integer getDestinationPort() {
    return destinationPort;
  }

  public void setDestinationPort(Integer destinationPort) {
    this.destinationPort = destinationPort;
  }

  public CreateGeoFirewallRule countryCode(Integer countryCode) {
    this.countryCode = countryCode;
    return this;
  }

  /**
   * To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
   * @return countryCode
   **/
    public Integer getCountryCode() {
    return countryCode;
  }

  public void setCountryCode(Integer countryCode) {
    this.countryCode = countryCode;
  }

  public CreateGeoFirewallRule asn(Integer asn) {
    this.asn = asn;
    return this;
  }

  /**
   * ASN number
   * @return asn
   **/
    public Integer getAsn() {
    return asn;
  }

  public void setAsn(Integer asn) {
    this.asn = asn;
  }

  public CreateGeoFirewallRule xdpAction(XdpActionEnum xdpAction) {
    this.xdpAction = xdpAction;
    return this;
  }

  /**
   * 1 = Block,  0 = Whitelist
   * @return xdpAction
   **/
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
    return Objects.equals(this.destinationPort, createGeoFirewallRule.destinationPort) &&
        Objects.equals(this.countryCode, createGeoFirewallRule.countryCode) &&
        Objects.equals(this.asn, createGeoFirewallRule.asn) &&
        Objects.equals(this.xdpAction, createGeoFirewallRule.xdpAction);
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
