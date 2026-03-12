using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request data for a new DNS record.
  /// </summary>
  [DataContract]
  public class DnsNewRecord {
    /// <summary>
    /// Name part of record
    /// </summary>
    /// <value>Name part of record</value>
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
    /// Content of record
    /// </summary>
    /// <value>Content of record</value>
    [DataMember(Name="content", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "content")]
    public string Content { get; set; }

    /// <summary>
    /// Time-to-live
    /// </summary>
    /// <value>Time-to-live</value>
    [DataMember(Name="ttl", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ttl")]
    public int? Ttl { get; set; }

    /// <summary>
    /// Priority
    /// </summary>
    /// <value>Priority</value>
    [DataMember(Name="prio", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "prio")]
    public int? Prio { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DnsNewRecord {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Content: ").Append(Content).Append("\n");
      sb.Append("  Ttl: ").Append(Ttl).Append("\n");
      sb.Append("  Prio: ").Append(Prio).Append("\n");
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
