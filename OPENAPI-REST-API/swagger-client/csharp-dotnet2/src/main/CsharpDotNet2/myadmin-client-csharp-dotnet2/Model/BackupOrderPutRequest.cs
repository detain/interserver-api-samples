using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Parameters to submit to validate your backup order
  /// </summary>
  [DataContract]
  public class BackupOrderPutRequest {
    /// <summary>
    /// Gets or Sets ValidateOnly
    /// </summary>
    [DataMember(Name="validateOnly", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "validateOnly")]
    public bool? ValidateOnly { get; set; }

    /// <summary>
    /// Gets or Sets ServiceType
    /// </summary>
    [DataMember(Name="serviceType", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceType")]
    public int? ServiceType { get; set; }

    /// <summary>
    /// Gets or Sets Coupon
    /// </summary>
    [DataMember(Name="coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "coupon")]
    public string Coupon { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupOrderPutRequest {\n");
      sb.Append("  ValidateOnly: ").Append(ValidateOnly).Append("\n");
      sb.Append("  ServiceType: ").Append(ServiceType).Append("\n");
      sb.Append("  Coupon: ").Append(Coupon).Append("\n");
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
