using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Response from VPS order validation request
  /// </summary>
  [DataContract]
  public class VpsOrderPutResponse {
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
    public List<Object> Errors { get; set; }

    /// <summary>
    /// Gets or Sets CouponCode
    /// </summary>
    [DataMember(Name="coupon_code", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "coupon_code")]
    public int? CouponCode { get; set; }

    /// <summary>
    /// Gets or Sets ServiceCost
    /// </summary>
    [DataMember(Name="service_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_cost")]
    public int? ServiceCost { get; set; }

    /// <summary>
    /// Gets or Sets SliceCost
    /// </summary>
    [DataMember(Name="slice_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "slice_cost")]
    public int? SliceCost { get; set; }

    /// <summary>
    /// Gets or Sets ServiceType
    /// </summary>
    [DataMember(Name="service_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_type")]
    public int? ServiceType { get; set; }

    /// <summary>
    /// Gets or Sets RepeatSliceCost
    /// </summary>
    [DataMember(Name="repeat_slice_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeat_slice_cost")]
    public int? RepeatSliceCost { get; set; }

    /// <summary>
    /// Gets or Sets OriginalSliceCost
    /// </summary>
    [DataMember(Name="original_slice_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "original_slice_cost")]
    public int? OriginalSliceCost { get; set; }

    /// <summary>
    /// Gets or Sets OriginalCost
    /// </summary>
    [DataMember(Name="original_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "original_cost")]
    public int? OriginalCost { get; set; }

    /// <summary>
    /// Gets or Sets RepeatServiceCost
    /// </summary>
    [DataMember(Name="repeat_service_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "repeat_service_cost")]
    public int? RepeatServiceCost { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyServiceCost
    /// </summary>
    [DataMember(Name="monthly_service_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_service_cost")]
    public int? MonthlyServiceCost { get; set; }

    /// <summary>
    /// Gets or Sets Custid
    /// </summary>
    [DataMember(Name="custid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custid")]
    public string Custid { get; set; }

    /// <summary>
    /// Gets or Sets Os
    /// </summary>
    [DataMember(Name="os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os")]
    public string Os { get; set; }

    /// <summary>
    /// Gets or Sets Slices
    /// </summary>
    [DataMember(Name="slices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "slices")]
    public string Slices { get; set; }

    /// <summary>
    /// Gets or Sets Platform
    /// </summary>
    [DataMember(Name="platform", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "platform")]
    public string Platform { get; set; }

    /// <summary>
    /// Gets or Sets Controlpanel
    /// </summary>
    [DataMember(Name="controlpanel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "controlpanel")]
    public string Controlpanel { get; set; }

    /// <summary>
    /// Gets or Sets Period
    /// </summary>
    [DataMember(Name="period", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "period")]
    public int? Period { get; set; }

    /// <summary>
    /// Gets or Sets Location
    /// </summary>
    [DataMember(Name="location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location")]
    public int? Location { get; set; }

    /// <summary>
    /// Gets or Sets Version
    /// </summary>
    [DataMember(Name="version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "version")]
    public string Version { get; set; }

    /// <summary>
    /// Gets or Sets Hostname
    /// </summary>
    [DataMember(Name="hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hostname")]
    public string Hostname { get; set; }

    /// <summary>
    /// Gets or Sets Coupon
    /// </summary>
    [DataMember(Name="coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "coupon")]
    public string Coupon { get; set; }

    /// <summary>
    /// Gets or Sets Rootpass
    /// </summary>
    [DataMember(Name="rootpass", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rootpass")]
    public string Rootpass { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderPutResponse {\n");
      sb.Append("  _Continue: ").Append(_Continue).Append("\n");
      sb.Append("  Errors: ").Append(Errors).Append("\n");
      sb.Append("  CouponCode: ").Append(CouponCode).Append("\n");
      sb.Append("  ServiceCost: ").Append(ServiceCost).Append("\n");
      sb.Append("  SliceCost: ").Append(SliceCost).Append("\n");
      sb.Append("  ServiceType: ").Append(ServiceType).Append("\n");
      sb.Append("  RepeatSliceCost: ").Append(RepeatSliceCost).Append("\n");
      sb.Append("  OriginalSliceCost: ").Append(OriginalSliceCost).Append("\n");
      sb.Append("  OriginalCost: ").Append(OriginalCost).Append("\n");
      sb.Append("  RepeatServiceCost: ").Append(RepeatServiceCost).Append("\n");
      sb.Append("  MonthlyServiceCost: ").Append(MonthlyServiceCost).Append("\n");
      sb.Append("  Custid: ").Append(Custid).Append("\n");
      sb.Append("  Os: ").Append(Os).Append("\n");
      sb.Append("  Slices: ").Append(Slices).Append("\n");
      sb.Append("  Platform: ").Append(Platform).Append("\n");
      sb.Append("  Controlpanel: ").Append(Controlpanel).Append("\n");
      sb.Append("  Period: ").Append(Period).Append("\n");
      sb.Append("  Location: ").Append(Location).Append("\n");
      sb.Append("  Version: ").Append(Version).Append("\n");
      sb.Append("  Hostname: ").Append(Hostname).Append("\n");
      sb.Append("  Coupon: ").Append(Coupon).Append("\n");
      sb.Append("  Rootpass: ").Append(Rootpass).Append("\n");
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
