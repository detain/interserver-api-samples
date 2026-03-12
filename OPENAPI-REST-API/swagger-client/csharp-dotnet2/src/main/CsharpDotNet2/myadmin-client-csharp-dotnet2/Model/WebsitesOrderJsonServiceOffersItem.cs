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
  public class WebsitesOrderJsonServiceOffersItem {
    /// <summary>
    /// Service offer ID
    /// </summary>
    /// <value>Service offer ID</value>
    [DataMember(Name="service_offer_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_offer_id")]
    public string ServiceOfferId { get; set; }

    /// <summary>
    /// Service ID
    /// </summary>
    /// <value>Service ID</value>
    [DataMember(Name="service_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_id")]
    public string ServiceId { get; set; }

    /// <summary>
    /// Introductory cost
    /// </summary>
    /// <value>Introductory cost</value>
    [DataMember(Name="intro_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "intro_cost")]
    public int? IntroCost { get; set; }

    /// <summary>
    /// Renewal cost
    /// </summary>
    /// <value>Renewal cost</value>
    [DataMember(Name="renewal_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "renewal_cost")]
    public int? RenewalCost { get; set; }

    /// <summary>
    /// Introductory frequency
    /// </summary>
    /// <value>Introductory frequency</value>
    [DataMember(Name="intro_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "intro_frequency")]
    public string IntroFrequency { get; set; }

    /// <summary>
    /// Renewal frequency
    /// </summary>
    /// <value>Renewal frequency</value>
    [DataMember(Name="renewal_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "renewal_frequency")]
    public string RenewalFrequency { get; set; }

    /// <summary>
    /// Allow coupon
    /// </summary>
    /// <value>Allow coupon</value>
    [DataMember(Name="allow_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "allow_coupon")]
    public string AllowCoupon { get; set; }

    /// <summary>
    /// Service module
    /// </summary>
    /// <value>Service module</value>
    [DataMember(Name="service_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_module")]
    public string ServiceModule { get; set; }

    /// <summary>
    /// Creation date
    /// </summary>
    /// <value>Creation date</value>
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "created_at")]
    public string CreatedAt { get; set; }

    /// <summary>
    /// Update date
    /// </summary>
    /// <value>Update date</value>
    [DataMember(Name="updated_at", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "updated_at")]
    public string UpdatedAt { get; set; }

    /// <summary>
    /// Deletion date
    /// </summary>
    /// <value>Deletion date</value>
    [DataMember(Name="deleted_at", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "deleted_at")]
    public string DeletedAt { get; set; }

    /// <summary>
    /// Currency symbol
    /// </summary>
    /// <value>Currency symbol</value>
    [DataMember(Name="currencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currencySymbol")]
    public string CurrencySymbol { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrderJsonServiceOffersItem {\n");
      sb.Append("  ServiceOfferId: ").Append(ServiceOfferId).Append("\n");
      sb.Append("  ServiceId: ").Append(ServiceId).Append("\n");
      sb.Append("  IntroCost: ").Append(IntroCost).Append("\n");
      sb.Append("  RenewalCost: ").Append(RenewalCost).Append("\n");
      sb.Append("  IntroFrequency: ").Append(IntroFrequency).Append("\n");
      sb.Append("  RenewalFrequency: ").Append(RenewalFrequency).Append("\n");
      sb.Append("  AllowCoupon: ").Append(AllowCoupon).Append("\n");
      sb.Append("  ServiceModule: ").Append(ServiceModule).Append("\n");
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
      sb.Append("  DeletedAt: ").Append(DeletedAt).Append("\n");
      sb.Append("  CurrencySymbol: ").Append(CurrencySymbol).Append("\n");
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
