package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 */
@ApiModel(description="Core service record for a backup storage service including ID, status, quota, and billing details.")

public class BackupServiceInfo  {
  
 /**
  * Backup ID.
  */
  @ApiModelProperty(example = "21163", value = "Backup ID.")

  private String backupId;

 /**
  * Backup server ID.
  */
  @ApiModelProperty(example = "38", value = "Backup server ID.")

  private String backupServer;

 /**
  * Backup username.
  */
  @ApiModelProperty(example = "st21163", value = "Backup username.")

  private String backupUsername;

 /**
  * Backup type.
  */
  @ApiModelProperty(example = "10831", value = "Backup type.")

  private String backupType;

 /**
  * Backup currency.
  */
  @ApiModelProperty(example = "USD", value = "Backup currency.")

  private String backupCurrency;

 /**
  * Backup order date.
  */
  @ApiModelProperty(example = "2021-12-29T14:09:57.000Z", value = "Backup order date.")

  private String backupOrderDate;

 /**
  * Backup customer ID.
  */
  @ApiModelProperty(example = "2773", value = "Backup customer ID.")

  private String backupCustid;

 /**
  * Backup quota.
  */
  @ApiModelProperty(example = "0", value = "Backup quota.")

  private String backupQuota;

 /**
  * Backup IP address.
  */
  @ApiModelProperty(example = "64.20.55.234", value = "Backup IP address.")

  private String backupIp;

 /**
  * Backup status.
  */
  @ApiModelProperty(example = "canceled", value = "Backup status.")

  private String backupStatus;

 /**
  * Backup invoice.
  */
  @ApiModelProperty(example = "19591007", value = "Backup invoice.")

  private String backupInvoice;

 /**
  * Backup coupon.
  */
  @ApiModelProperty(example = "0", value = "Backup coupon.")

  private String backupCoupon;

 /**
  * Backup extra information.
  */
  @ApiModelProperty(example = "[]", value = "Backup extra information.")

  private String backupExtra;

 /**
  * Backup server status.
  */
  @ApiModelProperty(example = "deleted", value = "Backup server status.")

  private String backupServerStatus;

 /**
  * Backup comment.
  */
  @ApiModelProperty(value = "Backup comment.")

  private String backupComment;
 /**
   * Backup ID.
   * @return backupId
  **/
  @JsonProperty("backup_id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BackupServiceInfo backupServiceInfo = (BackupServiceInfo) o;
    return Objects.equals(this.backupId, backupServiceInfo.backupId) &&
        Objects.equals(this.backupServer, backupServiceInfo.backupServer) &&
        Objects.equals(this.backupUsername, backupServiceInfo.backupUsername) &&
        Objects.equals(this.backupType, backupServiceInfo.backupType) &&
        Objects.equals(this.backupCurrency, backupServiceInfo.backupCurrency) &&
        Objects.equals(this.backupOrderDate, backupServiceInfo.backupOrderDate) &&
        Objects.equals(this.backupCustid, backupServiceInfo.backupCustid) &&
        Objects.equals(this.backupQuota, backupServiceInfo.backupQuota) &&
        Objects.equals(this.backupIp, backupServiceInfo.backupIp) &&
        Objects.equals(this.backupStatus, backupServiceInfo.backupStatus) &&
        Objects.equals(this.backupInvoice, backupServiceInfo.backupInvoice) &&
        Objects.equals(this.backupCoupon, backupServiceInfo.backupCoupon) &&
        Objects.equals(this.backupExtra, backupServiceInfo.backupExtra) &&
        Objects.equals(this.backupServerStatus, backupServiceInfo.backupServerStatus) &&
        Objects.equals(this.backupComment, backupServiceInfo.backupComment);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

