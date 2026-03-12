package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailServiceInfo   {

  private @Valid String mailId = null;

  private @Valid String mailUsername = null;

  private @Valid String mailType = null;

  private @Valid String mailCurrency = null;

  private @Valid String mailOrderDate = null;

  private @Valid String mailCustid = null;

  private @Valid String mailQuota = null;

  private @Valid String mailIp = null;

  private @Valid String mailStatus = null;

  private @Valid String mailInvoice = null;

  private @Valid String mailCoupon = null;

  private @Valid String mailExtra = null;

  private @Valid String mailServerStatus = null;

  private @Valid String mailComment = null;

  /**
   * The ID of the mail service.
   **/
  public MailServiceInfo mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

  
  @ApiModelProperty(example = "43171", required = true, value = "The ID of the mail service.")
  @JsonProperty("mail_id")
  @NotNull

  public String getMailId() {
    return mailId;
  }
  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  /**
   * The username associated with the mail service.
   **/
  public MailServiceInfo mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

  
  @ApiModelProperty(value = "The username associated with the mail service.")
  @JsonProperty("mail_username")
  @NotNull

  public String getMailUsername() {
    return mailUsername;
  }
  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  /**
   * The type of mail service.
   **/
  public MailServiceInfo mailType(String mailType) {
    this.mailType = mailType;
    return this;
  }

  
  @ApiModelProperty(example = "10880", required = true, value = "The type of mail service.")
  @JsonProperty("mail_type")
  @NotNull

  public String getMailType() {
    return mailType;
  }
  public void setMailType(String mailType) {
    this.mailType = mailType;
  }

  /**
   * The currency of the mail service.
   **/
  public MailServiceInfo mailCurrency(String mailCurrency) {
    this.mailCurrency = mailCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", required = true, value = "The currency of the mail service.")
  @JsonProperty("mail_currency")
  @NotNull

  public String getMailCurrency() {
    return mailCurrency;
  }
  public void setMailCurrency(String mailCurrency) {
    this.mailCurrency = mailCurrency;
  }

  /**
   * The order date of the mail service.
   **/
  public MailServiceInfo mailOrderDate(String mailOrderDate) {
    this.mailOrderDate = mailOrderDate;
    return this;
  }

  
  @ApiModelProperty(example = "2023-07-16T00:55:05.000Z", required = true, value = "The order date of the mail service.")
  @JsonProperty("mail_order_date")
  @NotNull

  public String getMailOrderDate() {
    return mailOrderDate;
  }
  public void setMailOrderDate(String mailOrderDate) {
    this.mailOrderDate = mailOrderDate;
  }

  /**
   * The customer ID associated with the mail service.
   **/
  public MailServiceInfo mailCustid(String mailCustid) {
    this.mailCustid = mailCustid;
    return this;
  }

  
  @ApiModelProperty(example = "771282", required = true, value = "The customer ID associated with the mail service.")
  @JsonProperty("mail_custid")
  @NotNull

  public String getMailCustid() {
    return mailCustid;
  }
  public void setMailCustid(String mailCustid) {
    this.mailCustid = mailCustid;
  }

  /**
   * The mail quota for the service.
   **/
  public MailServiceInfo mailQuota(String mailQuota) {
    this.mailQuota = mailQuota;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "The mail quota for the service.")
  @JsonProperty("mail_quota")
  @NotNull

  public String getMailQuota() {
    return mailQuota;
  }
  public void setMailQuota(String mailQuota) {
    this.mailQuota = mailQuota;
  }

  /**
   * The IP address associated with the mail service.
   **/
  public MailServiceInfo mailIp(String mailIp) {
    this.mailIp = mailIp;
    return this;
  }

  
  @ApiModelProperty(value = "The IP address associated with the mail service.")
  @JsonProperty("mail_ip")
  @NotNull

  public String getMailIp() {
    return mailIp;
  }
  public void setMailIp(String mailIp) {
    this.mailIp = mailIp;
  }

  /**
   * The status of the mail service.
   **/
  public MailServiceInfo mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

  
  @ApiModelProperty(example = "expired", required = true, value = "The status of the mail service.")
  @JsonProperty("mail_status")
  @NotNull

  public String getMailStatus() {
    return mailStatus;
  }
  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  /**
   * The invoice ID of the mail service.
   **/
  public MailServiceInfo mailInvoice(String mailInvoice) {
    this.mailInvoice = mailInvoice;
    return this;
  }

  
  @ApiModelProperty(example = "20410322", required = true, value = "The invoice ID of the mail service.")
  @JsonProperty("mail_invoice")
  @NotNull

  public String getMailInvoice() {
    return mailInvoice;
  }
  public void setMailInvoice(String mailInvoice) {
    this.mailInvoice = mailInvoice;
  }

  /**
   * The coupon associated with the mail service.
   **/
  public MailServiceInfo mailCoupon(String mailCoupon) {
    this.mailCoupon = mailCoupon;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "The coupon associated with the mail service.")
  @JsonProperty("mail_coupon")
  @NotNull

  public String getMailCoupon() {
    return mailCoupon;
  }
  public void setMailCoupon(String mailCoupon) {
    this.mailCoupon = mailCoupon;
  }

  /**
   * Additional information for the mail service.
   **/
  public MailServiceInfo mailExtra(String mailExtra) {
    this.mailExtra = mailExtra;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Additional information for the mail service.")
  @JsonProperty("mail_extra")
  @NotNull

  public String getMailExtra() {
    return mailExtra;
  }
  public void setMailExtra(String mailExtra) {
    this.mailExtra = mailExtra;
  }

  /**
   * The server status of the mail service.
   **/
  public MailServiceInfo mailServerStatus(String mailServerStatus) {
    this.mailServerStatus = mailServerStatus;
    return this;
  }

  
  @ApiModelProperty(value = "The server status of the mail service.")
  @JsonProperty("mail_server_status")
  @NotNull

  public String getMailServerStatus() {
    return mailServerStatus;
  }
  public void setMailServerStatus(String mailServerStatus) {
    this.mailServerStatus = mailServerStatus;
  }

  /**
   * Additional comments for the mail service.
   **/
  public MailServiceInfo mailComment(String mailComment) {
    this.mailComment = mailComment;
    return this;
  }

  
  @ApiModelProperty(value = "Additional comments for the mail service.")
  @JsonProperty("mail_comment")
  @NotNull

  public String getMailComment() {
    return mailComment;
  }
  public void setMailComment(String mailComment) {
    this.mailComment = mailComment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    MailServiceInfo mailServiceInfo = (MailServiceInfo) o;
    return Objects.equals(mailId, mailServiceInfo.mailId) &&
        Objects.equals(mailUsername, mailServiceInfo.mailUsername) &&
        Objects.equals(mailType, mailServiceInfo.mailType) &&
        Objects.equals(mailCurrency, mailServiceInfo.mailCurrency) &&
        Objects.equals(mailOrderDate, mailServiceInfo.mailOrderDate) &&
        Objects.equals(mailCustid, mailServiceInfo.mailCustid) &&
        Objects.equals(mailQuota, mailServiceInfo.mailQuota) &&
        Objects.equals(mailIp, mailServiceInfo.mailIp) &&
        Objects.equals(mailStatus, mailServiceInfo.mailStatus) &&
        Objects.equals(mailInvoice, mailServiceInfo.mailInvoice) &&
        Objects.equals(mailCoupon, mailServiceInfo.mailCoupon) &&
        Objects.equals(mailExtra, mailServiceInfo.mailExtra) &&
        Objects.equals(mailServerStatus, mailServiceInfo.mailServerStatus) &&
        Objects.equals(mailComment, mailServiceInfo.mailComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mailId, mailUsername, mailType, mailCurrency, mailOrderDate, mailCustid, mailQuota, mailIp, mailStatus, mailInvoice, mailCoupon, mailExtra, mailServerStatus, mailComment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailServiceInfo {\n");
    
    sb.append("    mailId: ").append(toIndentedString(mailId)).append("\n");
    sb.append("    mailUsername: ").append(toIndentedString(mailUsername)).append("\n");
    sb.append("    mailType: ").append(toIndentedString(mailType)).append("\n");
    sb.append("    mailCurrency: ").append(toIndentedString(mailCurrency)).append("\n");
    sb.append("    mailOrderDate: ").append(toIndentedString(mailOrderDate)).append("\n");
    sb.append("    mailCustid: ").append(toIndentedString(mailCustid)).append("\n");
    sb.append("    mailQuota: ").append(toIndentedString(mailQuota)).append("\n");
    sb.append("    mailIp: ").append(toIndentedString(mailIp)).append("\n");
    sb.append("    mailStatus: ").append(toIndentedString(mailStatus)).append("\n");
    sb.append("    mailInvoice: ").append(toIndentedString(mailInvoice)).append("\n");
    sb.append("    mailCoupon: ").append(toIndentedString(mailCoupon)).append("\n");
    sb.append("    mailExtra: ").append(toIndentedString(mailExtra)).append("\n");
    sb.append("    mailServerStatus: ").append(toIndentedString(mailServerStatus)).append("\n");
    sb.append("    mailComment: ").append(toIndentedString(mailComment)).append("\n");
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
