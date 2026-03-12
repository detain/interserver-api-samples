using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request payload for adding DNSSEC DS records to a domain.
  /// </summary>
  [DataContract]
  public class DomainDnssecRequest {
    /// <summary>
    /// List of DNSSEC algorithm IDs for each record.
    /// </summary>
    /// <value>List of DNSSEC algorithm IDs for each record.</value>
    [DataMember(Name="algorithm", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "algorithm")]
    public List<int?> Algorithm { get; set; }

    /// <summary>
    /// List of digest type IDs for each record.
    /// </summary>
    /// <value>List of digest type IDs for each record.</value>
    [DataMember(Name="digest_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "digest_type")]
    public List<int?> DigestType { get; set; }

    /// <summary>
    /// List of hex digests for each record.
    /// </summary>
    /// <value>List of hex digests for each record.</value>
    [DataMember(Name="digest", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "digest")]
    public List<string> Digest { get; set; }

    /// <summary>
    /// List of key tag values corresponding to each record.
    /// </summary>
    /// <value>List of key tag values corresponding to each record.</value>
    [DataMember(Name="key_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "key_tag")]
    public List<int?> KeyTag { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainDnssecRequest {\n");
      sb.Append("  Algorithm: ").Append(Algorithm).Append("\n");
      sb.Append("  DigestType: ").Append(DigestType).Append("\n");
      sb.Append("  Digest: ").Append(Digest).Append("\n");
      sb.Append("  KeyTag: ").Append(KeyTag).Append("\n");
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
