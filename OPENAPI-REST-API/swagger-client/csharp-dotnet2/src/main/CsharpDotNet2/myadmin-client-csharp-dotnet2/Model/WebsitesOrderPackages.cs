using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Schema for the packages field in WebsitesOrder
  /// </summary>
  [DataContract]
  public class WebsitesOrderPackages {
    /// <summary>
    /// Package description
    /// </summary>
    /// <value>Package description</value>
    [DataMember(Name="11447", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "11447")]
    public string _11447 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class WebsitesOrderPackages {\n");
      sb.Append("  _11447: ").Append(_11447).Append("\n");
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
