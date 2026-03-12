package io.swagger.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.model.WebsiteTable;
import io.swagger.v3.oas.annotations.media.Schema;
import io.micronaut.core.annotation.Introspected;
import io.micronaut.validation.Validated;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 */
@Schema(description = "Supplementary information tables displayed for a webhosting service (links, DNS, preview).")
@Validated
@Introspected

public class WebsiteExtraInfoTables   {
  @JsonProperty("links")
  private WebsiteTable links = null;

  @JsonProperty("preview")
  private WebsiteTable preview = null;

  @JsonProperty("dns")
  private WebsiteTable dns = null;

  public WebsiteExtraInfoTables links(WebsiteTable links) {
    this.links = links;
    return this;
  }

  /**
   * Get links
   * @return links
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public WebsiteTable getLinks() {
    return links;
  }

  public void setLinks(WebsiteTable links) {
    this.links = links;
  }

  public WebsiteExtraInfoTables preview(WebsiteTable preview) {
    this.preview = preview;
    return this;
  }

  /**
   * Get preview
   * @return preview
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public WebsiteTable getPreview() {
    return preview;
  }

  public void setPreview(WebsiteTable preview) {
    this.preview = preview;
  }

  public WebsiteExtraInfoTables dns(WebsiteTable dns) {
    this.dns = dns;
    return this;
  }

  /**
   * Get dns
   * @return dns
  **/
  @Schema(description = "")
  @NotNull

  @Valid
  public WebsiteTable getDns() {
    return dns;
  }

  public void setDns(WebsiteTable dns) {
    this.dns = dns;
  }


  @Override
  public boolean equals(java.lang.Object o) {
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
