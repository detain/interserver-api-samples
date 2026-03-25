package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for webhosting services.
 */
@ApiModel(description="Dashboard module configuration for webhosting services.")

public class HomeDetailsModulesWebhosting  {
  
 /**
  * The icon for web hosting.
  */
  @ApiModelProperty(example = "window-maximize", value = "The icon for web hosting.")

  private String icon;

 /**
  * Link to view website.
  */
  @ApiModelProperty(example = "view_website", value = "Link to view website.")

  private String viewLink;

 /**
  * Heading for web hosting.
  */
  @ApiModelProperty(example = "Web Hosting", value = "Heading for web hosting.")

  private String heading;

 /**
  * Link to order website.
  */
  @ApiModelProperty(example = "order_website", value = "Link to order website.")

  private String buyLink;

 /**
  * Link to view websites list.
  */
  @ApiModelProperty(example = "view_websites_list", value = "Link to view websites list.")

  private String listLink;
 /**
   * The icon for web hosting.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesWebhosting icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view website.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesWebhosting viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for web hosting.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesWebhosting heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order website.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesWebhosting buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view websites list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesWebhosting listLink(String listLink) {
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
    HomeDetailsModulesWebhosting homeDetailsModulesWebhosting = (HomeDetailsModulesWebhosting) o;
    return Objects.equals(this.icon, homeDetailsModulesWebhosting.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesWebhosting.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesWebhosting.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesWebhosting.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesWebhosting.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesWebhosting {\n");
    
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

