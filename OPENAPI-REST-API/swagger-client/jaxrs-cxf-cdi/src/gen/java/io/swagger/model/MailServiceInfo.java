package io.swagger.model;

import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import java.util.Objects;

import javax.xml.bind.annotation.*;



public class MailServiceInfo   {
  private String mailId = null;
  private String mailUsername = null;
  private String mailType = null;
  private String mailCurrency = null;
  private String mailOrderDate = null;
  private String mailCustid = null;
  private String mailQuota = null;
  private String mailIp = null;
  private String mailStatus = null;
  private String mailInvoice = null;
  private String mailCoupon = null;
  private String mailExtra = null;
  private String mailServerStatus = null;
  private String mailComment = null;

  /**
   * The ID of the mail service.
   **/
  public MailServiceInfo mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

  
  
  @Schema(example = "43171", required = true, description = "The ID of the mail service.")
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

  
  
  @Schema(description = "The username associated with the mail service.")
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

  
  
  @Schema(example = "10880", required = true, description = "The type of mail service.")
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

  
  
  @Schema(example = "USD", required = true, description = "The currency of the mail service.")
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

  
  
  @Schema(example = "2023-07-16T00:55:05.000Z", required = true, description = "The order date of the mail service.")
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

  
  
  @Schema(example = "771282", required = true, description = "The customer ID associated with the mail service.")
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

  
  
  @Schema(example = "0", required = true, description = "The mail quota for the service.")
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

  
  
  @Schema(description = "The IP address associated with the mail service.")
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

  
  
  @Schema(example = "expired", required = true, description = "The status of the mail service.")
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

  
  
  @Schema(example = "20410322", required = true, description = "The invoice ID of the mail service.")
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

  
  
  @Schema(example = "0", description = "The coupon associated with the mail service.")
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

  
  
  @Schema(example = "[]", description = "Additional information for the mail service.")
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

  
  
  @Schema(description = "The server status of the mail service.")
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

  
  
  @Schema(description = "Additional comments for the mail service.")
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
