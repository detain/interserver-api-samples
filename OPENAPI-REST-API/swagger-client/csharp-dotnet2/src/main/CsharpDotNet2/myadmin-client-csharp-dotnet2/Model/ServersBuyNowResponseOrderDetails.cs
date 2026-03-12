using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Details of the placed order.
  /// </summary>
  [DataContract]
  public class ServersBuyNowResponseOrderDetails {
    /// <summary>
    /// The newly created service ID for the ordered server.
    /// </summary>
    /// <value>The newly created service ID for the ordered server.</value>
    [DataMember(Name="service_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_id")]
    public decimal? ServiceId { get; set; }

    /// <summary>
    /// The invoice ID generated for the order.
    /// </summary>
    /// <value>The invoice ID generated for the order.</value>
    [DataMember(Name="invoice_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoice_id")]
    public decimal? InvoiceId { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServersBuyNowResponseOrderDetails {\n");
      sb.Append("  ServiceId: ").Append(ServiceId).Append("\n");
      sb.Append("  InvoiceId: ").Append(InvoiceId).Append("\n");
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
