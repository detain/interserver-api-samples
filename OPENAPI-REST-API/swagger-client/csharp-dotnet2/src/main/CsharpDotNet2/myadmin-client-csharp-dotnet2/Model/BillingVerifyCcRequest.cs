using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Payload for verifying a credit card through the verification flow.
  /// </summary>
  [DataContract]
  public class BillingVerifyCcRequest {
    /// <summary>
    /// Card index to verify.
    /// </summary>
    /// <value>Card index to verify.</value>
    [DataMember(Name="idx", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "idx")]
    public int? Idx { get; set; }

    /// <summary>
    /// CVV code for verification.
    /// </summary>
    /// <value>CVV code for verification.</value>
    [DataMember(Name="cc_ccv2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_ccv2")]
    public string CcCcv2 { get; set; }

    /// <summary>
    /// First micro-charge amount for verification.
    /// </summary>
    /// <value>First micro-charge amount for verification.</value>
    [DataMember(Name="cc_amount1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_amount1")]
    public string CcAmount1 { get; set; }

    /// <summary>
    /// Second micro-charge amount for verification.
    /// </summary>
    /// <value>Second micro-charge amount for verification.</value>
    [DataMember(Name="cc_amount2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_amount2")]
    public string CcAmount2 { get; set; }

    /// <summary>
    /// Whether terms were accepted for verification.
    /// </summary>
    /// <value>Whether terms were accepted for verification.</value>
    [DataMember(Name="terms", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "terms")]
    public bool? Terms { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BillingVerifyCcRequest {\n");
      sb.Append("  Idx: ").Append(Idx).Append("\n");
      sb.Append("  CcCcv2: ").Append(CcCcv2).Append("\n");
      sb.Append("  CcAmount1: ").Append(CcAmount1).Append("\n");
      sb.Append("  CcAmount2: ").Append(CcAmount2).Append("\n");
      sb.Append("  Terms: ").Append(Terms).Append("\n");
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
