using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Backup Order validation response
  /// </summary>
  [DataContract]
  public class BackupOrderPutResponse {
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
    /// Gets or Sets ServiceType
    /// </summary>
    [DataMember(Name="serviceType", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceType")]
    public int? ServiceType { get; set; }

    /// <summary>
    /// Gets or Sets ServiceCost
    /// </summary>
    [DataMember(Name="serviceCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceCost")]
    public string ServiceCost { get; set; }

    /// <summary>
    /// Gets or Sets OriginalCost
    /// </summary>
    [DataMember(Name="originalCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "originalCost")]
    public string OriginalCost { get; set; }

    /// <summary>
    /// Gets or Sets RepeatServiceCost
    /// </summary>
    [DataMember(Name="repeatServiceCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeatServiceCost")]
    public string RepeatServiceCost { get; set; }

    /// <summary>
    /// Gets or Sets Hostname
    /// </summary>
    [DataMember(Name="hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hostname")]
    public string Hostname { get; set; }

    /// <summary>
    /// Gets or Sets Password
    /// </summary>
    [DataMember(Name="password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "password")]
    public string Password { get; set; }

    /// <summary>
    /// Gets or Sets Coupon
    /// </summary>
    [DataMember(Name="coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "coupon")]
    public string Coupon { get; set; }

    /// <summary>
    /// Gets or Sets CouponCode
    /// </summary>
    [DataMember(Name="couponCode", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "couponCode")]
    public int? CouponCode { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupOrderPutResponse {\n");
      sb.Append("  _Continue: ").Append(_Continue).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("  ServiceType: ").Append(ServiceType).Append("\n");
      sb.Append("  ServiceCost: ").Append(ServiceCost).Append("\n");
      sb.Append("  OriginalCost: ").Append(OriginalCost).Append("\n");
      sb.Append("  RepeatServiceCost: ").Append(RepeatServiceCost).Append("\n");
      sb.Append("  Hostname: ").Append(Hostname).Append("\n");
      sb.Append("  Password: ").Append(Password).Append("\n");
      sb.Append("  Coupon: ").Append(Coupon).Append("\n");
      sb.Append("  CouponCode: ").Append(CouponCode).Append("\n");
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
