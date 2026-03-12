using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Example map of TLDs to service IDs for domain ordering.
  /// </summary>
  [DataContract]
  public class DomainOrderTldServices {
    /// <summary>
    /// Service ID for .asia TLD
    /// </summary>
    /// <value>Service ID for .asia TLD</value>
    [DataMember(Name=".asia", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = ".asia")]
    public int? Asia { get; set; }

    /// <summary>
    /// Service ID for .be TLD
    /// </summary>
    /// <value>Service ID for .be TLD</value>
    [DataMember(Name=".be", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = ".be")]
    public int? Be { get; set; }

    /// <summary>
    /// Service ID for .biz TLD
    /// </summary>
    /// <value>Service ID for .biz TLD</value>
    [DataMember(Name=".biz", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = ".biz")]
    public int? Biz { get; set; }

    /// <summary>
    /// Service ID for .ca TLD
    /// </summary>
    /// <value>Service ID for .ca TLD</value>
    [DataMember(Name=".ca", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = ".ca")]
    public int? Ca { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainOrderTldServices {\n");
      sb.Append("  Asia: ").Append(Asia).Append("\n");
      sb.Append("  Be: ").Append(Be).Append("\n");
      sb.Append("  Biz: ").Append(Biz).Append("\n");
      sb.Append("  Ca: ").Append(Ca).Append("\n");
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
