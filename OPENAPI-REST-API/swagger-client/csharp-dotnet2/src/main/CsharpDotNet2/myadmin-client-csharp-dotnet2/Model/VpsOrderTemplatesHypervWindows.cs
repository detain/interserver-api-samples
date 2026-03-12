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
  public class VpsOrderTemplatesHypervWindows {
    /// <summary>
    /// Gets or Sets Windows2019Standard
    /// </summary>
    [DataMember(Name="Windows2019Standard", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Windows2019Standard")]
    public string Windows2019Standard { get; set; }

    /// <summary>
    /// Gets or Sets Windows2022
    /// </summary>
    [DataMember(Name="Windows2022", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Windows2022")]
    public string Windows2022 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderTemplatesHypervWindows {\n");
      sb.Append("  Windows2019Standard: ").Append(Windows2019Standard).Append("\n");
      sb.Append("  Windows2022: ").Append(Windows2022).Append("\n");
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
