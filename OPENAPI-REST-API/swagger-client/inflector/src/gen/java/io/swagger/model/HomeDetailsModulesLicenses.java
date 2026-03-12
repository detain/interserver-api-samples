package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Dashboard module configuration for software license services.
 **/
@Schema(description = "Dashboard module configuration for software license services.")


public class HomeDetailsModulesLicenses   {
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
   * The icon for licenses.
   **/
  public HomeDetailsModulesLicenses icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @Schema(example = "id-card", description = "The icon for licenses.")
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Link to view license.
   **/
  public HomeDetailsModulesLicenses viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

  
  @Schema(example = "view_license", description = "Link to view license.")
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }
  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  /**
   * Heading for licenses.
   **/
  public HomeDetailsModulesLicenses heading(String heading) {
    this.heading = heading;
    return this;
  }

  
  @Schema(example = "Licenses", description = "Heading for licenses.")
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }
  public void setHeading(String heading) {
    this.heading = heading;
  }

  /**
   * Link to order license.
   **/
  public HomeDetailsModulesLicenses buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

  
  @Schema(example = "order_license", description = "Link to order license.")
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }
  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  /**
   * Link to view licenses list.
   **/
  public HomeDetailsModulesLicenses listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }

  
  @Schema(example = "view_licenses_list", description = "Link to view licenses list.")
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
    HomeDetailsModulesLicenses homeDetailsModulesLicenses = (HomeDetailsModulesLicenses) o;
    return Objects.equals(icon, homeDetailsModulesLicenses.icon) &&
        Objects.equals(viewLink, homeDetailsModulesLicenses.viewLink) &&
        Objects.equals(heading, homeDetailsModulesLicenses.heading) &&
        Objects.equals(buyLink, homeDetailsModulesLicenses.buyLink) &&
        Objects.equals(listLink, homeDetailsModulesLicenses.listLink);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
