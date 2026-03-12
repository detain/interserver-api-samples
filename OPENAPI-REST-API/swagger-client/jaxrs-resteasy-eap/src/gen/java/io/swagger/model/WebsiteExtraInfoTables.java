package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsiteTable;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Supplementary information tables displayed for a webhosting service (links, DNS, preview).")

public class WebsiteExtraInfoTables   {
  private WebsiteTable links = null;
  private WebsiteTable preview = null;
  private WebsiteTable dns = null;

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("links")
  @NotNull
  public WebsiteTable getLinks() {
    return links;
  }
  public void setLinks(WebsiteTable links) {
    this.links = links;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("preview")
  @NotNull
  public WebsiteTable getPreview() {
    return preview;
  }
  public void setPreview(WebsiteTable preview) {
    this.preview = preview;
  }

  /**
   **/
  
  @Schema(description = "")
  @JsonProperty("dns")
  @NotNull
  public WebsiteTable getDns() {
    return dns;
  }
  public void setDns(WebsiteTable dns) {
    this.dns = dns;
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
    return Objects.equals(links, websiteExtraInfoTables.links) &&
        Objects.equals(preview, websiteExtraInfoTables.preview) &&
        Objects.equals(dns, websiteExtraInfoTables.dns);
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
