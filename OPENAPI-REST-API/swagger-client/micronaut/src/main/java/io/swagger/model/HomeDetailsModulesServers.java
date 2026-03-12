package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Dashboard module configuration for dedicated server services.
 */
@Schema(description = "Dashboard module configuration for dedicated server services.")
@Validated
@Introspected

public class HomeDetailsModulesServers   {
  @JsonProperty("icon")
  private String icon = null;

  @JsonProperty("view_link")
  private String viewLink = null;

  @JsonProperty("heading")
  private String heading = null;

  @JsonProperty("buy_link")
  private String buyLink = null;

  @JsonProperty("list_link")
  private String listLink = null;

  public HomeDetailsModulesServers icon(String icon) {
    this.icon = icon;
    return this;
  }

  /**
   * The icon for dedicated servers.
   * @return icon
  **/
  @Schema(example = "server", description = "The icon for dedicated servers.")
  @NotNull

  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesServers viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

  /**
   * Link to view server.
   * @return viewLink
  **/
  @Schema(example = "view_server", description = "Link to view server.")
  @NotNull

  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesServers heading(String heading) {
    this.heading = heading;
    return this;
  }

  /**
   * Heading for dedicated servers.
   * @return heading
  **/
  @Schema(example = "Dedicated Servers", description = "Heading for dedicated servers.")
  @NotNull

  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesServers buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

  /**
   * Link to order server.
   * @return buyLink
  **/
  @Schema(example = "order_server", description = "Link to order server.")
  @NotNull

  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesServers listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }

  /**
   * Link to view servers list.
   * @return listLink
  **/
  @Schema(example = "view_servers_list", description = "Link to view servers list.")
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
    return Objects.equals(this.icon, homeDetailsModulesServers.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesServers.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesServers.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesServers.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesServers.listLink);
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
