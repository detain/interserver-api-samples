using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A single backed-up item and information about it.
  /// </summary>
  [DataContract]
  public class VpsBackupRow {
    /// <summary>
    /// Backup Type
    /// </summary>
    /// <value>Backup Type</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// The service id such as vps  id.
    /// </summary>
    /// <value>The service id such as vps  id.</value>
    [DataMember(Name="service", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service")]
    public int? Service { get; set; }

    /// <summary>
    /// The name of the backup.
    /// </summary>
    /// <value>The name of the backup.</value>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Size of the file in bytes
    /// </summary>
    /// <value>Size of the file in bytes</value>
    [DataMember(Name="size", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "size")]
    public int? Size { get; set; }

    /// <summary>
    /// The creation date of the backup in a unix timestamp.
    /// </summary>
    /// <value>The creation date of the backup in a unix timestamp.</value>
    [DataMember(Name="date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "date")]
    public int? Date { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsBackupRow {\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Service: ").Append(Service).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Size: ").Append(Size).Append("\n");
      sb.Append("  Date: ").Append(Date).Append("\n");
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
