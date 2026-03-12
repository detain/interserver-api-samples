package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="A result row from the `Webhosting` `GET` request.")

public class WebsiteRow   {
  private String websiteId = null;
  private String websiteHostname = null;
  private String repeatInvoicesCost = null;
  private String websiteStatus = null;
  private String servicesName = null;
  private String websiteComment = null;

  /**
   * The id of the website.
   **/
  
  @Schema(example = "376359", required = true, description = "The id of the website.")
  @JsonProperty("website_id")
  @NotNull
  public String getWebsiteId() {
    return websiteId;
  }
  public void setWebsiteId(String websiteId) {
    this.websiteId = websiteId;
  }

  /**
   * The hostname of the website.
   **/
  
  @Schema(example = "hussfamily.com", required = true, description = "The hostname of the website.")
  @JsonProperty("website_hostname")
  @NotNull
  public String getWebsiteHostname() {
    return websiteHostname;
  }
  public void setWebsiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
  }

  /**
   * The repeat invoices cost of the website.
   **/
  
  @Schema(example = "5.99", required = true, description = "The repeat invoices cost of the website.")
  @JsonProperty("repeat_invoices_cost")
  @NotNull
  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }
  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  /**
   * The status of the website.
   **/
  
  @Schema(example = "active", required = true, description = "The status of the website.")
  @JsonProperty("website_status")
  @NotNull
  public String getWebsiteStatus() {
    return websiteStatus;
  }
  public void setWebsiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
  }

  /**
   * The services name of the website.
   **/
  
  @Schema(example = "Standard Web Hosting", required = true, description = "The services name of the website.")
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }
  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  /**
   * The comment of the website.
   **/
  
  @Schema(example = "website for manhattan project.", required = true, description = "The comment of the website.")
  @JsonProperty("website_comment")
  @NotNull
  public String getWebsiteComment() {
    return websiteComment;
  }
  public void setWebsiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteRow websiteRow = (WebsiteRow) o;
    return Objects.equals(websiteId, websiteRow.websiteId) &&
        Objects.equals(websiteHostname, websiteRow.websiteHostname) &&
        Objects.equals(repeatInvoicesCost, websiteRow.repeatInvoicesCost) &&
        Objects.equals(websiteStatus, websiteRow.websiteStatus) &&
        Objects.equals(servicesName, websiteRow.servicesName) &&
        Objects.equals(websiteComment, websiteRow.websiteComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(websiteId, websiteHostname, repeatInvoicesCost, websiteStatus, servicesName, websiteComment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteRow {\n");
    
    sb.append("    websiteId: ").append(toIndentedString(websiteId)).append("\n");
    sb.append("    websiteHostname: ").append(toIndentedString(websiteHostname)).append("\n");
    sb.append("    repeatInvoicesCost: ").append(toIndentedString(repeatInvoicesCost)).append("\n");
    sb.append("    websiteStatus: ").append(toIndentedString(websiteStatus)).append("\n");
    sb.append("    servicesName: ").append(toIndentedString(servicesName)).append("\n");
    sb.append("    websiteComment: ").append(toIndentedString(websiteComment)).append("\n");
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
