package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * Dashboard module configuration for domain registration services.
 */




public class HomeDetailsModulesDomains   {
  private String icon = null;

  private String viewLink = null;

  private String heading = null;

  private String buyLink = null;

  private String listLink = null;

  public HomeDetailsModulesDomains icon(String icon) {
    this.icon = icon;
    return this;
  }

  /**
   * The icon for domains.
   * @return icon
   **/
    public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesDomains viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

  /**
   * Link to view domain.
   * @return viewLink
   **/
    public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesDomains heading(String heading) {
    this.heading = heading;
    return this;
  }

  /**
   * Heading for domains.
   * @return heading
   **/
    public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesDomains buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

  /**
   * Link to order domain.
   * @return buyLink
   **/
    public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesDomains listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }

  /**
   * Link to view domains list.
   * @return listLink
   **/
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
