package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * MailServiceInfo
 */




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

  public MailServiceInfo mailId(String mailId) {
    this.mailId = mailId;
    return this;
  }

  /**
   * The ID of the mail service.
   * @return mailId
   **/
    public String getMailId() {
    return mailId;
  }

  public void setMailId(String mailId) {
    this.mailId = mailId;
  }

  public MailServiceInfo mailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
    return this;
  }

  /**
   * The username associated with the mail service.
   * @return mailUsername
   **/
    public String getMailUsername() {
    return mailUsername;
  }

  public void setMailUsername(String mailUsername) {
    this.mailUsername = mailUsername;
  }

  public MailServiceInfo mailType(String mailType) {
    this.mailType = mailType;
    return this;
  }

  /**
   * The type of mail service.
   * @return mailType
   **/
    public String getMailType() {
    return mailType;
  }

  public void setMailType(String mailType) {
    this.mailType = mailType;
  }

  public MailServiceInfo mailCurrency(String mailCurrency) {
    this.mailCurrency = mailCurrency;
    return this;
  }

  /**
   * The currency of the mail service.
   * @return mailCurrency
   **/
    public String getMailCurrency() {
    return mailCurrency;
  }

  public void setMailCurrency(String mailCurrency) {
    this.mailCurrency = mailCurrency;
  }

  public MailServiceInfo mailOrderDate(String mailOrderDate) {
    this.mailOrderDate = mailOrderDate;
    return this;
  }

  /**
   * The order date of the mail service.
   * @return mailOrderDate
   **/
    public String getMailOrderDate() {
    return mailOrderDate;
  }

  public void setMailOrderDate(String mailOrderDate) {
    this.mailOrderDate = mailOrderDate;
  }

  public MailServiceInfo mailCustid(String mailCustid) {
    this.mailCustid = mailCustid;
    return this;
  }

  /**
   * The customer ID associated with the mail service.
   * @return mailCustid
   **/
    public String getMailCustid() {
    return mailCustid;
  }

  public void setMailCustid(String mailCustid) {
    this.mailCustid = mailCustid;
  }

  public MailServiceInfo mailQuota(String mailQuota) {
    this.mailQuota = mailQuota;
    return this;
  }

  /**
   * The mail quota for the service.
   * @return mailQuota
   **/
    public String getMailQuota() {
    return mailQuota;
  }

  public void setMailQuota(String mailQuota) {
    this.mailQuota = mailQuota;
  }

  public MailServiceInfo mailIp(String mailIp) {
    this.mailIp = mailIp;
    return this;
  }

  /**
   * The IP address associated with the mail service.
   * @return mailIp
   **/
    public String getMailIp() {
    return mailIp;
  }

  public void setMailIp(String mailIp) {
    this.mailIp = mailIp;
  }

  public MailServiceInfo mailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
    return this;
  }

  /**
   * The status of the mail service.
   * @return mailStatus
   **/
    public String getMailStatus() {
    return mailStatus;
  }

  public void setMailStatus(String mailStatus) {
    this.mailStatus = mailStatus;
  }

  public MailServiceInfo mailInvoice(String mailInvoice) {
    this.mailInvoice = mailInvoice;
    return this;
  }

  /**
   * The invoice ID of the mail service.
   * @return mailInvoice
   **/
    public String getMailInvoice() {
    return mailInvoice;
  }

  public void setMailInvoice(String mailInvoice) {
    this.mailInvoice = mailInvoice;
  }

  public MailServiceInfo mailCoupon(String mailCoupon) {
    this.mailCoupon = mailCoupon;
    return this;
  }

  /**
   * The coupon associated with the mail service.
   * @return mailCoupon
   **/
    public String getMailCoupon() {
    return mailCoupon;
  }

  public void setMailCoupon(String mailCoupon) {
    this.mailCoupon = mailCoupon;
  }

  public MailServiceInfo mailExtra(String mailExtra) {
    this.mailExtra = mailExtra;
    return this;
  }

  /**
   * Additional information for the mail service.
   * @return mailExtra
   **/
    public String getMailExtra() {
    return mailExtra;
  }

  public void setMailExtra(String mailExtra) {
    this.mailExtra = mailExtra;
  }

  public MailServiceInfo mailServerStatus(String mailServerStatus) {
    this.mailServerStatus = mailServerStatus;
    return this;
  }

  /**
   * The server status of the mail service.
   * @return mailServerStatus
   **/
    public String getMailServerStatus() {
    return mailServerStatus;
  }

  public void setMailServerStatus(String mailServerStatus) {
    this.mailServerStatus = mailServerStatus;
  }

  public MailServiceInfo mailComment(String mailComment) {
    this.mailComment = mailComment;
    return this;
  }

  /**
   * Additional comments for the mail service.
   * @return mailComment
   **/
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
    return Objects.equals(this.mailId, mailServiceInfo.mailId) &&
        Objects.equals(this.mailUsername, mailServiceInfo.mailUsername) &&
        Objects.equals(this.mailType, mailServiceInfo.mailType) &&
        Objects.equals(this.mailCurrency, mailServiceInfo.mailCurrency) &&
        Objects.equals(this.mailOrderDate, mailServiceInfo.mailOrderDate) &&
        Objects.equals(this.mailCustid, mailServiceInfo.mailCustid) &&
        Objects.equals(this.mailQuota, mailServiceInfo.mailQuota) &&
        Objects.equals(this.mailIp, mailServiceInfo.mailIp) &&
        Objects.equals(this.mailStatus, mailServiceInfo.mailStatus) &&
        Objects.equals(this.mailInvoice, mailServiceInfo.mailInvoice) &&
        Objects.equals(this.mailCoupon, mailServiceInfo.mailCoupon) &&
        Objects.equals(this.mailExtra, mailServiceInfo.mailExtra) &&
        Objects.equals(this.mailServerStatus, mailServiceInfo.mailServerStatus) &&
        Objects.equals(this.mailComment, mailServiceInfo.mailComment);
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
