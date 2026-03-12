using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class BackupRow {
    /// <summary>
    /// The id of the backup.
    /// </summary>
    /// <value>The id of the backup.</value>
    [DataMember(Name="backup_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_id")]
    public string BackupId { get; set; }

    /// <summary>
    /// The name of the backup.
    /// </summary>
    /// <value>The name of the backup.</value>
    [DataMember(Name="backup_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_name")]
    public string BackupName { get; set; }

    /// <summary>
    /// The cost of the backup.
    /// </summary>
    /// <value>The cost of the backup.</value>
    [DataMember(Name="backup_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_cost")]
    public string BackupCost { get; set; }

    /// <summary>
    /// The username of the backup.
    /// </summary>
    /// <value>The username of the backup.</value>
    [DataMember(Name="backup_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_username")]
    public string BackupUsername { get; set; }

    /// <summary>
    /// The status of the backup.
    /// </summary>
    /// <value>The status of the backup.</value>
    [DataMember(Name="backup_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backup_status")]
    public string BackupStatus { get; set; }

    /// <summary>
    /// The services name of the backup.
    /// </summary>
    /// <value>The services name of the backup.</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupRow {\n");
      sb.Append("  BackupId: ").Append(BackupId).Append("\n");
      sb.Append("  BackupName: ").Append(BackupName).Append("\n");
      sb.Append("  BackupCost: ").Append(BackupCost).Append("\n");
      sb.Append("  BackupUsername: ").Append(BackupUsername).Append("\n");
      sb.Append("  BackupStatus: ").Append(BackupStatus).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
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
