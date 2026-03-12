using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Schema for the WebsitesOrder object
  /// </summary>
  [DataContract]
  public class WebsitesOrder {
    /// <summary>
    /// Step description
    /// </summary>
    /// <value>Step description</value>
    [DataMember(Name="step", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "step")]
    public string Step { get; set; }

    /// <summary>
    /// Website description
    /// </summary>
    /// <value>Website description</value>
    [DataMember(Name="website", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website")]
    public string Website { get; set; }

    /// <summary>
    /// Period description
    /// </summary>
    /// <value>Period description</value>
    [DataMember(Name="period", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "period")]
    public int? Period { get; set; }

    /// <summary>
    /// Service offer ID description
    /// </summary>
    /// <value>Service offer ID description</value>
    [DataMember(Name="serviceOfferId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceOfferId")]
    public int? ServiceOfferId { get; set; }

    /// <summary>
    /// Gets or Sets Packages
    /// </summary>
    [DataMember(Name="packages", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "packages")]
    public WebsitesOrderPackages Packages { get; set; }

    /// <summary>
    /// Enable domain registering description
    /// </summary>
    /// <value>Enable domain registering description</value>
    [DataMember(Name="enableDomainRegistering", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "enableDomainRegistering")]
    public bool? EnableDomainRegistering { get; set; }

    /// <summary>
    /// Gets or Sets JsonServices
    /// </summary>
    [DataMember(Name="jsonServices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "jsonServices")]
    public WebsitesOrderJsonServices JsonServices { get; set; }

    /// <summary>
    /// Gets or Sets JsonServiceOffers
    /// </summary>
    [DataMember(Name="jsonServiceOffers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "jsonServiceOffers")]
    public WebsitesOrderJsonServiceOffers JsonServiceOffers { get; set; }

    /// <summary>
    /// Gets or Sets ServiceTypes
    /// </summary>
    [DataMember(Name="serviceTypes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceTypes")]
    public WebsitesOrderServiceTypes ServiceTypes { get; set; }

    /// <summary>
    /// Gets or Sets ServiceOffers
    /// </summary>
    [DataMember(Name="serviceOffers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceOffers")]
    public WebsitesOrderServiceOffers ServiceOffers { get; set; }

    /// <summary>
    /// Gets or Sets Packges
    /// </summary>
    [DataMember(Name="packges", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "packges")]
    public WebsitesOrderPackges Packges { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrder {\n");
      sb.Append("  Step: ").Append(Step).Append("\n");
      sb.Append("  Website: ").Append(Website).Append("\n");
      sb.Append("  Period: ").Append(Period).Append("\n");
      sb.Append("  ServiceOfferId: ").Append(ServiceOfferId).Append("\n");
      sb.Append("  Packages: ").Append(Packages).Append("\n");
      sb.Append("  EnableDomainRegistering: ").Append(EnableDomainRegistering).Append("\n");
      sb.Append("  JsonServices: ").Append(JsonServices).Append("\n");
      sb.Append("  JsonServiceOffers: ").Append(JsonServiceOffers).Append("\n");
      sb.Append("  ServiceTypes: ").Append(ServiceTypes).Append("\n");
      sb.Append("  ServiceOffers: ").Append(ServiceOffers).Append("\n");
      sb.Append("  Packges: ").Append(Packges).Append("\n");
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
