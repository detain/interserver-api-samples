using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Backup Order Placement Response
  /// </summary>
  [DataContract]
  public class BackupOrderPostResponse {
    /// <summary>
    /// Gets or Sets _Continue
    /// </summary>
    [DataMember(Name="continue", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "continue")]
    public bool? _Continue { get; set; }

    /// <summary>
    /// Gets or Sets Errors
    /// </summary>
    [DataMember(Name="errors", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "errors")]
    public List<string> Errors { get; set; }

    /// <summary>
    /// Gets or Sets TotalCost
    /// </summary>
    [DataMember(Name="total_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "total_cost")]
    public string TotalCost { get; set; }

    /// <summary>
    /// Gets or Sets Iid
    /// </summary>
    [DataMember(Name="iid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "iid")]
    public string Iid { get; set; }

    /// <summary>
    /// Gets or Sets Iids
    /// </summary>
    [DataMember(Name="iids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "iids")]
    public List<string> Iids { get; set; }

    /// <summary>
    /// Gets or Sets RealIids
    /// </summary>
    [DataMember(Name="real_iids", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "real_iids")]
    public List<string> RealIids { get; set; }

    /// <summary>
    /// Gets or Sets ServiceId
    /// </summary>
    [DataMember(Name="serviceId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceId")]
    public int? ServiceId { get; set; }

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
    public BackupOrderPostResponseCjParams CjParams { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupOrderPostResponse {\n");
      sb.Append("  _Continue: ").Append(_Continue).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("  TotalCost: ").Append(TotalCost).Append("\n");
      sb.Append("  Iid: ").Append(Iid).Append("\n");
      sb.Append("  Iids: ").Append(Iids).Append("\n");
      sb.Append("  RealIids: ").Append(RealIids).Append("\n");
      sb.Append("  ServiceId: ").Append(ServiceId).Append("\n");
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
