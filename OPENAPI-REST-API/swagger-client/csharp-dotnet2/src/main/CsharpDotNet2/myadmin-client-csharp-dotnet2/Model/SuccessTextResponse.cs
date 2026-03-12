using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Response with success flag and text description.
  /// </summary>
  [DataContract]
  public class SuccessTextResponse {
    /// <summary>
    /// Indicates whether or not the command was successful or not.
    /// </summary>
    /// <value>Indicates whether or not the command was successful or not.</value>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// Text associated with the response.
    /// </summary>
    /// <value>Text associated with the response.</value>
    [DataMember(Name="text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "text")]
    public string Text { get; set; }

    /// <summary>
    /// Optional Action relating to the response.
    /// </summary>
    /// <value>Optional Action relating to the response.</value>
    [DataMember(Name="action", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "action")]
    public string Action { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class SuccessTextResponse {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  Text: ").Append(Text).Append("\n");
      sb.Append("  Action: ").Append(Action).Append("\n");
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
