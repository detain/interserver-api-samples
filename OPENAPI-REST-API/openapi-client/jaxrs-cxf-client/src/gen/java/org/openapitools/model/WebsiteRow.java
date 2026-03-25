package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A result row from the `Webhosting` `GET` request.
 */
@ApiModel(description="A result row from the `Webhosting` `GET` request.")

public class WebsiteRow  {
  
 /**
  * The id of the website.
  */
  @ApiModelProperty(example = "376359", required = true, value = "The id of the website.")

  private String websiteId;

 /**
  * The hostname of the website.
  */
  @ApiModelProperty(example = "hussfamily.com", required = true, value = "The hostname of the website.")

  private String websiteHostname;

 /**
  * The repeat invoices cost of the website.
  */
  @ApiModelProperty(example = "5.99", required = true, value = "The repeat invoices cost of the website.")

  private String repeatInvoicesCost;

 /**
  * The status of the website.
  */
  @ApiModelProperty(example = "active", required = true, value = "The status of the website.")

  private String websiteStatus;

 /**
  * The services name of the website.
  */
  @ApiModelProperty(example = "Standard Web Hosting", required = true, value = "The services name of the website.")

  private String servicesName;

 /**
  * The comment of the website.
  */
  @ApiModelProperty(example = "website for manhattan project.", required = true, value = "The comment of the website.")

  private String websiteComment;
 /**
   * The id of the website.
   * @return websiteId
  **/
  @JsonProperty("website_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteRow websiteRow = (WebsiteRow) o;
    return Objects.equals(this.websiteId, websiteRow.websiteId) &&
        Objects.equals(this.websiteHostname, websiteRow.websiteHostname) &&
        Objects.equals(this.repeatInvoicesCost, websiteRow.repeatInvoicesCost) &&
        Objects.equals(this.websiteStatus, websiteRow.websiteStatus) &&
        Objects.equals(this.servicesName, websiteRow.servicesName) &&
        Objects.equals(this.websiteComment, websiteRow.websiteComment);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

