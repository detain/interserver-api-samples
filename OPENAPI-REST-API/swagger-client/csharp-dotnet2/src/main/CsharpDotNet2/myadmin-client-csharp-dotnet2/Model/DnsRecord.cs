using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A single DNS Record row for a Domain
  /// </summary>
  [DataContract]
  public class DnsRecord {
    /// <summary>
    /// The ID of the DNS Record.
    /// </summary>
    /// <value>The ID of the DNS Record.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// The ID of the Domain this is a record of.
    /// </summary>
    /// <value>The ID of the Domain this is a record of.</value>
    [DataMember(Name="domain_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domain_id")]
    public string DomainId { get; set; }

    /// <summary>
    /// Gets or Sets Name
    /// </summary>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Gets or Sets Type
    /// </summary>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public DnsRecordType Type { get; set; }

    /// <summary>
    /// The content of the record, such as the IP address or hsotname.
    /// </summary>
    /// <value>The content of the record, such as the IP address or hsotname.</value>
    [DataMember(Name="content", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "content")]
    public string Content { get; set; }

    /// <summary>
    /// Time To Live (seconds)
    /// </summary>
    /// <value>Time To Live (seconds)</value>
    [DataMember(Name="ttl", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ttl")]
    public string Ttl { get; set; }

    /// <summary>
    /// Priority
    /// </summary>
    /// <value>Priority</value>
    [DataMember(Name="prio", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "prio")]
    public string Prio { get; set; }

    /// <summary>
    /// Gets or Sets Disabled
    /// </summary>
    [DataMember(Name="disabled", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disabled")]
    public string Disabled { get; set; }

    /// <summary>
    /// Alternate name to use for sorting
    /// </summary>
    /// <value>Alternate name to use for sorting</value>
    [DataMember(Name="ordername", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ordername")]
    public string Ordername { get; set; }

    /// <summary>
    /// Gets or Sets Auth
    /// </summary>
    [DataMember(Name="auth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "auth")]
    public string Auth { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DnsRecord {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  DomainId: ").Append(DomainId).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Content: ").Append(Content).Append("\n");
      sb.Append("  Ttl: ").Append(Ttl).Append("\n");
      sb.Append("  Prio: ").Append(Prio).Append("\n");
      sb.Append("  Disabled: ").Append(Disabled).Append("\n");
      sb.Append("  Ordername: ").Append(Ordername).Append("\n");
      sb.Append("  Auth: ").Append(Auth).Append("\n");
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
