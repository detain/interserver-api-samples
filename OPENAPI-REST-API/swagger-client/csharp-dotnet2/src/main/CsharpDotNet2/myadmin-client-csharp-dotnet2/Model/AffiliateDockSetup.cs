using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Affiliate Landing Page information.
  /// </summary>
  [DataContract]
  public class AffiliateDockSetup {
    /// <summary>
    /// Gets or Sets AffiliateDockTitle
    /// </summary>
    [DataMember(Name="affiliate_dock_title", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_dock_title")]
    public string AffiliateDockTitle { get; set; }

    /// <summary>
    /// Gets or Sets AffiliateDockDescription
    /// </summary>
    [DataMember(Name="affiliate_dock_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "affiliate_dock_description")]
    public string AffiliateDockDescription { get; set; }

    /// <summary>
    /// Gets or Sets ReferrerCoupon
    /// </summary>
    [DataMember(Name="referrer_coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "referrer_coupon")]
    public string ReferrerCoupon { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AffiliateDockSetup {\n");
      sb.Append("  AffiliateDockTitle: ").Append(AffiliateDockTitle).Append("\n");
      sb.Append("  AffiliateDockDescription: ").Append(AffiliateDockDescription).Append("\n");
      sb.Append("  ReferrerCoupon: ").Append(ReferrerCoupon).Append("\n");
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
