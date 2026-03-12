using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
  /// </summary>
  [DataContract]
  public class DomainAllInfo {
    /// <summary>
    /// Gets or Sets OPSVersion
    /// </summary>
    [DataMember(Name="_OPS_version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "_OPS_version")]
    public string OPSVersion { get; set; }

    /// <summary>
    /// Gets or Sets Attributes
    /// </summary>
    [DataMember(Name="attributes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "attributes")]
    public DomainAllInfoAttributes Attributes { get; set; }

    /// <summary>
    /// Gets or Sets _Object
    /// </summary>
    [DataMember(Name="object", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "object")]
    public string _Object { get; set; }

    /// <summary>
    /// Gets or Sets Protocol
    /// </summary>
    [DataMember(Name="protocol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "protocol")]
    public string Protocol { get; set; }

    /// <summary>
    /// Gets or Sets ResponseText
    /// </summary>
    [DataMember(Name="response_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "response_text")]
    public string ResponseText { get; set; }

    /// <summary>
    /// Gets or Sets ResponseCode
    /// </summary>
    [DataMember(Name="response_code", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "response_code")]
    public string ResponseCode { get; set; }

    /// <summary>
    /// Gets or Sets Action
    /// </summary>
    [DataMember(Name="action", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "action")]
    public string Action { get; set; }

    /// <summary>
    /// Gets or Sets IsSuccess
    /// </summary>
    [DataMember(Name="is_success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "is_success")]
    public string IsSuccess { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainAllInfo {\n");
      sb.Append("  OPSVersion: ").Append(OPSVersion).Append("\n");
      sb.Append("  Attributes: ").Append(Attributes).Append("\n");
      sb.Append("  _Object: ").Append(_Object).Append("\n");
      sb.Append("  Protocol: ").Append(Protocol).Append("\n");
      sb.Append("  ResponseText: ").Append(ResponseText).Append("\n");
      sb.Append("  ResponseCode: ").Append(ResponseCode).Append("\n");
      sb.Append("  Action: ").Append(Action).Append("\n");
      sb.Append("  IsSuccess: ").Append(IsSuccess).Append("\n");
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
