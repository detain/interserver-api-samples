using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request specifying the hostname.
  /// </summary>
  [DataContract]
  public class HostnameObject {
    /// <summary>
    /// Gets or Sets Hostname
    /// </summary>
    [DataMember(Name="hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hostname")]
    public string Hostname { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HostnameObject {\n");
      sb.Append("  Hostname: ").Append(Hostname).Append("\n");
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
