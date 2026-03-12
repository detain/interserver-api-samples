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
  * Dashboard module configuration for dedicated server services.
 **/
@Schema(description="Dashboard module configuration for dedicated server services.")
public class HomeDetailsModulesServers   {
  
  @Schema(example = "server", description = "The icon for dedicated servers.")
 /**
   * The icon for dedicated servers.  
  **/
  private String icon = null;
  
  @Schema(example = "view_server", description = "Link to view server.")
 /**
   * Link to view server.  
  **/
  private String viewLink = null;
  
  @Schema(example = "Dedicated Servers", description = "Heading for dedicated servers.")
 /**
   * Heading for dedicated servers.  
  **/
  private String heading = null;
  
  @Schema(example = "order_server", description = "Link to order server.")
 /**
   * Link to order server.  
  **/
  private String buyLink = null;
  
  @Schema(example = "view_servers_list", description = "Link to view servers list.")
 /**
   * Link to view servers list.  
  **/
  private String listLink = null;
 /**
   * The icon for dedicated servers.
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

  public HomeDetailsModulesServers icon(String icon) {
    this.icon = icon;
    return this;
  }

 /**
   * Link to view server.
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

  public HomeDetailsModulesServers viewLink(String viewLink) {
    this.viewLink = viewLink;
    return this;
  }

 /**
   * Heading for dedicated servers.
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

  public HomeDetailsModulesServers heading(String heading) {
    this.heading = heading;
    return this;
  }

 /**
   * Link to order server.
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

  public HomeDetailsModulesServers buyLink(String buyLink) {
    this.buyLink = buyLink;
    return this;
  }

 /**
   * Link to view servers list.
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

  public HomeDetailsModulesServers listLink(String listLink) {
    this.listLink = listLink;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HomeDetailsModulesServers {\n");
    
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
