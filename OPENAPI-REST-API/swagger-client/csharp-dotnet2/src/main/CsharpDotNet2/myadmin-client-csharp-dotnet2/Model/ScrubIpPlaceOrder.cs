using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Place ScrubIP Order
  /// </summary>
  [DataContract]
  public class ScrubIpPlaceOrder {
    /// <summary>
    /// Gets or Sets ServiceType
    /// </summary>
    [DataMember(Name="service_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_type")]
    public int? ServiceType { get; set; }

    /// <summary>
    /// Gets or Sets Ip
    /// </summary>
    [DataMember(Name="ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip")]
    public string Ip { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ScrubIpPlaceOrder {\n");
      sb.Append("  ServiceType: ").Append(ServiceType).Append("\n");
      sb.Append("  Ip: ").Append(Ip).Append("\n");
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
