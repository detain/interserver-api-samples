package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * Dashboard module configuration for QuickServer services.
 **/
@Schema(description="Dashboard module configuration for QuickServer services.")
public class HomeDetailsModulesQuickservers   {
  
  @Schema(example = "database", description = "The icon for quick servers.")
 /**
   * The icon for quick servers.  
  **/
  private String icon = null;
  
  @Schema(example = "view_qs", description = "Link to view quick servers.")
 /**
   * Link to view quick servers.  
  **/
  private String viewLink = null;
  
  @Schema(example = "Quick Servers", description = "Heading for quick servers.")
 /**
   * Heading for quick servers.  
  **/
  private String heading = null;
  
  @Schema(example = "order_quickserver", description = "Link to order quick server.")
 /**
   * Link to order quick server.  
  **/
  private String buyLink = null;
  
  @Schema(example = "view_quickservers_list", description = "Link to view quick servers list.")
 /**
   * Link to view quick servers list.  
  **/
  private String listLink = null;
 /**
   * The icon for quick servers.
   * @return icon
  **/
  @JsonProperty("icon")
  @NotNull
  public String getIcon() {
    return icon;
  }

  public void setIcon(String icon) {
    this.icon = icon;
  }

  public HomeDetailsModulesQuickservers icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view quick servers.
   * @return viewLink
  **/
  @JsonProperty("view_link")
  @NotNull
  public String getViewLink() {
    return viewLink;
  }

  public void setViewLink(String viewLink) {
    this.viewLink = viewLink;
  }

  public HomeDetailsModulesQuickservers viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for quick servers.
   * @return heading
  **/
  @JsonProperty("heading")
  @NotNull
  public String getHeading() {
    return heading;
  }

  public void setHeading(String heading) {
    this.heading = heading;
  }

  public HomeDetailsModulesQuickservers heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order quick server.
   * @return buyLink
  **/
  @JsonProperty("buy_link")
  @NotNull
  public String getBuyLink() {
    return buyLink;
  }

  public void setBuyLink(String buyLink) {
    this.buyLink = buyLink;
  }

  public HomeDetailsModulesQuickservers buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view quick servers list.
   * @return listLink
  **/
  @JsonProperty("list_link")
  @NotNull
  public String getListLink() {
    return listLink;
  }

  public void setListLink(String listLink) {
    this.listLink = listLink;
  }

  public HomeDetailsModulesQuickservers listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesQuickservers {\n");
    
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
