package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.ServerNetworkInfoAssets;
import io.swagger.model.ServerNetworkInfoSwitchports;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;





public class ServerNetworkInfo   {
  @JsonProperty("vlans")
  private List<String> vlans = new ArrayList<String>();
  @JsonProperty("vlans6")
  private List<String> vlans6 = new ArrayList<String>();
  @JsonProperty("assets")
  private ServerNetworkInfoAssets assets = null;
  @JsonProperty("switchports")
  private ServerNetworkInfoSwitchports switchports = null;
  /**
   * List of VLANs.
   **/
  public ServerNetworkInfo vlans(List<String> vlans) {
    this.vlans = vlans;
    return this;
  }

  
  @Schema(example = "[]", required = true, description = "List of VLANs.")
  @JsonProperty("vlans")
  public List<String> getVlans() {
    return vlans;
  }
  public void setVlans(List<String> vlans) {
    this.vlans = vlans;
  }

  /**
   * List of IPv6 VLANs.
   **/
  public ServerNetworkInfo vlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
    return this;
  }

  
  @Schema(example = "[]", required = true, description = "List of IPv6 VLANs.")
  @JsonProperty("vlans6")
  public List<String> getVlans6() {
    return vlans6;
  }
  public void setVlans6(List<String> vlans6) {
    this.vlans6 = vlans6;
  }

  /**
   **/
  public ServerNetworkInfo assets(ServerNetworkInfoAssets assets) {
    this.assets = assets;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("assets")
  public ServerNetworkInfoAssets getAssets() {
    return assets;
  }
  public void setAssets(ServerNetworkInfoAssets assets) {
    this.assets = assets;
  }

  /**
   **/
  public ServerNetworkInfo switchports(ServerNetworkInfoSwitchports switchports) {
    this.switchports = switchports;
    return this;
  }

  
  @Schema(required = true, description = "")
  @JsonProperty("switchports")
  public ServerNetworkInfoSwitchports getSwitchports() {
    return switchports;
  }
  public void setSwitchports(ServerNetworkInfoSwitchports switchports) {
    this.switchports = switchports;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerNetworkInfo serverNetworkInfo = (ServerNetworkInfo) o;
    return Objects.equals(vlans, serverNetworkInfo.vlans) &&
        Objects.equals(vlans6, serverNetworkInfo.vlans6) &&
        Objects.equals(assets, serverNetworkInfo.assets) &&
        Objects.equals(switchports, serverNetworkInfo.switchports);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
