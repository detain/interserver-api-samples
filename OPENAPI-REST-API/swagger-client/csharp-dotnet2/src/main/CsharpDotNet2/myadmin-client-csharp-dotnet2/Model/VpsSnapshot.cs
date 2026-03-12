using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A VPS snapshot (point-in-time backup) stored on the host node.
  /// </summary>
  [DataContract]
  public class VpsSnapshot {
    /// <summary>
    /// Snapshot name.
    /// </summary>
    /// <value>Snapshot name.</value>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Disk space used by this snapshot in bytes.
    /// </summary>
    /// <value>Disk space used by this snapshot in bytes.</value>
    [DataMember(Name="used", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "used")]
    public int? Used { get; set; }

    /// <summary>
    /// Unix timestamp of when the snapshot was created.
    /// </summary>
    /// <value>Unix timestamp of when the snapshot was created.</value>
    [DataMember(Name="date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "date")]
    public int? Date { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsSnapshot {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Used: ").Append(Used).Append("\n");
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
