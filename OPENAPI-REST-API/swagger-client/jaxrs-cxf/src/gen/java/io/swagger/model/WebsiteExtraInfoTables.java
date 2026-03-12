package io.swagger.model;

import io.swagger.model.WebsiteTable;
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
  * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 **/
@Schema(description="Supplementary information tables displayed for a webhosting service (links, DNS, preview).")
public class WebsiteExtraInfoTables   {
  
  @Schema(description = "")
  private WebsiteTable links = null;
  
  @Schema(description = "")
  private WebsiteTable preview = null;
  
  @Schema(description = "")
  private WebsiteTable dns = null;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
  @NotNull
  public WebsiteTable getLinks() {
    return links;
  }

  public void setLinks(WebsiteTable links) {
    this.links = links;
  }

  public WebsiteExtraInfoTables links(WebsiteTable links) {
    this.links = links;
    return this;
  }

 /**
   * Get preview
   * @return preview
  **/
  @JsonProperty("preview")
  @NotNull
  public WebsiteTable getPreview() {
    return preview;
  }

  public void setPreview(WebsiteTable preview) {
    this.preview = preview;
  }

  public WebsiteExtraInfoTables preview(WebsiteTable preview) {
    this.preview = preview;
    return this;
  }

 /**
   * Get dns
   * @return dns
  **/
  @JsonProperty("dns")
  @NotNull
  public WebsiteTable getDns() {
    return dns;
  }

  public void setDns(WebsiteTable dns) {
    this.dns = dns;
  }

  public WebsiteExtraInfoTables dns(WebsiteTable dns) {
    this.dns = dns;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteExtraInfoTables {\n");
    
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    preview: ").append(toIndentedString(preview)).append("\n");
    sb.append("    dns: ").append(toIndentedString(dns)).append("\n");
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
