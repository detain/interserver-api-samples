package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
/**
 * Dashboard module configuration for domain registration services.
 **/
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;

@Schema(description = "Dashboard module configuration for domain registration services.")

public class HomeDetailsModulesDomains   {
  private String icon = null;
  private String viewLink = null;
  private String heading = null;
  private String buyLink = null;
  private String listLink = null;

  /**
   * The icon for domains.
   **/
  public HomeDetailsModulesDomains icon(String icon) {
    this.icon = icon;
    return this;
  }

  
  
  @Schema(example = "globe", description = "The icon for domains.")
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   * Link to view domain.
   **/
  public HomeDetailsModulesDomains viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

  
  
  @Schema(example = "view_domain", description = "Link to view domain.")
  @JsonProperty("view_link")
  @NotNull
  public String getViewLink() {
    return viewLink;
  }
  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  /**
   * Heading for domains.
   **/
  public HomeDetailsModulesDomains heading(String heading) {
    this.heading = heading;
    return this;
  }

  
  
  @Schema(example = "Domains", description = "Heading for domains.")
  @JsonProperty("heading")
  @NotNull
  public String getHeading() {
    return heading;
  }
  public void setHeading(String heading) {
    this.heading = heading;
  }

  /**
   * Link to order domain.
   **/
  public HomeDetailsModulesDomains buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

  
  
  @Schema(example = "domain_order", description = "Link to order domain.")
  @JsonProperty("buy_link")
  @NotNull
  public String getBuyLink() {
    return buyLink;
  }
  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  /**
   * Link to view domains list.
   **/
  public HomeDetailsModulesDomains listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }

  
  
  @Schema(example = "view_domains_list", description = "Link to view domains list.")
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
    HomeDetailsModulesDomains homeDetailsModulesDomains = (HomeDetailsModulesDomains) o;
    return Objects.equals(icon, homeDetailsModulesDomains.icon) &&
        Objects.equals(viewLink, homeDetailsModulesDomains.viewLink) &&
        Objects.equals(heading, homeDetailsModulesDomains.heading) &&
        Objects.equals(buyLink, homeDetailsModulesDomains.buyLink) &&
        Objects.equals(listLink, homeDetailsModulesDomains.listLink);
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
