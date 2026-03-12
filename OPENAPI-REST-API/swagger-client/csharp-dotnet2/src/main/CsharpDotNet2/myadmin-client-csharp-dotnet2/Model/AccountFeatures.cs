using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Account Features data.
  /// </summary>
  [DataContract]
  public class AccountFeatures {
    /// <summary>
    /// Gets or Sets DisableReset
    /// </summary>
    [DataMember(Name="disable_reset", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_reset")]
    public int? DisableReset { get; set; }

    /// <summary>
    /// Gets or Sets DisableReinstall
    /// </summary>
    [DataMember(Name="disable_reinstall", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disable_reinstall")]
    public int? DisableReinstall { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountFeatures {\n");
      sb.Append("  DisableReset: ").Append(DisableReset).Append("\n");
      sb.Append("  DisableReinstall: ").Append(DisableReinstall).Append("\n");
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
