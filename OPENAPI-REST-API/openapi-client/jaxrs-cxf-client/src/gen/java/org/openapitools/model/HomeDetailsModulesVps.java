package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for VPS services.
 */
@ApiModel(description="Dashboard module configuration for VPS services.")

public class HomeDetailsModulesVps  {
  
 /**
  * The icon for VPS.
  */
  @ApiModelProperty(example = "cloud-meatball", value = "The icon for VPS.")

  private String icon;

 /**
  * Link to view VPS.
  */
  @ApiModelProperty(example = "view_vps", value = "Link to view VPS.")

  private String viewLink;

 /**
  * Heading for VPS.
  */
  @ApiModelProperty(example = "VPS", value = "Heading for VPS.")

  private String heading;

 /**
  * Link to order VPS.
  */
  @ApiModelProperty(example = "order_vps", value = "Link to order VPS.")

  private String buyLink;

 /**
  * Link to view VPS list.
  */
  @ApiModelProperty(example = "view_vps_list", value = "Link to view VPS list.")

  private String listLink;
 /**
   * The icon for VPS.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesVps icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view VPS.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesVps viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for VPS.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesVps heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order VPS.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesVps buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view VPS list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesVps listLink(String listLink) {
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
    HomeDetailsModulesVps homeDetailsModulesVps = (HomeDetailsModulesVps) o;
    return Objects.equals(this.icon, homeDetailsModulesVps.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesVps.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesVps.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesVps.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesVps.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesVps {\n");
    
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

