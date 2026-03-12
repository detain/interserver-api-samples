using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A single row in the backup IP information table.
  /// </summary>
  [DataContract]
  public class BackupIPInfoRow {
    /// <summary>
    /// Description of the IP information.
    /// </summary>
    /// <value>Description of the IP information.</value>
    [DataMember(Name="desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "desc")]
    public string Desc { get; set; }

    /// <summary>
    /// Value of the IP information.
    /// </summary>
    /// <value>Value of the IP information.</value>
    [DataMember(Name="value", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "value")]
    public string Value { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupIPInfoRow {\n");
      sb.Append("  Desc: ").Append(Desc).Append("\n");
      sb.Append("  Value: ").Append(Value).Append("\n");
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
