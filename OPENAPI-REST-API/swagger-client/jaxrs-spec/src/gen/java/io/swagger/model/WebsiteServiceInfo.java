package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class WebsiteServiceInfo   {

  private @Valid String websiteId = null;

  private @Valid String websiteServer = null;

  private @Valid String websiteType = null;

  private @Valid String websiteCurrency = null;

  private @Valid String websiteOrderDate = null;

  private @Valid String websiteCustid = null;

  private @Valid String websiteIp = null;

  private @Valid String websiteStatus = null;

  private @Valid String websiteInvoice = null;

  private @Valid String websiteCoupon = null;

  private @Valid String websiteExtra = null;

  private @Valid String websiteHostname = null;

  private @Valid String websiteComment = null;

  private @Valid String websiteUsername = null;

  private @Valid String websiteServerStatus = null;

  /**
   * Website ID
   **/
  public WebsiteServiceInfo websiteId(String websiteId) {
    this.websiteId = websiteId;
    return this;
  }

  
  @ApiModelProperty(example = "1196829", value = "Website ID")
  @JsonProperty("website_id")
  @NotNull

  public String getWebsiteId() {
    return websiteId;
  }
  public void setWebsiteId(String websiteId) {
    this.websiteId = websiteId;
  }

  /**
   * Website server
   **/
  public WebsiteServiceInfo websiteServer(String websiteServer) {
    this.websiteServer = websiteServer;
    return this;
  }

  
  @ApiModelProperty(example = "543", value = "Website server")
  @JsonProperty("website_server")
  @NotNull

  public String getWebsiteServer() {
    return websiteServer;
  }
  public void setWebsiteServer(String websiteServer) {
    this.websiteServer = websiteServer;
  }

  /**
   * Website type
   **/
  public WebsiteServiceInfo websiteType(String websiteType) {
    this.websiteType = websiteType;
    return this;
  }

  
  @ApiModelProperty(example = "11363", value = "Website type")
  @JsonProperty("website_type")
  @NotNull

  public String getWebsiteType() {
    return websiteType;
  }
  public void setWebsiteType(String websiteType) {
    this.websiteType = websiteType;
  }

  /**
   * Currency of the website
   **/
  public WebsiteServiceInfo websiteCurrency(String websiteCurrency) {
    this.websiteCurrency = websiteCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Currency of the website")
  @JsonProperty("website_currency")
  @NotNull

  public String getWebsiteCurrency() {
    return websiteCurrency;
  }
  public void setWebsiteCurrency(String websiteCurrency) {
    this.websiteCurrency = websiteCurrency;
  }

  /**
   * Order date of the website
   **/
  public WebsiteServiceInfo websiteOrderDate(String websiteOrderDate) {
    this.websiteOrderDate = websiteOrderDate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-03-16T22:51:54.000Z", value = "Order date of the website")
  @JsonProperty("website_order_date")
  @NotNull

  public String getWebsiteOrderDate() {
    return websiteOrderDate;
  }
  public void setWebsiteOrderDate(String websiteOrderDate) {
    this.websiteOrderDate = websiteOrderDate;
  }

  /**
   * Customer ID of the website
   **/
  public WebsiteServiceInfo websiteCustid(String websiteCustid) {
    this.websiteCustid = websiteCustid;
    return this;
  }

  
  @ApiModelProperty(example = "85872", value = "Customer ID of the website")
  @JsonProperty("website_custid")
  @NotNull

  public String getWebsiteCustid() {
    return websiteCustid;
  }
  public void setWebsiteCustid(String websiteCustid) {
    this.websiteCustid = websiteCustid;
  }

  /**
   * IP address of the website
   **/
  public WebsiteServiceInfo websiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
    return this;
  }

  
  @ApiModelProperty(example = "74.50.80.15", value = "IP address of the website")
  @JsonProperty("website_ip")
  @NotNull

  public String getWebsiteIp() {
    return websiteIp;
  }
  public void setWebsiteIp(String websiteIp) {
    this.websiteIp = websiteIp;
  }

  /**
   * Status of the website
   **/
  public WebsiteServiceInfo websiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
    return this;
  }

  
  @ApiModelProperty(example = "active", value = "Status of the website")
  @JsonProperty("website_status")
  @NotNull

  public String getWebsiteStatus() {
    return websiteStatus;
  }
  public void setWebsiteStatus(String websiteStatus) {
    this.websiteStatus = websiteStatus;
  }

  /**
   * Invoice of the website
   **/
  public WebsiteServiceInfo websiteInvoice(String websiteInvoice) {
    this.websiteInvoice = websiteInvoice;
    return this;
  }

  
  @ApiModelProperty(example = "20261994", value = "Invoice of the website")
  @JsonProperty("website_invoice")
  @NotNull

  public String getWebsiteInvoice() {
    return websiteInvoice;
  }
  public void setWebsiteInvoice(String websiteInvoice) {
    this.websiteInvoice = websiteInvoice;
  }

  /**
   * Coupon for the website
   **/
  public WebsiteServiceInfo websiteCoupon(String websiteCoupon) {
    this.websiteCoupon = websiteCoupon;
    return this;
  }

  
  @ApiModelProperty(example = "1690", value = "Coupon for the website")
  @JsonProperty("website_coupon")
  @NotNull

  public String getWebsiteCoupon() {
    return websiteCoupon;
  }
  public void setWebsiteCoupon(String websiteCoupon) {
    this.websiteCoupon = websiteCoupon;
  }

  /**
   * Extra information in JSON format for the website
   **/
  public WebsiteServiceInfo websiteExtra(String websiteExtra) {
    this.websiteExtra = websiteExtra;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Extra information in JSON format for the website")
  @JsonProperty("website_extra")
  @NotNull

  public String getWebsiteExtra() {
    return websiteExtra;
  }
  public void setWebsiteExtra(String websiteExtra) {
    this.websiteExtra = websiteExtra;
  }

  /**
   * Hostname of the website
   **/
  public WebsiteServiceInfo websiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
    return this;
  }

  
  @ApiModelProperty(example = "vintagevultures.com", value = "Hostname of the website")
  @JsonProperty("website_hostname")
  @NotNull

  public String getWebsiteHostname() {
    return websiteHostname;
  }
  public void setWebsiteHostname(String websiteHostname) {
    this.websiteHostname = websiteHostname;
  }

  /**
   * Comment for the website
   **/
  public WebsiteServiceInfo websiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
    return this;
  }

  
  @ApiModelProperty(value = "Comment for the website")
  @JsonProperty("website_comment")
  @NotNull

  public String getWebsiteComment() {
    return websiteComment;
  }
  public void setWebsiteComment(String websiteComment) {
    this.websiteComment = websiteComment;
  }

  /**
   * Username for the website
   **/
  public WebsiteServiceInfo websiteUsername(String websiteUsername) {
    this.websiteUsername = websiteUsername;
    return this;
  }

  
  @ApiModelProperty(example = "vintagev", value = "Username for the website")
  @JsonProperty("website_username")
  @NotNull

  public String getWebsiteUsername() {
    return websiteUsername;
  }
  public void setWebsiteUsername(String websiteUsername) {
    this.websiteUsername = websiteUsername;
  }

  /**
   * Server status of the website
   **/
  public WebsiteServiceInfo websiteServerStatus(String websiteServerStatus) {
    this.websiteServerStatus = websiteServerStatus;
    return this;
  }

  
  @ApiModelProperty(value = "Server status of the website")
  @JsonProperty("website_server_status")
  @NotNull

  public String getWebsiteServerStatus() {
    return websiteServerStatus;
  }
  public void setWebsiteServerStatus(String websiteServerStatus) {
    this.websiteServerStatus = websiteServerStatus;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    WebsiteServiceInfo websiteServiceInfo = (WebsiteServiceInfo) o;
    return Objects.equals(websiteId, websiteServiceInfo.websiteId) &&
        Objects.equals(websiteServer, websiteServiceInfo.websiteServer) &&
        Objects.equals(websiteType, websiteServiceInfo.websiteType) &&
        Objects.equals(websiteCurrency, websiteServiceInfo.websiteCurrency) &&
        Objects.equals(websiteOrderDate, websiteServiceInfo.websiteOrderDate) &&
        Objects.equals(websiteCustid, websiteServiceInfo.websiteCustid) &&
        Objects.equals(websiteIp, websiteServiceInfo.websiteIp) &&
        Objects.equals(websiteStatus, websiteServiceInfo.websiteStatus) &&
        Objects.equals(websiteInvoice, websiteServiceInfo.websiteInvoice) &&
        Objects.equals(websiteCoupon, websiteServiceInfo.websiteCoupon) &&
        Objects.equals(websiteExtra, websiteServiceInfo.websiteExtra) &&
        Objects.equals(websiteHostname, websiteServiceInfo.websiteHostname) &&
        Objects.equals(websiteComment, websiteServiceInfo.websiteComment) &&
        Objects.equals(websiteUsername, websiteServiceInfo.websiteUsername) &&
        Objects.equals(websiteServerStatus, websiteServiceInfo.websiteServerStatus);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
