using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Map of webhosting service IDs to their hostnames for the account dashboard.
  /// </summary>
  [DataContract]
  public class HomeServicesWebhostingLinks {
    /// <summary>
    /// Link to a website.
    /// </summary>
    /// <value>Link to a website.</value>
    [DataMember(Name="376359", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "376359")]
    public string _376359 { get; set; }

    /// <summary>
    /// Link to a website.
    /// </summary>
    /// <value>Link to a website.</value>
    [DataMember(Name="376473", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "376473")]
    public string _376473 { get; set; }

    /// <summary>
    /// Link to a website.
    /// </summary>
    /// <value>Link to a website.</value>
    [DataMember(Name="386218", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "386218")]
    public string _386218 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeServicesWebhostingLinks {\n");
      sb.Append("  _376359: ").Append(_376359).Append("\n");
      sb.Append("  _376473: ").Append(_376473).Append("\n");
      sb.Append("  _386218: ").Append(_386218).Append("\n");
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
