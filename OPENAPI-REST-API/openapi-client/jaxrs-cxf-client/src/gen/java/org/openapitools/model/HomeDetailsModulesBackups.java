package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Dashboard module configuration for backup storage services.
 */
@ApiModel(description="Dashboard module configuration for backup storage services.")

public class HomeDetailsModulesBackups  {
  
 /**
  * The icon for storages.
  */
  @ApiModelProperty(example = "warehouse", value = "The icon for storages.")

  private String icon;

 /**
  * Link to view backup.
  */
  @ApiModelProperty(example = "view_backup", value = "Link to view backup.")

  private String viewLink;

 /**
  * Heading for storages.
  */
  @ApiModelProperty(example = "Storages", value = "Heading for storages.")

  private String heading;

 /**
  * Link to order storage.
  */
  @ApiModelProperty(example = "order_storage", value = "Link to order storage.")

  private String buyLink;

 /**
  * Link to view backups list.
  */
  @ApiModelProperty(example = "view_backups_list", value = "Link to view backups list.")

  private String listLink;
 /**
   * The icon for storages.
   * @return icon
  **/
  @JsonProperty("icon")
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesBackups icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view backup.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesBackups viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for storages.
   * @return heading
  **/
  @JsonProperty("heading")
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesBackups heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order storage.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesBackups buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view backups list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesBackups listLink(String listLink) {
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
    HomeDetailsModulesBackups homeDetailsModulesBackups = (HomeDetailsModulesBackups) o;
    return Objects.equals(this.icon, homeDetailsModulesBackups.icon) &&
        Objects.equals(this.viewLink, homeDetailsModulesBackups.viewLink) &&
        Objects.equals(this.heading, homeDetailsModulesBackups.heading) &&
        Objects.equals(this.buyLink, homeDetailsModulesBackups.buyLink) &&
        Objects.equals(this.listLink, homeDetailsModulesBackups.listLink);
  }

  @Override
  public int hashCode() {
    return Objects.hash(icon, viewLink, heading, buyLink, listLink);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesBackups {\n");
    
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

