using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A listing of the OS Templates available for use.
  /// </summary>
  [DataContract]
  public class VpsTemplatesList {
    /// <summary>
    /// A listing of the templates.
    /// </summary>
    /// <value>A listing of the templates.</value>
    [DataMember(Name="templates", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "templates")]
    public List<VpsTemplateRow> Templates { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsTemplatesList {\n");
      sb.Append("  Templates: ").Append(Templates).Append("\n");
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
