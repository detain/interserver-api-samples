using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Login session response for backup storage.
  /// </summary>
  [DataContract]
  public class BackupLoginResponse {
    /// <summary>
    /// Indicates whether a login session was created.
    /// </summary>
    /// <value>Indicates whether a login session was created.</value>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// Login URL or error text returned by the storage provider.
    /// </summary>
    /// <value>Login URL or error text returned by the storage provider.</value>
    [DataMember(Name="text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "text")]
    public string Text { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupLoginResponse {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  Text: ").Append(Text).Append("\n");
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
