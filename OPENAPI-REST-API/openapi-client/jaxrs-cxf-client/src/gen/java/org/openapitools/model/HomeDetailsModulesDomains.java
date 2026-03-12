package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for domain registration services.
 */
@ApiModel(description="Dashboard module configuration for domain registration services.")

public class HomeDetailsModulesDomains  {
  
 /**
  * The icon for domains.
  */
  @ApiModelProperty(example = "globe", value = "The icon for domains.")

  private String icon;

 /**
  * Link to view domain.
  */
  @ApiModelProperty(example = "view_domain", value = "Link to view domain.")

  private String viewLink;

 /**
  * Heading for domains.
  */
  @ApiModelProperty(example = "Domains", value = "Heading for domains.")

  private String heading;

 /**
  * Link to order domain.
  */
  @ApiModelProperty(example = "domain_order", value = "Link to order domain.")

  private String buyLink;

 /**
  * Link to view domains list.
  */
  @ApiModelProperty(example = "view_domains_list", value = "Link to view domains list.")

  private String listLink;
 /**
   * The icon for domains.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesDomains icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view domain.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesDomains viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for domains.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesDomains heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order domain.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesDomains buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view domains list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesDomains listLink(String listLink) {
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
    HomeDetailsModulesDomains homeDetailsModulesDomains = (HomeDetailsModulesDomains) o;
    return Objects.equals(this.icon, homeDetailsModulesDomains.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesDomains.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesDomains.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesDomains.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesDomains.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesDomains {\n");
    
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

