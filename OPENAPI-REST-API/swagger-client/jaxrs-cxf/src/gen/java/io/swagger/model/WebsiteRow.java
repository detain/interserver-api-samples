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
  * A result row from the `Webhosting` `GET` request.
 **/
@Schema(description="A result row from the `Webhosting` `GET` request.")
public class WebsiteRow   {
  
  @Schema(example = "376359", required = true, description = "The id of the website.")
 /**
   * The id of the website.  
  **/
  private String websiteId = null;
  
  @Schema(example = "hussfamily.com", required = true, description = "The hostname of the website.")
 /**
   * The hostname of the website.  
  **/
  private String websiteHostname = null;
  
  @Schema(example = "5.99", required = true, description = "The repeat invoices cost of the website.")
 /**
   * The repeat invoices cost of the website.  
  **/
  private String repeatInvoicesCost = null;
  
  @Schema(example = "active", required = true, description = "The status of the website.")
 /**
   * The status of the website.  
  **/
  private String websiteStatus = null;
  
  @Schema(example = "Standard Web Hosting", required = true, description = "The services name of the website.")
 /**
   * The services name of the website.  
  **/
  private String servicesName = null;
  
  @Schema(example = "website for manhattan project.", required = true, description = "The comment of the website.")
 /**
   * The comment of the website.  
  **/
  private String websiteComment = null;
 /**
   * The id of the website.
   * @return websiteId
  **/
  @JsonProperty("website_id")
  @NotNull
  public String getWebsiteId() {
    return websiteId;
  }

  public void setWebsiteId(String websiteId) {
    this.websiteId = websiteId;
  }

  public WebsiteRow websiteId(String websiteId) {
    this.websiteId = websiteId;
    return this;
  }

 /**
   * The hostname of the website.
   * @return websiteHostname
  **/
  @JsonProperty("website_hostname")
  @NotNull
  public String getWebsiteHostname() {
    return websiteHostname;
  }

  public void setWebsiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
  }

  public WebsiteRow websiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
    return this;
  }

 /**
   * The repeat invoices cost of the website.
   * @return repeatInvoicesCost
  **/
  @JsonProperty("repeat_invoices_cost")
  @NotNull
  public String getRepeatInvoicesCost() {
    return repeatInvoicesCost;
  }

  public void setRepeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
  }

  public WebsiteRow repeatInvoicesCost(String repeatInvoicesCost) {
    this.repeatInvoicesCost = repeatInvoicesCost;
    return this;
  }

 /**
   * The status of the website.
   * @return websiteStatus
  **/
  @JsonProperty("website_status")
  @NotNull
  public String getWebsiteStatus() {
    return websiteStatus;
  }

  public void setWebsiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
  }

  public WebsiteRow websiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
    return this;
  }

 /**
   * The services name of the website.
   * @return servicesName
  **/
  @JsonProperty("services_name")
  @NotNull
  public String getServicesName() {
    return servicesName;
  }

  public void setServicesName(String servicesName) {
    this.servicesName = servicesName;
  }

  public WebsiteRow servicesName(String servicesName) {
    this.servicesName = servicesName;
    return this;
  }

 /**
   * The comment of the website.
   * @return websiteComment
  **/
  @JsonProperty("website_comment")
  @NotNull
  public String getWebsiteComment() {
    return websiteComment;
  }

  public void setWebsiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
  }

  public WebsiteRow websiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
    return this;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
