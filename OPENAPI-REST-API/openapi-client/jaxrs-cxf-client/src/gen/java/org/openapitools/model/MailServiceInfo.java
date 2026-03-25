package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class MailServiceInfo  {
  
 /**
  * The ID of the mail service.
  */
  @ApiModelProperty(example = "43171", required = true, value = "The ID of the mail service.")

  private String mailId;

 /**
  * The type of mail service.
  */
  @ApiModelProperty(example = "10880", required = true, value = "The type of mail service.")

  private String mailType;

 /**
  * The currency of the mail service.
  */
  @ApiModelProperty(example = "USD", required = true, value = "The currency of the mail service.")

  private String mailCurrency;

 /**
  * The order date of the mail service.
  */
  @ApiModelProperty(example = "2023-07-16T00:55:05.000Z", required = true, value = "The order date of the mail service.")

  private String mailOrderDate;

 /**
  * The customer ID associated with the mail service.
  */
  @ApiModelProperty(example = "771282", required = true, value = "The customer ID associated with the mail service.")

  private String mailCustid;

 /**
  * The mail quota for the service.
  */
  @ApiModelProperty(example = "0", required = true, value = "The mail quota for the service.")

  private String mailQuota;

 /**
  * The status of the mail service.
  */
  @ApiModelProperty(example = "expired", required = true, value = "The status of the mail service.")

  private String mailStatus;

 /**
  * The invoice ID of the mail service.
  */
  @ApiModelProperty(example = "20410322", required = true, value = "The invoice ID of the mail service.")

  private String mailInvoice;

 /**
  * The username associated with the mail service.
  */
  @ApiModelProperty(example = "", value = "The username associated with the mail service.")

  private String mailUsername;

 /**
  * The IP address associated with the mail service.
  */
  @ApiModelProperty(example = "", value = "The IP address associated with the mail service.")

  private String mailIp;

 /**
  * The coupon associated with the mail service.
  */
  @ApiModelProperty(example = "0", value = "The coupon associated with the mail service.")

  private String mailCoupon;

 /**
  * Additional information for the mail service.
  */
  @ApiModelProperty(example = "[]", value = "Additional information for the mail service.")

  private String mailExtra;

 /**
  * The server status of the mail service.
  */
  @ApiModelProperty(example = "", value = "The server status of the mail service.")

  private String mailServerStatus;

 /**
  * Additional comments for the mail service.
  */
  @ApiModelProperty(example = "", value = "Additional comments for the mail service.")

  private String mailComment;
 /**
   * The ID of the mail service.
   * @return mailId
  **/
  @JsonProperty("mail_id")
  public String getMailId() {
    return mailId;
  }

  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  public MailServiceInfo mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

 /**
   * The type of mail service.
   * @return mailType
  **/
  @JsonProperty("mail_type")
  public String getMailType() {
    return mailType;
  }

  public void setMailType(String mailType) {
    this.mailType = mailType;
  }

  public MailServiceInfo mailType(String mailType) {
    this.mailType = mailType;
    return this;
  }

 /**
   * The currency of the mail service.
   * @return mailCurrency
  **/
  @JsonProperty("mail_currency")
  public String getMailCurrency() {
    return mailCurrency;
  }

  public void setMailCurrency(String mailCurrency) {
    this.mailCurrency = mailCurrency;
  }

  public MailServiceInfo mailCurrency(String mailCurrency) {
    this.mailCurrency = mailCurrency;
    return this;
  }

 /**
   * The order date of the mail service.
   * @return mailOrderDate
  **/
  @JsonProperty("mail_order_date")
  public String getMailOrderDate() {
    return mailOrderDate;
  }

  public void setMailOrderDate(String mailOrderDate) {
    this.mailOrderDate = mailOrderDate;
  }

  public MailServiceInfo mailOrderDate(String mailOrderDate) {
    this.mailOrderDate = mailOrderDate;
    return this;
  }

 /**
   * The customer ID associated with the mail service.
   * @return mailCustid
  **/
  @JsonProperty("mail_custid")
  public String getMailCustid() {
    return mailCustid;
  }

  public void setMailCustid(String mailCustid) {
    this.mailCustid = mailCustid;
  }

  public MailServiceInfo mailCustid(String mailCustid) {
    this.mailCustid = mailCustid;
    return this;
  }

 /**
   * The mail quota for the service.
   * @return mailQuota
  **/
  @JsonProperty("mail_quota")
  public String getMailQuota() {
    return mailQuota;
  }

  public void setMailQuota(String mailQuota) {
    this.mailQuota = mailQuota;
  }

  public MailServiceInfo mailQuota(String mailQuota) {
    this.mailQuota = mailQuota;
    return this;
  }

 /**
   * The status of the mail service.
   * @return mailStatus
  **/
  @JsonProperty("mail_status")
  public String getMailStatus() {
    return mailStatus;
  }

  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  public MailServiceInfo mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

 /**
   * The invoice ID of the mail service.
   * @return mailInvoice
  **/
  @JsonProperty("mail_invoice")
  public String getMailInvoice() {
    return mailInvoice;
  }

  public void setMailInvoice(String mailInvoice) {
    this.mailInvoice = mailInvoice;
  }

  public MailServiceInfo mailInvoice(String mailInvoice) {
    this.mailInvoice = mailInvoice;
    return this;
  }

 /**
   * The username associated with the mail service.
   * @return mailUsername
  **/
  @JsonProperty("mail_username")
  public String getMailUsername() {
    return mailUsername;
  }

  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  public MailServiceInfo mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

 /**
   * The IP address associated with the mail service.
   * @return mailIp
  **/
  @JsonProperty("mail_ip")
  public String getMailIp() {
    return mailIp;
  }

  public void setMailIp(String mailIp) {
    this.mailIp = mailIp;
  }

  public MailServiceInfo mailIp(String mailIp) {
    this.mailIp = mailIp;
    return this;
  }

 /**
   * The coupon associated with the mail service.
   * @return mailCoupon
  **/
  @JsonProperty("mail_coupon")
  public String getMailCoupon() {
    return mailCoupon;
  }

  public void setMailCoupon(String mailCoupon) {
    this.mailCoupon = mailCoupon;
  }

  public MailServiceInfo mailCoupon(String mailCoupon) {
    this.mailCoupon = mailCoupon;
    return this;
  }

 /**
   * Additional information for the mail service.
   * @return mailExtra
  **/
  @JsonProperty("mail_extra")
  public String getMailExtra() {
    return mailExtra;
  }

  public void setMailExtra(String mailExtra) {
    this.mailExtra = mailExtra;
  }

  public MailServiceInfo mailExtra(String mailExtra) {
    this.mailExtra = mailExtra;
    return this;
  }

 /**
   * The server status of the mail service.
   * @return mailServerStatus
  **/
  @JsonProperty("mail_server_status")
  public String getMailServerStatus() {
    return mailServerStatus;
  }

  public void setMailServerStatus(String mailServerStatus) {
    this.mailServerStatus = mailServerStatus;
  }

  public MailServiceInfo mailServerStatus(String mailServerStatus) {
    this.mailServerStatus = mailServerStatus;
    return this;
  }

 /**
   * Additional comments for the mail service.
   * @return mailComment
  **/
  @JsonProperty("mail_comment")
  public String getMailComment() {
    return mailComment;
  }

  public void setMailComment(String mailComment) {
    this.mailComment = mailComment;
  }

  public MailServiceInfo mailComment(String mailComment) {
    this.mailComment = mailComment;
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
    MailServiceInfo mailServiceInfo = (MailServiceInfo) o;
    return Objects.equals(this.mailId, mailServiceInfo.mailId) &&
        Objects.equals(this.mailType, mailServiceInfo.mailType) &&
        Objects.equals(this.mailCurrency, mailServiceInfo.mailCurrency) &&
        Objects.equals(this.mailOrderDate, mailServiceInfo.mailOrderDate) &&
        Objects.equals(this.mailCustid, mailServiceInfo.mailCustid) &&
        Objects.equals(this.mailQuota, mailServiceInfo.mailQuota) &&
        Objects.equals(this.mailStatus, mailServiceInfo.mailStatus) &&
        Objects.equals(this.mailInvoice, mailServiceInfo.mailInvoice) &&
        Objects.equals(this.mailUsername, mailServiceInfo.mailUsername) &&
        Objects.equals(this.mailIp, mailServiceInfo.mailIp) &&
        Objects.equals(this.mailCoupon, mailServiceInfo.mailCoupon) &&
        Objects.equals(this.mailExtra, mailServiceInfo.mailExtra) &&
        Objects.equals(this.mailServerStatus, mailServiceInfo.mailServerStatus) &&
        Objects.equals(this.mailComment, mailServiceInfo.mailComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(mailId, mailType, mailCurrency, mailOrderDate, mailCustid, mailQuota, mailStatus, mailInvoice, mailUsername, mailIp, mailCoupon, mailExtra, mailServerStatus, mailComment);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class MailServiceInfo {\n");
    
    sb.append("    mailId: ").append(toIndentedString(mailId)).append("\n");
    sb.append("    mailType: ").append(toIndentedString(mailType)).append("\n");
    sb.append("    mailCurrency: ").append(toIndentedString(mailCurrency)).append("\n");
    sb.append("    mailOrderDate: ").append(toIndentedString(mailOrderDate)).append("\n");
    sb.append("    mailCustid: ").append(toIndentedString(mailCustid)).append("\n");
    sb.append("    mailQuota: ").append(toIndentedString(mailQuota)).append("\n");
    sb.append("    mailStatus: ").append(toIndentedString(mailStatus)).append("\n");
    sb.append("    mailInvoice: ").append(toIndentedString(mailInvoice)).append("\n");
    sb.append("    mailUsername: ").append(toIndentedString(mailUsername)).append("\n");
    sb.append("    mailIp: ").append(toIndentedString(mailIp)).append("\n");
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

