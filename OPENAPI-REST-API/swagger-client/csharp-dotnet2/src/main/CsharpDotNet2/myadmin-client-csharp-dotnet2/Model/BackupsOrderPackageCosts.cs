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
  public class BackupsOrderPackageCosts {
    /// <summary>
    /// The cost associated with package 11006.
    /// </summary>
    /// <value>The cost associated with package 11006.</value>
    [DataMember(Name="11006", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "11006")]
    public int? _11006 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupsOrderPackageCosts {\n");
      sb.Append("  _11006: ").Append(_11006).Append("\n");
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
