using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Create firewall rule for your ip
  /// </summary>
  [DataContract]
  public class CreateFilter {
    /// <summary>
    /// Gets or Sets FilterType
    /// </summary>
    [DataMember(Name="filter_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "filter_type")]
    public string FilterType { get; set; }

    /// <summary>
    /// Gets or Sets Port
    /// </summary>
    [DataMember(Name="port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "port")]
    public int? Port { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class CreateFilter {\n");
      sb.Append("  FilterType: ").Append(FilterType).Append("\n");
      sb.Append("  Port: ").Append(Port).Append("\n");
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
