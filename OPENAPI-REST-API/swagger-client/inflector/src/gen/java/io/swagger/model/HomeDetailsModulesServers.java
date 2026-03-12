package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Dashboard module configuration for dedicated server services.
 **/
@Schema(description = "Dashboard module configuration for dedicated server services.")


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
  /**
   * The icon for dedicated servers.
   **/
  public HomeDetailsModulesServers icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @Schema(example = "server", description = "The icon for dedicated servers.")
  @JsonProperty("icon")
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

  
  @Schema(example = "view_server", description = "Link to view server.")
  @JsonProperty("view_link")
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

  
  @Schema(example = "Dedicated Servers", description = "Heading for dedicated servers.")
  @JsonProperty("heading")
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

  
  @Schema(example = "order_server", description = "Link to order server.")
  @JsonProperty("buy_link")
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

  
  @Schema(example = "view_servers_list", description = "Link to view servers list.")
  @JsonProperty("list_link")
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
