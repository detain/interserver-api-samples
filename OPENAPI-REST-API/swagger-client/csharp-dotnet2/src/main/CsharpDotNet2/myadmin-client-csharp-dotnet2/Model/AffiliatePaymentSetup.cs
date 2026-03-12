using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Affiliate Payment Setup.  Here you can set if you want the payments to go to &#x60;prepay&#x60; or &#x60;paypal&#x60; and the PayPal email address.
  /// </summary>
  [DataContract]
  public class AffiliatePaymentSetup {
    /// <summary>
    /// Gets or Sets AffiliatePaypal
    /// </summary>
    [DataMember(Name="affiliate_paypal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_paypal")]
    public string AffiliatePaypal { get; set; }

    /// <summary>
    /// Gets or Sets AffiliatePaymentMethod
    /// </summary>
    [DataMember(Name="affiliate_payment_method", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_payment_method")]
    public string AffiliatePaymentMethod { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AffiliatePaymentSetup {\n");
      sb.Append("  AffiliatePaypal: ").Append(AffiliatePaypal).Append("\n");
      sb.Append("  AffiliatePaymentMethod: ").Append(AffiliatePaymentMethod).Append("\n");
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
