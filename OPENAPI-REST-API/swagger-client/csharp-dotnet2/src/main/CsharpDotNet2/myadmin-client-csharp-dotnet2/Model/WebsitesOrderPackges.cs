using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The packages data.
  /// </summary>
  [DataContract]
  public class WebsitesOrderPackges {
    /// <summary>
    /// Gets or Sets _11440
    /// </summary>
    [DataMember(Name="11440", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "11440")]
    public WebsitesOrderPackagesInfo _11440 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrderPackges {\n");
      sb.Append("  _11440: ").Append(_11440).Append("\n");
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
