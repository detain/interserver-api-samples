using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
  /// </summary>
  [DataContract]
  public class ServiceOrderPostResponse {
    /// <summary>
    /// Whether the order was accepted and can proceed to payment.
    /// </summary>
    /// <value>Whether the order was accepted and can proceed to payment.</value>
    [DataMember(Name="continue", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "continue")]
    public bool? _Continue { get; set; }

    /// <summary>
    /// List of validation errors (empty on success).
    /// </summary>
    /// <value>List of validation errors (empty on success).</value>
    [DataMember(Name="errors", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "errors")]
    public List<string> Errors { get; set; }

    /// <summary>
    /// Total cost of the order.
    /// </summary>
    /// <value>Total cost of the order.</value>
    [DataMember(Name="total_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "total_cost")]
    public string TotalCost { get; set; }

    /// <summary>
    /// Primary invoice ID for payment.
    /// </summary>
    /// <value>Primary invoice ID for payment.</value>
    [DataMember(Name="iid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "iid")]
    public string Iid { get; set; }

    /// <summary>
    /// All invoice identifiers associated with the order.
    /// </summary>
    /// <value>All invoice identifiers associated with the order.</value>
    [DataMember(Name="iids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "iids")]
    public List<string> Iids { get; set; }

    /// <summary>
    /// Numeric invoice IDs for use with billing endpoints.
    /// </summary>
    /// <value>Numeric invoice IDs for use with billing endpoints.</value>
    [DataMember(Name="real_iids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "real_iids")]
    public List<string> RealIids { get; set; }

    /// <summary>
    /// The new service ID created by the order.
    /// </summary>
    /// <value>The new service ID created by the order.</value>
    [DataMember(Name="serviceId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceId")]
    public int? ServiceId { get; set; }

    /// <summary>
    /// Human-readable description of the invoice.
    /// </summary>
    /// <value>Human-readable description of the invoice.</value>
    [DataMember(Name="invoice_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoice_description")]
    public string InvoiceDescription { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServiceOrderPostResponse {\n");
      sb.Append("  _Continue: ").Append(_Continue).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("  TotalCost: ").Append(TotalCost).Append("\n");
      sb.Append("  Iid: ").Append(Iid).Append("\n");
      sb.Append("  Iids: ").Append(Iids).Append("\n");
      sb.Append("  RealIids: ").Append(RealIids).Append("\n");
      sb.Append("  ServiceId: ").Append(ServiceId).Append("\n");
      sb.Append("  InvoiceDescription: ").Append(InvoiceDescription).Append("\n");
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
