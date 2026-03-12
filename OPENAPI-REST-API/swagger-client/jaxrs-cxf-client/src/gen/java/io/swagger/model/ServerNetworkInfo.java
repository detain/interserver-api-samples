package io.swagger.model;

import io.swagger.model.ServerNetworkInfoAssets;
import io.swagger.model.ServerNetworkInfoSwitchports;
import java.util.ArrayList;
import java.util.List;

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

public class ServerNetworkInfo   {
  
  @Schema(example = "[]", required = true, description = "List of VLANs.")
 /**
   * List of VLANs.  
  **/
  private List<String> vlans = new ArrayList<String>();
  
  @Schema(example = "[]", required = true, description = "List of IPv6 VLANs.")
 /**
   * List of IPv6 VLANs.  
  **/
  private List<String> vlans6 = new ArrayList<String>();
  
  @Schema(required = true, description = "")
  private ServerNetworkInfoAssets assets = null;
  
  @Schema(required = true, description = "")
  private ServerNetworkInfoSwitchports switchports = null;
 /**
   * List of VLANs.
   * @return vlans
  **/
  @JsonProperty("vlans")
  public List<String> getVlans() {
    return vlans;
  }

  public void setVlans(List<String> vlans) {
    this.vlans = vlans;
  }

  public ServerNetworkInfo vlans(List<String> vlans) {
    this.vlans = vlans;
    return this;
  }

  public ServerNetworkInfo addVlansItem(String vlansItem) {
    this.vlans.add(vlansItem);
    return this;
  }

 /**
   * List of IPv6 VLANs.
   * @return vlans6
  **/
  @JsonProperty("vlans6")
  public List<String> getVlans6() {
    return vlans6;
  }

  public void setVlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
  }

  public ServerNetworkInfo vlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
    return this;
  }

  public ServerNetworkInfo addVlans6Item(String vlans6Item) {
    this.vlans6.add(vlans6Item);
    return this;
  }

 /**
   * Get assets
   * @return assets
  **/
  @JsonProperty("assets")
  public ServerNetworkInfoAssets getAssets() {
    return assets;
  }

  public void setAssets(ServerNetworkInfoAssets assets) {
    this.assets = assets;
  }

  public ServerNetworkInfo assets(ServerNetworkInfoAssets assets) {
    this.assets = assets;
    return this;
  }

 /**
   * Get switchports
   * @return switchports
  **/
  @JsonProperty("switchports")
  public ServerNetworkInfoSwitchports getSwitchports() {
    return switchports;
  }

  public void setSwitchports(ServerNetworkInfoSwitchports switchports) {
    this.switchports = switchports;
  }

  public ServerNetworkInfo switchports(ServerNetworkInfoSwitchports switchports) {
    this.switchports = switchports;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerNetworkInfo {\n");
    
    sb.append("    vlans: ").append(toIndentedString(vlans)).append("\n");
    sb.append("    vlans6: ").append(toIndentedString(vlans6)).append("\n");
    sb.append("    assets: ").append(toIndentedString(assets)).append("\n");
    sb.append("    switchports: ").append(toIndentedString(switchports)).append("\n");
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
