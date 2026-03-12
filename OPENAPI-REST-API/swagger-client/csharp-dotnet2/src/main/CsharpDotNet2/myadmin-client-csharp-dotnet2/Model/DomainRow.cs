using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class DomainRow {
    /// <summary>
    /// The ID number of the domain in our billing system.
    /// </summary>
    /// <value>The ID number of the domain in our billing system.</value>
    [DataMember(Name="domain_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_id")]
    public string DomainId { get; set; }

    /// <summary>
    /// The hostname of the domain.
    /// </summary>
    /// <value>The hostname of the domain.</value>
    [DataMember(Name="domain_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_hostname")]
    public string DomainHostname { get; set; }

    /// <summary>
    /// The expiration date of the domain.
    /// </summary>
    /// <value>The expiration date of the domain.</value>
    [DataMember(Name="domain_expire_date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_expire_date")]
    public string DomainExpireDate { get; set; }

    /// <summary>
    /// The cost of the domain.
    /// </summary>
    /// <value>The cost of the domain.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public string Cost { get; set; }

    /// <summary>
    /// The billing / registration status of the domain.
    /// </summary>
    /// <value>The billing / registration status of the domain.</value>
    [DataMember(Name="domain_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_status")]
    public string DomainStatus { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainRow {\n");
      sb.Append("  DomainId: ").Append(DomainId).Append("\n");
      sb.Append("  DomainHostname: ").Append(DomainHostname).Append("\n");
      sb.Append("  DomainExpireDate: ").Append(DomainExpireDate).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
      sb.Append("  DomainStatus: ").Append(DomainStatus).Append("\n");
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
