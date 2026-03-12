using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request payload for creating a new prepay balance.
  /// </summary>
  [DataContract]
  public class BillingPrepayRequest {
    /// <summary>
    /// Module the prepay should be applied to (for example `default`).
    /// </summary>
    /// <value>Module the prepay should be applied to (for example `default`).</value>
    [DataMember(Name="module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "module")]
    public string Module { get; set; }

    /// <summary>
    /// Amount to add to prepay balance. Minimum is $10.
    /// </summary>
    /// <value>Amount to add to prepay balance. Minimum is $10.</value>
    [DataMember(Name="amount", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "amount")]
    public decimal? Amount { get; set; }

    /// <summary>
    /// Whether the prepay balance should be used automatically.
    /// </summary>
    /// <value>Whether the prepay balance should be used automatically.</value>
    [DataMember(Name="automatic_use", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "automatic_use")]
    public string AutomaticUse { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BillingPrepayRequest {\n");
      sb.Append("  Module: ").Append(Module).Append("\n");
      sb.Append("  Amount: ").Append(Amount).Append("\n");
      sb.Append("  AutomaticUse: ").Append(AutomaticUse).Append("\n");
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
