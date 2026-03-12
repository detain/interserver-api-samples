using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Control panel license options available for a VPS.
  /// </summary>
  [DataContract]
  public class VpsCPData {
    /// <summary>
    /// Control panel name (e.g., cPanel).
    /// </summary>
    /// <value>Control panel name (e.g., cPanel).</value>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Monthly cost in cents for the control panel license.
    /// </summary>
    /// <value>Monthly cost in cents for the control panel license.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public int? Cost { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsCPData {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
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
