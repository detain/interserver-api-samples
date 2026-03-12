package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

/**
  * Dashboard module configuration for domain registration services.
 **/
@Schema(description="Dashboard module configuration for domain registration services.")
public class HomeDetailsModulesDomains   {
  
  @Schema(example = "globe", description = "The icon for domains.")
 /**
   * The icon for domains.  
  **/
  private String icon = null;
  
  @Schema(example = "view_domain", description = "Link to view domain.")
 /**
   * Link to view domain.  
  **/
  private String viewLink = null;
  
  @Schema(example = "Domains", description = "Heading for domains.")
 /**
   * Heading for domains.  
  **/
  private String heading = null;
  
  @Schema(example = "domain_order", description = "Link to order domain.")
 /**
   * Link to order domain.  
  **/
  private String buyLink = null;
  
  @Schema(example = "view_domains_list", description = "Link to view domains list.")
 /**
   * Link to view domains list.  
  **/
  private String listLink = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
