using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Ordering metadata for domain registration and transfers.
  /// </summary>
  [DataContract]
  public class DomainOrder {
    /// <summary>
    /// Cost of Whois Privacy
    /// </summary>
    /// <value>Cost of Whois Privacy</value>
    [DataMember(Name="whoisPrivacyCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "whoisPrivacyCost")]
    public string WhoisPrivacyCost { get; set; }

    /// <summary>
    /// Gets or Sets Services
    /// </summary>
    [DataMember(Name="services", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "services")]
    public DomainOrderServices Services { get; set; }

    /// <summary>
    /// Map of TLDs to domain service IDs.
    /// </summary>
    /// <value>Map of TLDs to domain service IDs.</value>
    [DataMember(Name="tldServices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tldServices")]
    public Object TldServices { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainOrder {\n");
      sb.Append("  WhoisPrivacyCost: ").Append(WhoisPrivacyCost).Append("\n");
      sb.Append("  Services: ").Append(Services).Append("\n");
      sb.Append("  TldServices: ").Append(TldServices).Append("\n");
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
