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
  public class QuickserverOrderVersionCentosstream8 {
    /// <summary>
    /// Version details of CentOS Stream 8.
    /// </summary>
    /// <value>Version details of CentOS Stream 8.</value>
    [DataMember(Name="centosstream-8", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "centosstream-8")]
    public string Centosstream8 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverOrderVersionCentosstream8 {\n");
      sb.Append("  Centosstream8: ").Append(Centosstream8).Append("\n");
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
