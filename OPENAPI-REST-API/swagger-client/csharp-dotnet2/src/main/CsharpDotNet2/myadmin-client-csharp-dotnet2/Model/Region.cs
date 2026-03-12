using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A datacenter region where a server can be provisioned.
  /// </summary>
  [DataContract]
  public class Region {
    /// <summary>
    /// Gets or Sets RegionId
    /// </summary>
    [DataMember(Name="region_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "region_id")]
    public int? RegionId { get; set; }

    /// <summary>
    /// Gets or Sets RegionName
    /// </summary>
    [DataMember(Name="region_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "region_name")]
    public string RegionName { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Region {\n");
      sb.Append("  RegionId: ").Append(RegionId).Append("\n");
      sb.Append("  RegionName: ").Append(RegionName).Append("\n");
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
