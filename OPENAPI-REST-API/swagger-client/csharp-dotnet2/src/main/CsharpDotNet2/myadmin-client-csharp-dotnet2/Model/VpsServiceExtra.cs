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
  public class VpsServiceExtra {
    /// <summary>
    /// Spice
    /// </summary>
    /// <value>Spice</value>
    [DataMember(Name="spice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "spice")]
    public int? Spice { get; set; }

    /// <summary>
    /// Gets or Sets Snapshots
    /// </summary>
    [DataMember(Name="snapshots", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "snapshots")]
    public List<VpsSnapshot> Snapshots { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsServiceExtra {\n");
      sb.Append("  Spice: ").Append(Spice).Append("\n");
      sb.Append("  Snapshots: ").Append(Snapshots).Append("\n");
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
