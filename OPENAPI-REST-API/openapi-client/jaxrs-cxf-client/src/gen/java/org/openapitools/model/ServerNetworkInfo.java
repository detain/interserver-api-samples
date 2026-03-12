package org.openapitools.model;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.openapitools.model.ServerNetworkInfoAssets;
import org.openapitools.model.ServerNetworkInfoSwitchports;

import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ServerNetworkInfo  {
  
 /**
  * List of VLANs.
  */
  @ApiModelProperty(example = "[]", required = true, value = "List of VLANs.")

  private List<String> vlans = new ArrayList<>();

 /**
  * List of IPv6 VLANs.
  */
  @ApiModelProperty(example = "[]", required = true, value = "List of IPv6 VLANs.")

  private List<String> vlans6 = new ArrayList<>();

  @ApiModelProperty(required = true, value = "")

  private ServerNetworkInfoAssets assets;

  @ApiModelProperty(required = true, value = "")

  private ServerNetworkInfoSwitchports switchports;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerNetworkInfo serverNetworkInfo = (ServerNetworkInfo) o;
    return Objects.equals(this.vlans, serverNetworkInfo.vlans) &&
        Objects.equals(this.vlans6, serverNetworkInfo.vlans6) &&
        Objects.equals(this.assets, serverNetworkInfo.assets) &&
        Objects.equals(this.switchports, serverNetworkInfo.switchports);
  }

  @Override
  public int hashCode() {
    return Objects.hash(vlans, vlans6, assets, switchports);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

