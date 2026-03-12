using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class BackupServiceMaster {
    /// <summary>
    /// Backup ID of the service master.
    /// </summary>
    /// <value>Backup ID of the service master.</value>
    [DataMember(Name="backup_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_id")]
    public int? BackupId { get; set; }

    /// <summary>
    /// Name of the backup service.
    /// </summary>
    /// <value>Name of the backup service.</value>
    [DataMember(Name="backup_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_name")]
    public string BackupName { get; set; }

    /// <summary>
    /// IP address of the backup service.
    /// </summary>
    /// <value>IP address of the backup service.</value>
    [DataMember(Name="backup_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_ip")]
    public string BackupIp { get; set; }

    /// <summary>
    /// Type of the backup service.
    /// </summary>
    /// <value>Type of the backup service.</value>
    [DataMember(Name="backup_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_type")]
    public int? BackupType { get; set; }

    /// <summary>
    /// Size of the backup service's hard drive.
    /// </summary>
    /// <value>Size of the backup service's hard drive.</value>
    [DataMember(Name="backup_hdsize", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_hdsize")]
    public int? BackupHdsize { get; set; }

    /// <summary>
    /// Amount of free space on the backup service's hard drive.
    /// </summary>
    /// <value>Amount of free space on the backup service's hard drive.</value>
    [DataMember(Name="backup_hdfree", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_hdfree")]
    public int? BackupHdfree { get; set; }

    /// <summary>
    /// Last update timestamp of the backup service.
    /// </summary>
    /// <value>Last update timestamp of the backup service.</value>
    [DataMember(Name="backup_last_update", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_last_update")]
    public string BackupLastUpdate { get; set; }

    /// <summary>
    /// Availability status of the backup service.
    /// </summary>
    /// <value>Availability status of the backup service.</value>
    [DataMember(Name="backup_available", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_available")]
    public int? BackupAvailable { get; set; }

    /// <summary>
    /// I/O wait status of the backup service.
    /// </summary>
    /// <value>I/O wait status of the backup service.</value>
    [DataMember(Name="backup_iowait", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_iowait")]
    public int? BackupIowait { get; set; }

    /// <summary>
    /// Order associated with the backup service.
    /// </summary>
    /// <value>Order associated with the backup service.</value>
    [DataMember(Name="backup_order", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_order")]
    public int? BackupOrder { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupServiceMaster {\n");
      sb.Append("  BackupId: ").Append(BackupId).Append("\n");
      sb.Append("  BackupName: ").Append(BackupName).Append("\n");
      sb.Append("  BackupIp: ").Append(BackupIp).Append("\n");
      sb.Append("  BackupType: ").Append(BackupType).Append("\n");
      sb.Append("  BackupHdsize: ").Append(BackupHdsize).Append("\n");
      sb.Append("  BackupHdfree: ").Append(BackupHdfree).Append("\n");
      sb.Append("  BackupLastUpdate: ").Append(BackupLastUpdate).Append("\n");
      sb.Append("  BackupAvailable: ").Append(BackupAvailable).Append("\n");
      sb.Append("  BackupIowait: ").Append(BackupIowait).Append("\n");
      sb.Append("  BackupOrder: ").Append(BackupOrder).Append("\n");
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
