package io.swagger.model;


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

public class WebsiteServiceInfo   {
  
  @Schema(example = "1196829", description = "Website ID")
 /**
   * Website ID  
  **/
  private String websiteId = null;
  
  @Schema(example = "543", description = "Website server")
 /**
   * Website server  
  **/
  private String websiteServer = null;
  
  @Schema(example = "11363", description = "Website type")
 /**
   * Website type  
  **/
  private String websiteType = null;
  
  @Schema(example = "USD", description = "Currency of the website")
 /**
   * Currency of the website  
  **/
  private String websiteCurrency = null;
  
  @Schema(example = "2023-03-16T22:51:54.000Z", description = "Order date of the website")
 /**
   * Order date of the website  
  **/
  private String websiteOrderDate = null;
  
  @Schema(example = "85872", description = "Customer ID of the website")
 /**
   * Customer ID of the website  
  **/
  private String websiteCustid = null;
  
  @Schema(example = "74.50.80.15", description = "IP address of the website")
 /**
   * IP address of the website  
  **/
  private String websiteIp = null;
  
  @Schema(example = "active", description = "Status of the website")
 /**
   * Status of the website  
  **/
  private String websiteStatus = null;
  
  @Schema(example = "20261994", description = "Invoice of the website")
 /**
   * Invoice of the website  
  **/
  private String websiteInvoice = null;
  
  @Schema(example = "1690", description = "Coupon for the website")
 /**
   * Coupon for the website  
  **/
  private String websiteCoupon = null;
  
  @Schema(example = "[]", description = "Extra information in JSON format for the website")
 /**
   * Extra information in JSON format for the website  
  **/
  private String websiteExtra = null;
  
  @Schema(example = "vintagevultures.com", description = "Hostname of the website")
 /**
   * Hostname of the website  
  **/
  private String websiteHostname = null;
  
  @Schema(description = "Comment for the website")
 /**
   * Comment for the website  
  **/
  private String websiteComment = null;
  
  @Schema(example = "vintagev", description = "Username for the website")
 /**
   * Username for the website  
  **/
  private String websiteUsername = null;
  
  @Schema(description = "Server status of the website")
 /**
   * Server status of the website  
  **/
  private String websiteServerStatus = null;
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
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
