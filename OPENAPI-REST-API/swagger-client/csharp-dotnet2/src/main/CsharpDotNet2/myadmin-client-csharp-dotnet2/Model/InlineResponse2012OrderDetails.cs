using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class InlineResponse2012OrderDetails {
    /// <summary>
    /// Gets or Sets TotalCost
    /// </summary>
    [DataMember(Name="total_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "total_cost")]
    public int? TotalCost { get; set; }

    /// <summary>
    /// Gets or Sets ServiceId
    /// </summary>
    [DataMember(Name="service_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_id")]
    public int? ServiceId { get; set; }

    /// <summary>
    /// Gets or Sets InvoiceId
    /// </summary>
    [DataMember(Name="invoice_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoice_id")]
    public int? InvoiceId { get; set; }

    /// <summary>
    /// Gets or Sets InvoiceDescription
    /// </summary>
    [DataMember(Name="invoice_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "invoice_description")]
    public string InvoiceDescription { get; set; }

    /// <summary>
    /// Gets or Sets CjParams
    /// </summary>
    [DataMember(Name="cj_params", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cj_params")]
    public InlineResponse2012OrderDetailsCjParams CjParams { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class InlineResponse2012OrderDetails {\n");
      sb.Append("  TotalCost: ").Append(TotalCost).Append("\n");
      sb.Append("  ServiceId: ").Append(ServiceId).Append("\n");
      sb.Append("  InvoiceId: ").Append(InvoiceId).Append("\n");
      sb.Append("  InvoiceDescription: ").Append(InvoiceDescription).Append("\n");
      sb.Append("  CjParams: ").Append(CjParams).Append("\n");
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
