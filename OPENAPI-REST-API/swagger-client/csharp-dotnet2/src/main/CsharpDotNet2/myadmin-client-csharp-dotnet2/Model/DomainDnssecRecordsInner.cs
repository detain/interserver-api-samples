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
  public class DomainDnssecRecordsInner {
    /// <summary>
    /// Gets or Sets Algorithm
    /// </summary>
    [DataMember(Name="algorithm", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "algorithm")]
    public string Algorithm { get; set; }

    /// <summary>
    /// Gets or Sets DigestType
    /// </summary>
    [DataMember(Name="digest_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "digest_type")]
    public string DigestType { get; set; }

    /// <summary>
    /// Gets or Sets Digest
    /// </summary>
    [DataMember(Name="digest", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "digest")]
    public string Digest { get; set; }

    /// <summary>
    /// Gets or Sets KeyTag
    /// </summary>
    [DataMember(Name="key_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "key_tag")]
    public string KeyTag { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainDnssecRecordsInner {\n");
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
