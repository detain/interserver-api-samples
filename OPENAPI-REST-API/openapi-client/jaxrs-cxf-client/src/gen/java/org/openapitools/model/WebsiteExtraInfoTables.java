package org.openapitools.model;

import org.openapitools.model.WebsiteTable;

import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 */
@ApiModel(description="Supplementary information tables displayed for a webhosting service (links, DNS, preview).")

public class WebsiteExtraInfoTables  {
  
  @ApiModelProperty(value = "")

  private WebsiteTable links;

  @ApiModelProperty(value = "")

  private WebsiteTable preview;

  @ApiModelProperty(value = "")

  private WebsiteTable dns;
 /**
   * Get links
   * @return links
  **/
  @JsonProperty("links")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteExtraInfoTables websiteExtraInfoTables = (WebsiteExtraInfoTables) o;
    return Objects.equals(this.links, websiteExtraInfoTables.links) &&
        Objects.equals(this.preview, websiteExtraInfoTables.preview) &&
        Objects.equals(this.dns, websiteExtraInfoTables.dns);
  }

  @Override
  public int hashCode() {
    return Objects.hash(links, preview, dns);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

