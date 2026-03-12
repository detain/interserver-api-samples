using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Vps&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class VpsRow {
    /// <summary>
    /// The id of the vps.
    /// </summary>
    /// <value>The id of the vps.</value>
    [DataMember(Name="vps_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_id")]
    public string VpsId { get; set; }

    /// <summary>
    /// The name of the vps.
    /// </summary>
    /// <value>The name of the vps.</value>
    [DataMember(Name="vps_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_name")]
    public string VpsName { get; set; }

    /// <summary>
    /// The repeat invoices cost of the vps.
    /// </summary>
    /// <value>The repeat invoices cost of the vps.</value>
    [DataMember(Name="repeat_invoices_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeat_invoices_cost")]
    public string RepeatInvoicesCost { get; set; }

    /// <summary>
    /// The hostname of the vps.
    /// </summary>
    /// <value>The hostname of the vps.</value>
    [DataMember(Name="vps_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_hostname")]
    public string VpsHostname { get; set; }

    /// <summary>
    /// The ip of the vps.
    /// </summary>
    /// <value>The ip of the vps.</value>
    [DataMember(Name="vps_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_ip")]
    public string VpsIp { get; set; }

    /// <summary>
    /// The status of the vps.
    /// </summary>
    /// <value>The status of the vps.</value>
    [DataMember(Name="vps_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_status")]
    public string VpsStatus { get; set; }

    /// <summary>
    /// The services name of the vps.
    /// </summary>
    /// <value>The services name of the vps.</value>
    [DataMember(Name="services_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services_name")]
    public string ServicesName { get; set; }

    /// <summary>
    /// The comment of the vps.
    /// </summary>
    /// <value>The comment of the vps.</value>
    [DataMember(Name="vps_comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_comment")]
    public string VpsComment { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsRow {\n");
      sb.Append("  VpsId: ").Append(VpsId).Append("\n");
      sb.Append("  VpsName: ").Append(VpsName).Append("\n");
      sb.Append("  RepeatInvoicesCost: ").Append(RepeatInvoicesCost).Append("\n");
      sb.Append("  VpsHostname: ").Append(VpsHostname).Append("\n");
      sb.Append("  VpsIp: ").Append(VpsIp).Append("\n");
      sb.Append("  VpsStatus: ").Append(VpsStatus).Append("\n");
      sb.Append("  ServicesName: ").Append(ServicesName).Append("\n");
      sb.Append("  VpsComment: ").Append(VpsComment).Append("\n");
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
