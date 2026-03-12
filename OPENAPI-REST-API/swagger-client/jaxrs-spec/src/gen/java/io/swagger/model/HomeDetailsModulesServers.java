package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Dashboard module configuration for dedicated server services.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Dashboard module configuration for dedicated server services.")

public class HomeDetailsModulesServers   {

  private @Valid String icon = null;

  private @Valid String viewLink = null;

  private @Valid String heading = null;

  private @Valid String buyLink = null;

  private @Valid String listLink = null;

  /**
   * The icon for dedicated servers.
   **/
  public HomeDetailsModulesServers icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @ApiModelProperty(example = "server", value = "The icon for dedicated servers.")
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
  public HomeDetailsModulesServers viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

  
  @ApiModelProperty(example = "view_server", value = "Link to view server.")
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
  public HomeDetailsModulesServers heading(String heading) {
    this.heading = heading;
    return this;
  }

  
  @ApiModelProperty(example = "Dedicated Servers", value = "Heading for dedicated servers.")
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
  public HomeDetailsModulesServers buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

  
  @ApiModelProperty(example = "order_server", value = "Link to order server.")
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
  public HomeDetailsModulesServers listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }

  
  @ApiModelProperty(example = "view_servers_list", value = "Link to view servers list.")
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
