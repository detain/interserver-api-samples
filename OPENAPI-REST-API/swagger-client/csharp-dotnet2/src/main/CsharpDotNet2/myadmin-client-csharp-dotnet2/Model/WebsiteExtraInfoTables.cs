using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Supplementary information tables displayed for a webhosting service (links, DNS, preview).
  /// </summary>
  [DataContract]
  public class WebsiteExtraInfoTables {
    /// <summary>
    /// Gets or Sets Links
    /// </summary>
    [DataMember(Name="links", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "links")]
    public WebsiteTable Links { get; set; }

    /// <summary>
    /// Gets or Sets Preview
    /// </summary>
    [DataMember(Name="preview", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "preview")]
    public WebsiteTable Preview { get; set; }

    /// <summary>
    /// Gets or Sets Dns
    /// </summary>
    [DataMember(Name="dns", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "dns")]
    public WebsiteTable Dns { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsiteExtraInfoTables {\n");
      sb.Append("  Links: ").Append(Links).Append("\n");
      sb.Append("  Preview: ").Append(Preview).Append("\n");
      sb.Append("  Dns: ").Append(Dns).Append("\n");
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
