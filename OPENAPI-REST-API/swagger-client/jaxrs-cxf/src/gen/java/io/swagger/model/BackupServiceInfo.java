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
  * Core service record for a backup storage service including ID, status, quota, and billing details.
 **/
@Schema(description="Core service record for a backup storage service including ID, status, quota, and billing details.")
public class BackupServiceInfo   {
  
  @Schema(example = "21163", description = "Backup ID.")
 /**
   * Backup ID.  
  **/
  private String backupId = null;
  
  @Schema(example = "38", description = "Backup server ID.")
 /**
   * Backup server ID.  
  **/
  private String backupServer = null;
  
  @Schema(example = "st21163", description = "Backup username.")
 /**
   * Backup username.  
  **/
  private String backupUsername = null;
  
  @Schema(example = "10831", description = "Backup type.")
 /**
   * Backup type.  
  **/
  private String backupType = null;
  
  @Schema(example = "USD", description = "Backup currency.")
 /**
   * Backup currency.  
  **/
  private String backupCurrency = null;
  
  @Schema(example = "2021-12-29T14:09:57.000Z", description = "Backup order date.")
 /**
   * Backup order date.  
  **/
  private String backupOrderDate = null;
  
  @Schema(example = "2773", description = "Backup customer ID.")
 /**
   * Backup customer ID.  
  **/
  private String backupCustid = null;
  
  @Schema(example = "0", description = "Backup quota.")
 /**
   * Backup quota.  
  **/
  private String backupQuota = null;
  
  @Schema(example = "64.20.55.234", description = "Backup IP address.")
 /**
   * Backup IP address.  
  **/
  private String backupIp = null;
  
  @Schema(example = "canceled", description = "Backup status.")
 /**
   * Backup status.  
  **/
  private String backupStatus = null;
  
  @Schema(example = "19591007", description = "Backup invoice.")
 /**
   * Backup invoice.  
  **/
  private String backupInvoice = null;
  
  @Schema(example = "0", description = "Backup coupon.")
 /**
   * Backup coupon.  
  **/
  private String backupCoupon = null;
  
  @Schema(example = "[]", description = "Backup extra information.")
 /**
   * Backup extra information.  
  **/
  private String backupExtra = null;
  
  @Schema(example = "deleted", description = "Backup server status.")
 /**
   * Backup server status.  
  **/
  private String backupServerStatus = null;
  
  @Schema(description = "Backup comment.")
 /**
   * Backup comment.  
  **/
  private String backupComment = null;
 /**
   * Backup ID.
   * @return backupId
  **/
  @JsonProperty("backup_id")
  @NotNull
  public String getBackupId() {
    return backupId;
  }

  public void setBackupId(String backupId) {
    this.backupId = backupId;
  }

  public BackupServiceInfo backupId(String backupId) {
    this.backupId = backupId;
    return this;
  }

 /**
   * Backup server ID.
   * @return backupServer
  **/
  @JsonProperty("backup_server")
  @NotNull
  public String getBackupServer() {
    return backupServer;
  }

  public void setBackupServer(String backupServer) {
    this.backupServer = backupServer;
  }

  public BackupServiceInfo backupServer(String backupServer) {
    this.backupServer = backupServer;
    return this;
  }

 /**
   * Backup username.
   * @return backupUsername
  **/
  @JsonProperty("backup_username")
  @NotNull
  public String getBackupUsername() {
    return backupUsername;
  }

  public void setBackupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
  }

  public BackupServiceInfo backupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
    return this;
  }

 /**
   * Backup type.
   * @return backupType
  **/
  @JsonProperty("backup_type")
  @NotNull
  public String getBackupType() {
    return backupType;
  }

  public void setBackupType(String backupType) {
    this.backupType = backupType;
  }

  public BackupServiceInfo backupType(String backupType) {
    this.backupType = backupType;
    return this;
  }

 /**
   * Backup currency.
   * @return backupCurrency
  **/
  @JsonProperty("backup_currency")
  @NotNull
  public String getBackupCurrency() {
    return backupCurrency;
  }

  public void setBackupCurrency(String backupCurrency) {
    this.backupCurrency = backupCurrency;
  }

  public BackupServiceInfo backupCurrency(String backupCurrency) {
    this.backupCurrency = backupCurrency;
    return this;
  }

 /**
   * Backup order date.
   * @return backupOrderDate
  **/
  @JsonProperty("backup_order_date")
  @NotNull
  public String getBackupOrderDate() {
    return backupOrderDate;
  }

  public void setBackupOrderDate(String backupOrderDate) {
    this.backupOrderDate = backupOrderDate;
  }

  public BackupServiceInfo backupOrderDate(String backupOrderDate) {
    this.backupOrderDate = backupOrderDate;
    return this;
  }

 /**
   * Backup customer ID.
   * @return backupCustid
  **/
  @JsonProperty("backup_custid")
  @NotNull
  public String getBackupCustid() {
    return backupCustid;
  }

  public void setBackupCustid(String backupCustid) {
    this.backupCustid = backupCustid;
  }

  public BackupServiceInfo backupCustid(String backupCustid) {
    this.backupCustid = backupCustid;
    return this;
  }

 /**
   * Backup quota.
   * @return backupQuota
  **/
  @JsonProperty("backup_quota")
  @NotNull
  public String getBackupQuota() {
    return backupQuota;
  }

  public void setBackupQuota(String backupQuota) {
    this.backupQuota = backupQuota;
  }

  public BackupServiceInfo backupQuota(String backupQuota) {
    this.backupQuota = backupQuota;
    return this;
  }

 /**
   * Backup IP address.
   * @return backupIp
  **/
  @JsonProperty("backup_ip")
  @NotNull
  public String getBackupIp() {
    return backupIp;
  }

  public void setBackupIp(String backupIp) {
    this.backupIp = backupIp;
  }

  public BackupServiceInfo backupIp(String backupIp) {
    this.backupIp = backupIp;
    return this;
  }

 /**
   * Backup status.
   * @return backupStatus
  **/
  @JsonProperty("backup_status")
  @NotNull
  public String getBackupStatus() {
    return backupStatus;
  }

  public void setBackupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
  }

  public BackupServiceInfo backupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
    return this;
  }

 /**
   * Backup invoice.
   * @return backupInvoice
  **/
  @JsonProperty("backup_invoice")
  @NotNull
  public String getBackupInvoice() {
    return backupInvoice;
  }

  public void setBackupInvoice(String backupInvoice) {
    this.backupInvoice = backupInvoice;
  }

  public BackupServiceInfo backupInvoice(String backupInvoice) {
    this.backupInvoice = backupInvoice;
    return this;
  }

 /**
   * Backup coupon.
   * @return backupCoupon
  **/
  @JsonProperty("backup_coupon")
  @NotNull
  public String getBackupCoupon() {
    return backupCoupon;
  }

  public void setBackupCoupon(String backupCoupon) {
    this.backupCoupon = backupCoupon;
  }

  public BackupServiceInfo backupCoupon(String backupCoupon) {
    this.backupCoupon = backupCoupon;
    return this;
  }

 /**
   * Backup extra information.
   * @return backupExtra
  **/
  @JsonProperty("backup_extra")
  @NotNull
  public String getBackupExtra() {
    return backupExtra;
  }

  public void setBackupExtra(String backupExtra) {
    this.backupExtra = backupExtra;
  }

  public BackupServiceInfo backupExtra(String backupExtra) {
    this.backupExtra = backupExtra;
    return this;
  }

 /**
   * Backup server status.
   * @return backupServerStatus
  **/
  @JsonProperty("backup_server_status")
  @NotNull
  public String getBackupServerStatus() {
    return backupServerStatus;
  }

  public void setBackupServerStatus(String backupServerStatus) {
    this.backupServerStatus = backupServerStatus;
  }

  public BackupServiceInfo backupServerStatus(String backupServerStatus) {
    this.backupServerStatus = backupServerStatus;
    return this;
  }

 /**
   * Backup comment.
   * @return backupComment
  **/
  @JsonProperty("backup_comment")
  @NotNull
  public String getBackupComment() {
    return backupComment;
  }

  public void setBackupComment(String backupComment) {
    this.backupComment = backupComment;
  }

  public BackupServiceInfo backupComment(String backupComment) {
    this.backupComment = backupComment;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BackupServiceInfo {\n");
    
    sb.append("    backupId: ").append(toIndentedString(backupId)).append("\n");
    sb.append("    backupServer: ").append(toIndentedString(backupServer)).append("\n");
    sb.append("    backupUsername: ").append(toIndentedString(backupUsername)).append("\n");
    sb.append("    backupType: ").append(toIndentedString(backupType)).append("\n");
    sb.append("    backupCurrency: ").append(toIndentedString(backupCurrency)).append("\n");
    sb.append("    backupOrderDate: ").append(toIndentedString(backupOrderDate)).append("\n");
    sb.append("    backupCustid: ").append(toIndentedString(backupCustid)).append("\n");
    sb.append("    backupQuota: ").append(toIndentedString(backupQuota)).append("\n");
    sb.append("    backupIp: ").append(toIndentedString(backupIp)).append("\n");
    sb.append("    backupStatus: ").append(toIndentedString(backupStatus)).append("\n");
    sb.append("    backupInvoice: ").append(toIndentedString(backupInvoice)).append("\n");
    sb.append("    backupCoupon: ").append(toIndentedString(backupCoupon)).append("\n");
    sb.append("    backupExtra: ").append(toIndentedString(backupExtra)).append("\n");
    sb.append("    backupServerStatus: ").append(toIndentedString(backupServerStatus)).append("\n");
    sb.append("    backupComment: ").append(toIndentedString(backupComment)).append("\n");
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
