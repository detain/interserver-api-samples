package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Dashboard module configuration for dedicated server services.")

public class HomeDetailsModulesServers   {
  private String icon = null;  private String viewLink = null;  private String heading = null;  private String buyLink = null;  private String listLink = null;

  /**
   * The icon for dedicated servers.
   **/
  
  @Schema(example = "server", description = "The icon for dedicated servers.")
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Link to view server.
   **/
  
  @Schema(example = "view_server", description = "Link to view server.")
  @JsonProperty("view_link")
  @NotNull
  public String getViewLink() {
    return viewLink;
  }
  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  /**
   * Heading for dedicated servers.
   **/
  
  @Schema(example = "Dedicated Servers", description = "Heading for dedicated servers.")
  @JsonProperty("heading")
  @NotNull
  public String getHeading() {
    return heading;
  }
  public void setHeading(String heading) {
    this.heading = heading;
  }

  /**
   * Link to order server.
   **/
  
  @Schema(example = "order_server", description = "Link to order server.")
  @JsonProperty("buy_link")
  @NotNull
  public String getBuyLink() {
    return buyLink;
  }
  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  /**
   * Link to view servers list.
   **/
  
  @Schema(example = "view_servers_list", description = "Link to view servers list.")
  @JsonProperty("list_link")
  @NotNull
  public String getListLink() {
    return listLink;
  }
  public void setListLink(String listLink) {
    this.listLink = listLink;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HomeDetailsModulesServers homeDetailsModulesServers = (HomeDetailsModulesServers) o;
    return Objects.equals(icon, homeDetailsModulesServers.icon) &&
        Objects.equals(viewLink, homeDetailsModulesServers.viewLink) &&
        Objects.equals(heading, homeDetailsModulesServers.heading) &&
        Objects.equals(buyLink, homeDetailsModulesServers.buyLink) &&
        Objects.equals(listLink, homeDetailsModulesServers.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesServers {\n");
    
    sb.append("    icon: ").append(toIndentedString(icon)).append("\n");
    sb.append("    viewLink: ").append(toIndentedString(viewLink)).append("\n");
    sb.append("    heading: ").append(toIndentedString(heading)).append("\n");
    sb.append("    buyLink: ").append(toIndentedString(buyLink)).append("\n");
    sb.append("    listLink: ").append(toIndentedString(listLink)).append("\n");
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
