using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Map of domain service IDs to their hostnames for the account dashboard.
  /// </summary>
  [DataContract]
  public class HomeServicesDomainsLinks {
    /// <summary>
    /// Link to a domain.
    /// </summary>
    /// <value>Link to a domain.</value>
    [DataMember(Name="376114", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "376114")]
    public string _376114 { get; set; }

    /// <summary>
    /// Link to a domain.
    /// </summary>
    /// <value>Link to a domain.</value>
    [DataMember(Name="376503", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "376503")]
    public string _376503 { get; set; }

    /// <summary>
    /// Link to a domain.
    /// </summary>
    /// <value>Link to a domain.</value>
    [DataMember(Name="592337", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "592337")]
    public string _592337 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeServicesDomainsLinks {\n");
      sb.Append("  _376114: ").Append(_376114).Append("\n");
      sb.Append("  _376503: ").Append(_376503).Append("\n");
      sb.Append("  _592337: ").Append(_592337).Append("\n");
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
