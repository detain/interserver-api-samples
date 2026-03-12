using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Payload for updating the default account payment method.
  /// </summary>
  [DataContract]
  public class BillingPaymentMethodRequest {
    /// <summary>
    /// Payment method identifier (cc, paypal, or cc{index}).
    /// </summary>
    /// <value>Payment method identifier (cc, paypal, or cc{index}).</value>
    [DataMember(Name="payment_method", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "payment_method")]
    public string PaymentMethod { get; set; }

    /// <summary>
    /// Whether automatic credit card payments are enabled.
    /// </summary>
    /// <value>Whether automatic credit card payments are enabled.</value>
    [DataMember(Name="cc_auto", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cc_auto")]
    public string CcAuto { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BillingPaymentMethodRequest {\n");
      sb.Append("  PaymentMethod: ").Append(PaymentMethod).Append("\n");
      sb.Append("  CcAuto: ").Append(CcAuto).Append("\n");
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
