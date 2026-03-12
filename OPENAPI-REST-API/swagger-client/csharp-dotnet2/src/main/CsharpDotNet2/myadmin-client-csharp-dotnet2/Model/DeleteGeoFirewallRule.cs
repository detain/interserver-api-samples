using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Delete geo firewall rule for your scrub ip
  /// </summary>
  [DataContract]
  public class DeleteGeoFirewallRule {
    /// <summary>
    /// Gets or Sets RuleId
    /// </summary>
    [DataMember(Name="rule_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rule_id")]
    public int? RuleId { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DeleteGeoFirewallRule {\n");
      sb.Append("  RuleId: ").Append(RuleId).Append("\n");
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
