package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "Core service record for a backup storage service including ID, status, quota, and billing details.")

public class BackupServiceInfo   {

  private @Valid String backupId = null;

  private @Valid String backupServer = null;

  private @Valid String backupUsername = null;

  private @Valid String backupType = null;

  private @Valid String backupCurrency = null;

  private @Valid String backupOrderDate = null;

  private @Valid String backupCustid = null;

  private @Valid String backupQuota = null;

  private @Valid String backupIp = null;

  private @Valid String backupStatus = null;

  private @Valid String backupInvoice = null;

  private @Valid String backupCoupon = null;

  private @Valid String backupExtra = null;

  private @Valid String backupServerStatus = null;

  private @Valid String backupComment = null;

  /**
   * Backup ID.
   **/
  public BackupServiceInfo backupId(String backupId) {
    this.backupId = backupId;
    return this;
  }

  
  @ApiModelProperty(example = "21163", value = "Backup ID.")
  @JsonProperty("backup_id")
  @NotNull

  public String getBackupId() {
    return backupId;
  }
  public void setBackupId(String backupId) {
    this.backupId = backupId;
  }

  /**
   * Backup server ID.
   **/
  public BackupServiceInfo backupServer(String backupServer) {
    this.backupServer = backupServer;
    return this;
  }

  
  @ApiModelProperty(example = "38", value = "Backup server ID.")
  @JsonProperty("backup_server")
  @NotNull

  public String getBackupServer() {
    return backupServer;
  }
  public void setBackupServer(String backupServer) {
    this.backupServer = backupServer;
  }

  /**
   * Backup username.
   **/
  public BackupServiceInfo backupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
    return this;
  }

  
  @ApiModelProperty(example = "st21163", value = "Backup username.")
  @JsonProperty("backup_username")
  @NotNull

  public String getBackupUsername() {
    return backupUsername;
  }
  public void setBackupUsername(String backupUsername) {
    this.backupUsername = backupUsername;
  }

  /**
   * Backup type.
   **/
  public BackupServiceInfo backupType(String backupType) {
    this.backupType = backupType;
    return this;
  }

  
  @ApiModelProperty(example = "10831", value = "Backup type.")
  @JsonProperty("backup_type")
  @NotNull

  public String getBackupType() {
    return backupType;
  }
  public void setBackupType(String backupType) {
    this.backupType = backupType;
  }

  /**
   * Backup currency.
   **/
  public BackupServiceInfo backupCurrency(String backupCurrency) {
    this.backupCurrency = backupCurrency;
    return this;
  }

  
  @ApiModelProperty(example = "USD", value = "Backup currency.")
  @JsonProperty("backup_currency")
  @NotNull

  public String getBackupCurrency() {
    return backupCurrency;
  }
  public void setBackupCurrency(String backupCurrency) {
    this.backupCurrency = backupCurrency;
  }

  /**
   * Backup order date.
   **/
  public BackupServiceInfo backupOrderDate(String backupOrderDate) {
    this.backupOrderDate = backupOrderDate;
    return this;
  }

  
  @ApiModelProperty(example = "2021-12-29T14:09:57.000Z", value = "Backup order date.")
  @JsonProperty("backup_order_date")
  @NotNull

  public String getBackupOrderDate() {
    return backupOrderDate;
  }
  public void setBackupOrderDate(String backupOrderDate) {
    this.backupOrderDate = backupOrderDate;
  }

  /**
   * Backup customer ID.
   **/
  public BackupServiceInfo backupCustid(String backupCustid) {
    this.backupCustid = backupCustid;
    return this;
  }

  
  @ApiModelProperty(example = "2773", value = "Backup customer ID.")
  @JsonProperty("backup_custid")
  @NotNull

  public String getBackupCustid() {
    return backupCustid;
  }
  public void setBackupCustid(String backupCustid) {
    this.backupCustid = backupCustid;
  }

  /**
   * Backup quota.
   **/
  public BackupServiceInfo backupQuota(String backupQuota) {
    this.backupQuota = backupQuota;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Backup quota.")
  @JsonProperty("backup_quota")
  @NotNull

  public String getBackupQuota() {
    return backupQuota;
  }
  public void setBackupQuota(String backupQuota) {
    this.backupQuota = backupQuota;
  }

  /**
   * Backup IP address.
   **/
  public BackupServiceInfo backupIp(String backupIp) {
    this.backupIp = backupIp;
    return this;
  }

  
  @ApiModelProperty(example = "64.20.55.234", value = "Backup IP address.")
  @JsonProperty("backup_ip")
  @NotNull

  public String getBackupIp() {
    return backupIp;
  }
  public void setBackupIp(String backupIp) {
    this.backupIp = backupIp;
  }

  /**
   * Backup status.
   **/
  public BackupServiceInfo backupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
    return this;
  }

  
  @ApiModelProperty(example = "canceled", value = "Backup status.")
  @JsonProperty("backup_status")
  @NotNull

  public String getBackupStatus() {
    return backupStatus;
  }
  public void setBackupStatus(String backupStatus) {
    this.backupStatus = backupStatus;
  }

  /**
   * Backup invoice.
   **/
  public BackupServiceInfo backupInvoice(String backupInvoice) {
    this.backupInvoice = backupInvoice;
    return this;
  }

  
  @ApiModelProperty(example = "19591007", value = "Backup invoice.")
  @JsonProperty("backup_invoice")
  @NotNull

  public String getBackupInvoice() {
    return backupInvoice;
  }
  public void setBackupInvoice(String backupInvoice) {
    this.backupInvoice = backupInvoice;
  }

  /**
   * Backup coupon.
   **/
  public BackupServiceInfo backupCoupon(String backupCoupon) {
    this.backupCoupon = backupCoupon;
    return this;
  }

  
  @ApiModelProperty(example = "0", value = "Backup coupon.")
  @JsonProperty("backup_coupon")
  @NotNull

  public String getBackupCoupon() {
    return backupCoupon;
  }
  public void setBackupCoupon(String backupCoupon) {
    this.backupCoupon = backupCoupon;
  }

  /**
   * Backup extra information.
   **/
  public BackupServiceInfo backupExtra(String backupExtra) {
    this.backupExtra = backupExtra;
    return this;
  }

  
  @ApiModelProperty(example = "[]", value = "Backup extra information.")
  @JsonProperty("backup_extra")
  @NotNull

  public String getBackupExtra() {
    return backupExtra;
  }
  public void setBackupExtra(String backupExtra) {
    this.backupExtra = backupExtra;
  }

  /**
   * Backup server status.
   **/
  public BackupServiceInfo backupServerStatus(String backupServerStatus) {
    this.backupServerStatus = backupServerStatus;
    return this;
  }

  
  @ApiModelProperty(example = "deleted", value = "Backup server status.")
  @JsonProperty("backup_server_status")
  @NotNull

  public String getBackupServerStatus() {
    return backupServerStatus;
  }
  public void setBackupServerStatus(String backupServerStatus) {
    this.backupServerStatus = backupServerStatus;
  }

  /**
   * Backup comment.
   **/
  public BackupServiceInfo backupComment(String backupComment) {
    this.backupComment = backupComment;
    return this;
  }

  
  @ApiModelProperty(value = "Backup comment.")
  @JsonProperty("backup_comment")
  @NotNull

  public String getBackupComment() {
    return backupComment;
  }
  public void setBackupComment(String backupComment) {
    this.backupComment = backupComment;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupServiceInfo backupServiceInfo = (BackupServiceInfo) o;
    return Objects.equals(backupId, backupServiceInfo.backupId) &&
        Objects.equals(backupServer, backupServiceInfo.backupServer) &&
        Objects.equals(backupUsername, backupServiceInfo.backupUsername) &&
        Objects.equals(backupType, backupServiceInfo.backupType) &&
        Objects.equals(backupCurrency, backupServiceInfo.backupCurrency) &&
        Objects.equals(backupOrderDate, backupServiceInfo.backupOrderDate) &&
        Objects.equals(backupCustid, backupServiceInfo.backupCustid) &&
        Objects.equals(backupQuota, backupServiceInfo.backupQuota) &&
        Objects.equals(backupIp, backupServiceInfo.backupIp) &&
        Objects.equals(backupStatus, backupServiceInfo.backupStatus) &&
        Objects.equals(backupInvoice, backupServiceInfo.backupInvoice) &&
        Objects.equals(backupCoupon, backupServiceInfo.backupCoupon) &&
        Objects.equals(backupExtra, backupServiceInfo.backupExtra) &&
        Objects.equals(backupServerStatus, backupServiceInfo.backupServerStatus) &&
        Objects.equals(backupComment, backupServiceInfo.backupComment);
  }

  @Override
  public int hashCode() {
    return Objects.hash(backupId, backupServer, backupUsername, backupType, backupCurrency, backupOrderDate, backupCustid, backupQuota, backupIp, backupStatus, backupInvoice, backupCoupon, backupExtra, backupServerStatus, backupComment);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
