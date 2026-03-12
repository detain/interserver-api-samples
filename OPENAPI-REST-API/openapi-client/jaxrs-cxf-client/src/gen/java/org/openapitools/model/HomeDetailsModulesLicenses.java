package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for software license services.
 */
@ApiModel(description="Dashboard module configuration for software license services.")

public class HomeDetailsModulesLicenses  {
  
 /**
  * The icon for licenses.
  */
  @ApiModelProperty(example = "id-card", value = "The icon for licenses.")

  private String icon;

 /**
  * Link to view license.
  */
  @ApiModelProperty(example = "view_license", value = "Link to view license.")

  private String viewLink;

 /**
  * Heading for licenses.
  */
  @ApiModelProperty(example = "Licenses", value = "Heading for licenses.")

  private String heading;

 /**
  * Link to order license.
  */
  @ApiModelProperty(example = "order_license", value = "Link to order license.")

  private String buyLink;

 /**
  * Link to view licenses list.
  */
  @ApiModelProperty(example = "view_licenses_list", value = "Link to view licenses list.")

  private String listLink;
 /**
   * The icon for licenses.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesLicenses icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view license.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesLicenses viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for licenses.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesLicenses heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order license.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesLicenses buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view licenses list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesLicenses listLink(String listLink) {
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
    HomeDetailsModulesLicenses homeDetailsModulesLicenses = (HomeDetailsModulesLicenses) o;
    return Objects.equals(this.icon, homeDetailsModulesLicenses.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesLicenses.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesLicenses.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesLicenses.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesLicenses.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesLicenses {\n");
    
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

