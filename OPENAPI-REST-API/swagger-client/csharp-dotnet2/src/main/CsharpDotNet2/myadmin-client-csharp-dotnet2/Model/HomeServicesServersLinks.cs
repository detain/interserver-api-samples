using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Map of dedicated server service IDs to their hostnames for the account dashboard.
  /// </summary>
  [DataContract]
  public class HomeServicesServersLinks {
    /// <summary>
    /// Link to a server.
    /// </summary>
    /// <value>Link to a server.</value>
    [DataMember(Name="16058", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "16058")]
    public string _16058 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeServicesServersLinks {\n");
      sb.Append("  _16058: ").Append(_16058).Append("\n");
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
