using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The Reverse DNS entries.
  /// </summary>
  [DataContract]
  public class ReverseDnsEntries {
    /// <summary>
    /// The IPs you have access to and their current reverse dns mapping.
    /// </summary>
    /// <value>The IPs you have access to and their current reverse dns mapping.</value>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public Dictionary<string, Object> Ips { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ReverseDnsEntries {\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
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
