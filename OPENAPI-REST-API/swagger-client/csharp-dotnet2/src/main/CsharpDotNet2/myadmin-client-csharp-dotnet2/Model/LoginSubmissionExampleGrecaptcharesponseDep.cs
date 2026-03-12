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
  public class LoginSubmissionExampleGrecaptcharesponseDep {
    /// <summary>
    /// Gets or Sets W
    /// </summary>
    [DataMember(Name="w", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "w")]
    public int? W { get; set; }

    /// <summary>
    /// Gets or Sets N
    /// </summary>
    [DataMember(Name="n", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "n")]
    public int? N { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LoginSubmissionExampleGrecaptcharesponseDep {\n");
      sb.Append("  W: ").Append(W).Append("\n");
      sb.Append("  N: ").Append(N).Append("\n");
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
