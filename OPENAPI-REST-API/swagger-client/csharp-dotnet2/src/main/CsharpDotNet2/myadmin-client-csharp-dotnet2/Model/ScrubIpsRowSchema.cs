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
  public class ScrubIpsRowSchema {
    /// <summary>
    /// Gets or Sets ScrubIpId
    /// </summary>
    [DataMember(Name="scrub_ip_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "scrub_ip_id")]
    public int? ScrubIpId { get; set; }

    /// <summary>
    /// Gets or Sets RepeatInvoicesCost
    /// </summary>
    [DataMember(Name="repeat_invoices_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeat_invoices_cost")]
    public decimal? RepeatInvoicesCost { get; set; }

    /// <summary>
    /// Gets or Sets ScrubIpIp
    /// </summary>
    [DataMember(Name="scrub_ip_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "scrub_ip_ip")]
    public string ScrubIpIp { get; set; }

    /// <summary>
    /// Gets or Sets ScrubIpStatus
    /// </summary>
    [DataMember(Name="scrub_ip_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "scrub_ip_status")]
    public string ScrubIpStatus { get; set; }

    /// <summary>
    /// Gets or Sets ServicesName
    /// </summary>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ScrubIpsRowSchema {\n");
      sb.Append("  ScrubIpId: ").Append(ScrubIpId).Append("\n");
      sb.Append("  RepeatInvoicesCost: ").Append(RepeatInvoicesCost).Append("\n");
      sb.Append("  ScrubIpIp: ").Append(ScrubIpIp).Append("\n");
      sb.Append("  ScrubIpStatus: ").Append(ScrubIpStatus).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
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
