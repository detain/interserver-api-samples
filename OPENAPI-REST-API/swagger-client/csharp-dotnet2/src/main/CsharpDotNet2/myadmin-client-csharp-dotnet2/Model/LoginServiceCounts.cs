using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Order counts per module.
  /// </summary>
  [DataContract]
  public class LoginServiceCounts {
    /// <summary>
    /// The number of total VPS orders that have been placed in our billing system.
    /// </summary>
    /// <value>The number of total VPS orders that have been placed in our billing system.</value>
    [DataMember(Name="vps", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps")]
    public int? Vps { get; set; }

    /// <summary>
    /// The number of total website orders that have been placed in our billing system.
    /// </summary>
    /// <value>The number of total website orders that have been placed in our billing system.</value>
    [DataMember(Name="websites", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "websites")]
    public int? Websites { get; set; }

    /// <summary>
    /// The number of total server orders that have been placed in our billing system.
    /// </summary>
    /// <value>The number of total server orders that have been placed in our billing system.</value>
    [DataMember(Name="servers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "servers")]
    public int? Servers { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LoginServiceCounts {\n");
      sb.Append("  Vps: ").Append(Vps).Append("\n");
      sb.Append("  Websites: ").Append(Websites).Append("\n");
      sb.Append("  Servers: ").Append(Servers).Append("\n");
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
