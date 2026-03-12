package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;

@Schema(description="Core service record for a backup storage service including ID, status, quota, and billing details.")

public class BackupServiceInfo   {
  private String backupId = null;
  private String backupServer = null;
  private String backupUsername = null;
  private String backupType = null;
  private String backupCurrency = null;
  private String backupOrderDate = null;
  private String backupCustid = null;
  private String backupQuota = null;
  private String backupIp = null;
  private String backupStatus = null;
  private String backupInvoice = null;
  private String backupCoupon = null;
  private String backupExtra = null;
  private String backupServerStatus = null;
  private String backupComment = null;

  /**
   * Backup ID.
   **/
  
  @Schema(example = "21163", description = "Backup ID.")
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
  
  @Schema(example = "38", description = "Backup server ID.")
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
  
  @Schema(example = "st21163", description = "Backup username.")
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
  
  @Schema(example = "10831", description = "Backup type.")
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
  
  @Schema(example = "USD", description = "Backup currency.")
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
  
  @Schema(example = "2021-12-29T14:09:57.000Z", description = "Backup order date.")
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
  
  @Schema(example = "2773", description = "Backup customer ID.")
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
  
  @Schema(example = "0", description = "Backup quota.")
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
  
  @Schema(example = "64.20.55.234", description = "Backup IP address.")
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
  
  @Schema(example = "canceled", description = "Backup status.")
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
  
  @Schema(example = "19591007", description = "Backup invoice.")
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
  
  @Schema(example = "0", description = "Backup coupon.")
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
  
  @Schema(example = "[]", description = "Backup extra information.")
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
  
  @Schema(example = "deleted", description = "Backup server status.")
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
  
  @Schema(description = "Backup comment.")
  @JsonProperty("backup_comment")
  @NotNull
  public String getBackupComment() {
    return backupComment;
  }
  public void setBackupComment(String backupComment) {
    this.backupComment = backupComment;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
