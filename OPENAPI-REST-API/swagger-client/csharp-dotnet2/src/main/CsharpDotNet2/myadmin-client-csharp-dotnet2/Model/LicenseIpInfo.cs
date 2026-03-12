using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// IP address information table for a software license service.
  /// </summary>
  [DataContract]
  public class LicenseIpInfo {
    /// <summary>
    /// Table title
    /// </summary>
    /// <value>Table title</value>
    [DataMember(Name="title", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "title")]
    public string Title { get; set; }

    /// <summary>
    /// Gets or Sets Rows
    /// </summary>
    [DataMember(Name="rows", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rows")]
    public List<LicenseIpInfoRow> Rows { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicenseIpInfo {\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  Rows: ").Append(Rows).Append("\n");
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
