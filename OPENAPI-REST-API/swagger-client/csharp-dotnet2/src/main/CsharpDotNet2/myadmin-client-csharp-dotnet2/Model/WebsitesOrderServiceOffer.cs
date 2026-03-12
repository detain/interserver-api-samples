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
  public class WebsitesOrderServiceOffer {
    /// <summary>
    /// The ID of the service offer.
    /// </summary>
    /// <value>The ID of the service offer.</value>
    [DataMember(Name="service_offer_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_offer_id")]
    public string ServiceOfferId { get; set; }

    /// <summary>
    /// The ID of the associated service.
    /// </summary>
    /// <value>The ID of the associated service.</value>
    [DataMember(Name="service_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_id")]
    public string ServiceId { get; set; }

    /// <summary>
    /// The introductory cost of the service offer.
    /// </summary>
    /// <value>The introductory cost of the service offer.</value>
    [DataMember(Name="intro_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "intro_cost")]
    public string IntroCost { get; set; }

    /// <summary>
    /// The renewal cost of the service offer.
    /// </summary>
    /// <value>The renewal cost of the service offer.</value>
    [DataMember(Name="renewal_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "renewal_cost")]
    public string RenewalCost { get; set; }

    /// <summary>
    /// The introductory frequency of the service offer.
    /// </summary>
    /// <value>The introductory frequency of the service offer.</value>
    [DataMember(Name="intro_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "intro_frequency")]
    public string IntroFrequency { get; set; }

    /// <summary>
    /// The renewal frequency of the service offer.
    /// </summary>
    /// <value>The renewal frequency of the service offer.</value>
    [DataMember(Name="renewal_frequency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "renewal_frequency")]
    public string RenewalFrequency { get; set; }

    /// <summary>
    /// Indicates if coupons are allowed (1 for yes, 0 for no).
    /// </summary>
    /// <value>Indicates if coupons are allowed (1 for yes, 0 for no).</value>
    [DataMember(Name="allow_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "allow_coupon")]
    public string AllowCoupon { get; set; }

    /// <summary>
    /// The module of the service offer.
    /// </summary>
    /// <value>The module of the service offer.</value>
    [DataMember(Name="service_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_module")]
    public string ServiceModule { get; set; }

    /// <summary>
    /// The creation timestamp of the service offer.
    /// </summary>
    /// <value>The creation timestamp of the service offer.</value>
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "created_at")]
    public string CreatedAt { get; set; }

    /// <summary>
    /// The update timestamp of the service offer.
    /// </summary>
    /// <value>The update timestamp of the service offer.</value>
    [DataMember(Name="updated_at", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "updated_at")]
    public string UpdatedAt { get; set; }

    /// <summary>
    /// The deletion timestamp of the service offer.
    /// </summary>
    /// <value>The deletion timestamp of the service offer.</value>
    [DataMember(Name="deleted_at", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "deleted_at")]
    public string DeletedAt { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrderServiceOffer {\n");
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
