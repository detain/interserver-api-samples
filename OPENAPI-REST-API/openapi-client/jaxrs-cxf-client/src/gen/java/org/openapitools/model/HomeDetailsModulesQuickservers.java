package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for QuickServer services.
 */
@ApiModel(description="Dashboard module configuration for QuickServer services.")

public class HomeDetailsModulesQuickservers  {
  
 /**
  * The icon for quick servers.
  */
  @ApiModelProperty(example = "database", value = "The icon for quick servers.")

  private String icon;

 /**
  * Link to view quick servers.
  */
  @ApiModelProperty(example = "view_qs", value = "Link to view quick servers.")

  private String viewLink;

 /**
  * Heading for quick servers.
  */
  @ApiModelProperty(example = "Quick Servers", value = "Heading for quick servers.")

  private String heading;

 /**
  * Link to order quick server.
  */
  @ApiModelProperty(example = "order_quickserver", value = "Link to order quick server.")

  private String buyLink;

 /**
  * Link to view quick servers list.
  */
  @ApiModelProperty(example = "view_quickservers_list", value = "Link to view quick servers list.")

  private String listLink;
 /**
   * The icon for quick servers.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesQuickservers icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view quick servers.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesQuickservers viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for quick servers.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesQuickservers heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order quick server.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesQuickservers buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view quick servers list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesQuickservers listLink(String listLink) {
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
    HomeDetailsModulesQuickservers homeDetailsModulesQuickservers = (HomeDetailsModulesQuickservers) o;
    return Objects.equals(this.icon, homeDetailsModulesQuickservers.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesQuickservers.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesQuickservers.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesQuickservers.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesQuickservers.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesQuickservers {\n");
    
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
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

