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
  public class VpsPlesk12Data {
    /// <summary>
    /// Gets or Sets Admin
    /// </summary>
    [DataMember(Name="admin", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "admin")]
    public VpsPleskLicense Admin { get; set; }

    /// <summary>
    /// Gets or Sets Pro
    /// </summary>
    [DataMember(Name="pro", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "pro")]
    public VpsPleskLicense Pro { get; set; }

    /// <summary>
    /// Gets or Sets Host
    /// </summary>
    [DataMember(Name="host", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "host")]
    public VpsPleskLicense Host { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsPlesk12Data {\n");
      sb.Append("  Admin: ").Append(Admin).Append("\n");
      sb.Append("  Pro: ").Append(Pro).Append("\n");
      sb.Append("  Host: ").Append(Host).Append("\n");
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
