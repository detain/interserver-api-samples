package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Dashboard module configuration for software license services.")

public class HomeDetailsModulesLicenses   {
  private String icon = null;  private String viewLink = null;  private String heading = null;  private String buyLink = null;  private String listLink = null;

  /**
   * The icon for licenses.
   **/
  
  @Schema(example = "id-card", description = "The icon for licenses.")
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Link to view license.
   **/
  
  @Schema(example = "view_license", description = "Link to view license.")
  @JsonProperty("view_link")
  @NotNull
  public String getViewLink() {
    return viewLink;
  }
  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  /**
   * Heading for licenses.
   **/
  
  @Schema(example = "Licenses", description = "Heading for licenses.")
  @JsonProperty("heading")
  @NotNull
  public String getHeading() {
    return heading;
  }
  public void setHeading(String heading) {
    this.heading = heading;
  }

  /**
   * Link to order license.
   **/
  
  @Schema(example = "order_license", description = "Link to order license.")
  @JsonProperty("buy_link")
  @NotNull
  public String getBuyLink() {
    return buyLink;
  }
  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  /**
   * Link to view licenses list.
   **/
  
  @Schema(example = "view_licenses_list", description = "Link to view licenses list.")
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
