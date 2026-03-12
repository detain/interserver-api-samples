package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for dedicated server services.
 */
@ApiModel(description="Dashboard module configuration for dedicated server services.")

public class HomeDetailsModulesServers  {
  
 /**
  * The icon for dedicated servers.
  */
  @ApiModelProperty(example = "server", value = "The icon for dedicated servers.")

  private String icon;

 /**
  * Link to view server.
  */
  @ApiModelProperty(example = "view_server", value = "Link to view server.")

  private String viewLink;

 /**
  * Heading for dedicated servers.
  */
  @ApiModelProperty(example = "Dedicated Servers", value = "Heading for dedicated servers.")

  private String heading;

 /**
  * Link to order server.
  */
  @ApiModelProperty(example = "order_server", value = "Link to order server.")

  private String buyLink;

 /**
  * Link to view servers list.
  */
  @ApiModelProperty(example = "view_servers_list", value = "Link to view servers list.")

  private String listLink;
 /**
   * The icon for dedicated servers.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesServers icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view server.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesServers viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for dedicated servers.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesServers heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order server.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesServers buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view servers list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesServers listLink(String listLink) {
    this.listLink = listLink;
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

