package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteServiceInfo  {
  
 /**
  * Website ID
  */
  @ApiModelProperty(example = "1196829", value = "Website ID")

  private String websiteId;

 /**
  * Website server
  */
  @ApiModelProperty(example = "543", value = "Website server")

  private String websiteServer;

 /**
  * Website type
  */
  @ApiModelProperty(example = "11363", value = "Website type")

  private String websiteType;

 /**
  * Currency of the website
  */
  @ApiModelProperty(example = "USD", value = "Currency of the website")

  private String websiteCurrency;

 /**
  * Order date of the website
  */
  @ApiModelProperty(example = "2023-03-16T22:51:54.000Z", value = "Order date of the website")

  private String websiteOrderDate;

 /**
  * Customer ID of the website
  */
  @ApiModelProperty(example = "85872", value = "Customer ID of the website")

  private String websiteCustid;

 /**
  * IP address of the website
  */
  @ApiModelProperty(example = "74.50.80.15", value = "IP address of the website")

  private String websiteIp;

 /**
  * Status of the website
  */
  @ApiModelProperty(example = "active", value = "Status of the website")

  private String websiteStatus;

 /**
  * Invoice of the website
  */
  @ApiModelProperty(example = "20261994", value = "Invoice of the website")

  private String websiteInvoice;

 /**
  * Coupon for the website
  */
  @ApiModelProperty(example = "1690", value = "Coupon for the website")

  private String websiteCoupon;

 /**
  * Extra information in JSON format for the website
  */
  @ApiModelProperty(example = "[]", value = "Extra information in JSON format for the website")

  private String websiteExtra;

 /**
  * Hostname of the website
  */
  @ApiModelProperty(example = "vintagevultures.com", value = "Hostname of the website")

  private String websiteHostname;

 /**
  * Comment for the website
  */
  @ApiModelProperty(value = "Comment for the website")

  private String websiteComment;

 /**
  * Username for the website
  */
  @ApiModelProperty(example = "vintagev", value = "Username for the website")

  private String websiteUsername;

 /**
  * Server status of the website
  */
  @ApiModelProperty(value = "Server status of the website")

  private String websiteServerStatus;
 /**
   * Website ID
   * @return websiteId
  **/
  @JsonProperty("website_id")
  public String getWebsiteId() {
    return websiteId;
  }

  public void setWebsiteId(String websiteId) {
    this.websiteId = websiteId;
  }

  public WebsiteServiceInfo websiteId(String websiteId) {
    this.websiteId = websiteId;
    return this;
  }

 /**
   * Website server
   * @return websiteServer
  **/
  @JsonProperty("website_server")
  public String getWebsiteServer() {
    return websiteServer;
  }

  public void setWebsiteServer(String websiteServer) {
    this.websiteServer = websiteServer;
  }

  public WebsiteServiceInfo websiteServer(String websiteServer) {
    this.websiteServer = websiteServer;
    return this;
  }

 /**
   * Website type
   * @return websiteType
  **/
  @JsonProperty("website_type")
  public String getWebsiteType() {
    return websiteType;
  }

  public void setWebsiteType(String websiteType) {
    this.websiteType = websiteType;
  }

  public WebsiteServiceInfo websiteType(String websiteType) {
    this.websiteType = websiteType;
    return this;
  }

 /**
   * Currency of the website
   * @return websiteCurrency
  **/
  @JsonProperty("website_currency")
  public String getWebsiteCurrency() {
    return websiteCurrency;
  }

  public void setWebsiteCurrency(String websiteCurrency) {
    this.websiteCurrency = websiteCurrency;
  }

  public WebsiteServiceInfo websiteCurrency(String websiteCurrency) {
    this.websiteCurrency = websiteCurrency;
    return this;
  }

 /**
   * Order date of the website
   * @return websiteOrderDate
  **/
  @JsonProperty("website_order_date")
  public String getWebsiteOrderDate() {
    return websiteOrderDate;
  }

  public void setWebsiteOrderDate(String websiteOrderDate) {
    this.websiteOrderDate = websiteOrderDate;
  }

  public WebsiteServiceInfo websiteOrderDate(String websiteOrderDate) {
    this.websiteOrderDate = websiteOrderDate;
    return this;
  }

 /**
   * Customer ID of the website
   * @return websiteCustid
  **/
  @JsonProperty("website_custid")
  public String getWebsiteCustid() {
    return websiteCustid;
  }

  public void setWebsiteCustid(String websiteCustid) {
    this.websiteCustid = websiteCustid;
  }

  public WebsiteServiceInfo websiteCustid(String websiteCustid) {
    this.websiteCustid = websiteCustid;
    return this;
  }

 /**
   * IP address of the website
   * @return websiteIp
  **/
  @JsonProperty("website_ip")
  public String getWebsiteIp() {
    return websiteIp;
  }

  public void setWebsiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
  }

  public WebsiteServiceInfo websiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
    return this;
  }

 /**
   * Status of the website
   * @return websiteStatus
  **/
  @JsonProperty("website_status")
  public String getWebsiteStatus() {
    return websiteStatus;
  }

  public void setWebsiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
  }

  public WebsiteServiceInfo websiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
    return this;
  }

 /**
   * Invoice of the website
   * @return websiteInvoice
  **/
  @JsonProperty("website_invoice")
  public String getWebsiteInvoice() {
    return websiteInvoice;
  }

  public void setWebsiteInvoice(String websiteInvoice) {
    this.websiteInvoice = websiteInvoice;
  }

  public WebsiteServiceInfo websiteInvoice(String websiteInvoice) {
    this.websiteInvoice = websiteInvoice;
    return this;
  }

 /**
   * Coupon for the website
   * @return websiteCoupon
  **/
  @JsonProperty("website_coupon")
  public String getWebsiteCoupon() {
    return websiteCoupon;
  }

  public void setWebsiteCoupon(String websiteCoupon) {
    this.websiteCoupon = websiteCoupon;
  }

  public WebsiteServiceInfo websiteCoupon(String websiteCoupon) {
    this.websiteCoupon = websiteCoupon;
    return this;
  }

 /**
   * Extra information in JSON format for the website
   * @return websiteExtra
  **/
  @JsonProperty("website_extra")
  public String getWebsiteExtra() {
    return websiteExtra;
  }

  public void setWebsiteExtra(String websiteExtra) {
    this.websiteExtra = websiteExtra;
  }

  public WebsiteServiceInfo websiteExtra(String websiteExtra) {
    this.websiteExtra = websiteExtra;
    return this;
  }

 /**
   * Hostname of the website
   * @return websiteHostname
  **/
  @JsonProperty("website_hostname")
  public String getWebsiteHostname() {
    return websiteHostname;
  }

  public void setWebsiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
  }

  public WebsiteServiceInfo websiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
    return this;
  }

 /**
   * Comment for the website
   * @return websiteComment
  **/
  @JsonProperty("website_comment")
  public String getWebsiteComment() {
    return websiteComment;
  }

  public void setWebsiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
  }

  public WebsiteServiceInfo websiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
    return this;
  }

 /**
   * Username for the website
   * @return websiteUsername
  **/
  @JsonProperty("website_username")
  public String getWebsiteUsername() {
    return websiteUsername;
  }

  public void setWebsiteUsername(String websiteUsername) {
    this.websiteUsername = websiteUsername;
  }

  public WebsiteServiceInfo websiteUsername(String websiteUsername) {
    this.websiteUsername = websiteUsername;
    return this;
  }

 /**
   * Server status of the website
   * @return websiteServerStatus
  **/
  @JsonProperty("website_server_status")
  public String getWebsiteServerStatus() {
    return websiteServerStatus;
  }

  public void setWebsiteServerStatus(String websiteServerStatus) {
    this.websiteServerStatus = websiteServerStatus;
  }

  public WebsiteServiceInfo websiteServerStatus(String websiteServerStatus) {
    this.websiteServerStatus = websiteServerStatus;
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
    WebsiteServiceInfo websiteServiceInfo = (WebsiteServiceInfo) o;
    return Objects.equals(this.websiteId, websiteServiceInfo.websiteId) &&
        Objects.equals(this.websiteServer, websiteServiceInfo.websiteServer) &&
        Objects.equals(this.websiteType, websiteServiceInfo.websiteType) &&
        Objects.equals(this.websiteCurrency, websiteServiceInfo.websiteCurrency) &&
        Objects.equals(this.websiteOrderDate, websiteServiceInfo.websiteOrderDate) &&
        Objects.equals(this.websiteCustid, websiteServiceInfo.websiteCustid) &&
        Objects.equals(this.websiteIp, websiteServiceInfo.websiteIp) &&
        Objects.equals(this.websiteStatus, websiteServiceInfo.websiteStatus) &&
        Objects.equals(this.websiteInvoice, websiteServiceInfo.websiteInvoice) &&
        Objects.equals(this.websiteCoupon, websiteServiceInfo.websiteCoupon) &&
        Objects.equals(this.websiteExtra, websiteServiceInfo.websiteExtra) &&
        Objects.equals(this.websiteHostname, websiteServiceInfo.websiteHostname) &&
        Objects.equals(this.websiteComment, websiteServiceInfo.websiteComment) &&
        Objects.equals(this.websiteUsername, websiteServiceInfo.websiteUsername) &&
        Objects.equals(this.websiteServerStatus, websiteServiceInfo.websiteServerStatus);
  }

  @Override
  public int hashCode() {
    return Objects.hash(websiteId, websiteServer, websiteType, websiteCurrency, websiteOrderDate, websiteCustid, websiteIp, websiteStatus, websiteInvoice, websiteCoupon, websiteExtra, websiteHostname, websiteComment, websiteUsername, websiteServerStatus);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class WebsiteServiceInfo {\n");
    
    sb.append("    websiteId: ").append(toIndentedString(websiteId)).append("\n");
    sb.append("    websiteServer: ").append(toIndentedString(websiteServer)).append("\n");
    sb.append("    websiteType: ").append(toIndentedString(websiteType)).append("\n");
    sb.append("    websiteCurrency: ").append(toIndentedString(websiteCurrency)).append("\n");
    sb.append("    websiteOrderDate: ").append(toIndentedString(websiteOrderDate)).append("\n");
    sb.append("    websiteCustid: ").append(toIndentedString(websiteCustid)).append("\n");
    sb.append("    websiteIp: ").append(toIndentedString(websiteIp)).append("\n");
    sb.append("    websiteStatus: ").append(toIndentedString(websiteStatus)).append("\n");
    sb.append("    websiteInvoice: ").append(toIndentedString(websiteInvoice)).append("\n");
    sb.append("    websiteCoupon: ").append(toIndentedString(websiteCoupon)).append("\n");
    sb.append("    websiteExtra: ").append(toIndentedString(websiteExtra)).append("\n");
    sb.append("    websiteHostname: ").append(toIndentedString(websiteHostname)).append("\n");
    sb.append("    websiteComment: ").append(toIndentedString(websiteComment)).append("\n");
    sb.append("    websiteUsername: ").append(toIndentedString(websiteUsername)).append("\n");
    sb.append("    websiteServerStatus: ").append(toIndentedString(websiteServerStatus)).append("\n");
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

