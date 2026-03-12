using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Availability, pricing, and order-field metadata for a domain lookup.
  /// </summary>
  [DataContract]
  public class DomainLookupResponse {
    /// <summary>
    /// Whether the domain is available to register.
    /// </summary>
    /// <value>Whether the domain is available to register.</value>
    [DataMember(Name="available", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "available")]
    public bool? Available { get; set; }

    /// <summary>
    /// Whether the domain is marked as premium by the registrar.
    /// </summary>
    /// <value>Whether the domain is marked as premium by the registrar.</value>
    [DataMember(Name="premium", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "premium")]
    public bool? Premium { get; set; }

    /// <summary>
    /// Indicates if the domain is already used by a website service.
    /// </summary>
    /// <value>Indicates if the domain is already used by a website service.</value>
    [DataMember(Name="website", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "website")]
    public bool? Website { get; set; }

    /// <summary>
    /// Indicates if the domain already exists as a domain service on the account.
    /// </summary>
    /// <value>Indicates if the domain already exists as a domain service on the account.</value>
    [DataMember(Name="domain_service", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_service")]
    public bool? DomainService { get; set; }

    /// <summary>
    /// Service catalog details for the domain's TLD.
    /// </summary>
    /// <value>Service catalog details for the domain's TLD.</value>
    [DataMember(Name="service", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service")]
    public Object Service { get; set; }

    /// <summary>
    /// Whether Whois privacy is available for the TLD.
    /// </summary>
    /// <value>Whether Whois privacy is available for the TLD.</value>
    [DataMember(Name="whois_privacy", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "whois_privacy")]
    public bool? WhoisPrivacy { get; set; }

    /// <summary>
    /// Calculated registration price, when available.
    /// </summary>
    /// <value>Calculated registration price, when available.</value>
    [DataMember(Name="new", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "new")]
    public string _New { get; set; }

    /// <summary>
    /// Calculated renewal price, when available.
    /// </summary>
    /// <value>Calculated renewal price, when available.</value>
    [DataMember(Name="renewal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "renewal")]
    public string Renewal { get; set; }

    /// <summary>
    /// Calculated transfer price, when available.
    /// </summary>
    /// <value>Calculated transfer price, when available.</value>
    [DataMember(Name="transfer", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "transfer")]
    public string Transfer { get; set; }

    /// <summary>
    /// Registrar field requirements for this domain/TLD.
    /// </summary>
    /// <value>Registrar field requirements for this domain/TLD.</value>
    [DataMember(Name="fields", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "fields")]
    public Object Fields { get; set; }

    /// <summary>
    /// Pricing information normalized to supported currencies.
    /// </summary>
    /// <value>Pricing information normalized to supported currencies.</value>
    [DataMember(Name="currencies", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currencies")]
    public Object Currencies { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainLookupResponse {\n");
      sb.Append("  Available: ").Append(Available).Append("\n");
      sb.Append("  Premium: ").Append(Premium).Append("\n");
      sb.Append("  Website: ").Append(Website).Append("\n");
      sb.Append("  DomainService: ").Append(DomainService).Append("\n");
      sb.Append("  Service: ").Append(Service).Append("\n");
      sb.Append("  WhoisPrivacy: ").Append(WhoisPrivacy).Append("\n");
      sb.Append("  _New: ").Append(_New).Append("\n");
      sb.Append("  Renewal: ").Append(Renewal).Append("\n");
      sb.Append("  Transfer: ").Append(Transfer).Append("\n");
      sb.Append("  Fields: ").Append(Fields).Append("\n");
      sb.Append("  Currencies: ").Append(Currencies).Append("\n");
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
