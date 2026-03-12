using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Core service record for a backup storage service including ID, status, quota, and billing details.
  /// </summary>
  [DataContract]
  public class BackupServiceInfo {
    /// <summary>
    /// Backup ID.
    /// </summary>
    /// <value>Backup ID.</value>
    [DataMember(Name="backup_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_id")]
    public string BackupId { get; set; }

    /// <summary>
    /// Backup server ID.
    /// </summary>
    /// <value>Backup server ID.</value>
    [DataMember(Name="backup_server", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_server")]
    public string BackupServer { get; set; }

    /// <summary>
    /// Backup username.
    /// </summary>
    /// <value>Backup username.</value>
    [DataMember(Name="backup_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_username")]
    public string BackupUsername { get; set; }

    /// <summary>
    /// Backup type.
    /// </summary>
    /// <value>Backup type.</value>
    [DataMember(Name="backup_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_type")]
    public string BackupType { get; set; }

    /// <summary>
    /// Backup currency.
    /// </summary>
    /// <value>Backup currency.</value>
    [DataMember(Name="backup_currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_currency")]
    public string BackupCurrency { get; set; }

    /// <summary>
    /// Backup order date.
    /// </summary>
    /// <value>Backup order date.</value>
    [DataMember(Name="backup_order_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_order_date")]
    public string BackupOrderDate { get; set; }

    /// <summary>
    /// Backup customer ID.
    /// </summary>
    /// <value>Backup customer ID.</value>
    [DataMember(Name="backup_custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_custid")]
    public string BackupCustid { get; set; }

    /// <summary>
    /// Backup quota.
    /// </summary>
    /// <value>Backup quota.</value>
    [DataMember(Name="backup_quota", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_quota")]
    public string BackupQuota { get; set; }

    /// <summary>
    /// Backup IP address.
    /// </summary>
    /// <value>Backup IP address.</value>
    [DataMember(Name="backup_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_ip")]
    public string BackupIp { get; set; }

    /// <summary>
    /// Backup status.
    /// </summary>
    /// <value>Backup status.</value>
    [DataMember(Name="backup_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_status")]
    public string BackupStatus { get; set; }

    /// <summary>
    /// Backup invoice.
    /// </summary>
    /// <value>Backup invoice.</value>
    [DataMember(Name="backup_invoice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_invoice")]
    public string BackupInvoice { get; set; }

    /// <summary>
    /// Backup coupon.
    /// </summary>
    /// <value>Backup coupon.</value>
    [DataMember(Name="backup_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_coupon")]
    public string BackupCoupon { get; set; }

    /// <summary>
    /// Backup extra information.
    /// </summary>
    /// <value>Backup extra information.</value>
    [DataMember(Name="backup_extra", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_extra")]
    public string BackupExtra { get; set; }

    /// <summary>
    /// Backup server status.
    /// </summary>
    /// <value>Backup server status.</value>
    [DataMember(Name="backup_server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_server_status")]
    public string BackupServerStatus { get; set; }

    /// <summary>
    /// Backup comment.
    /// </summary>
    /// <value>Backup comment.</value>
    [DataMember(Name="backup_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_comment")]
    public string BackupComment { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupServiceInfo {\n");
      sb.Append("  BackupId: ").Append(BackupId).Append("\n");
      sb.Append("  BackupServer: ").Append(BackupServer).Append("\n");
      sb.Append("  BackupUsername: ").Append(BackupUsername).Append("\n");
      sb.Append("  BackupType: ").Append(BackupType).Append("\n");
      sb.Append("  BackupCurrency: ").Append(BackupCurrency).Append("\n");
      sb.Append("  BackupOrderDate: ").Append(BackupOrderDate).Append("\n");
      sb.Append("  BackupCustid: ").Append(BackupCustid).Append("\n");
      sb.Append("  BackupQuota: ").Append(BackupQuota).Append("\n");
      sb.Append("  BackupIp: ").Append(BackupIp).Append("\n");
      sb.Append("  BackupStatus: ").Append(BackupStatus).Append("\n");
      sb.Append("  BackupInvoice: ").Append(BackupInvoice).Append("\n");
      sb.Append("  BackupCoupon: ").Append(BackupCoupon).Append("\n");
      sb.Append("  BackupExtra: ").Append(BackupExtra).Append("\n");
      sb.Append("  BackupServerStatus: ").Append(BackupServerStatus).Append("\n");
      sb.Append("  BackupComment: ").Append(BackupComment).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
