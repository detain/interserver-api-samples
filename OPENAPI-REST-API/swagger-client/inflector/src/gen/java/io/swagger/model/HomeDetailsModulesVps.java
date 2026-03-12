package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * Dashboard module configuration for VPS services.
 **/
@Schema(description = "Dashboard module configuration for VPS services.")


public class HomeDetailsModulesVps   {
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
   * The icon for VPS.
   **/
  public HomeDetailsModulesVps icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  @Schema(example = "cloud-meatball", description = "The icon for VPS.")
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Link to view VPS.
   **/
  public HomeDetailsModulesVps viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

  
  @Schema(example = "view_vps", description = "Link to view VPS.")
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }
  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  /**
   * Heading for VPS.
   **/
  public HomeDetailsModulesVps heading(String heading) {
    this.heading = heading;
    return this;
  }

  
  @Schema(example = "VPS", description = "Heading for VPS.")
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }
  public void setHeading(String heading) {
    this.heading = heading;
  }

  /**
   * Link to order VPS.
   **/
  public HomeDetailsModulesVps buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

  
  @Schema(example = "order_vps", description = "Link to order VPS.")
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }
  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  /**
   * Link to view VPS list.
   **/
  public HomeDetailsModulesVps listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }

  
  @Schema(example = "view_vps_list", description = "Link to view VPS list.")
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
    HomeDetailsModulesVps homeDetailsModulesVps = (HomeDetailsModulesVps) o;
    return Objects.equals(icon, homeDetailsModulesVps.icon) &&
        Objects.equals(viewLink, homeDetailsModulesVps.viewLink) &&
        Objects.equals(heading, homeDetailsModulesVps.heading) &&
        Objects.equals(buyLink, homeDetailsModulesVps.buyLink) &&
        Objects.equals(listLink, homeDetailsModulesVps.listLink);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
