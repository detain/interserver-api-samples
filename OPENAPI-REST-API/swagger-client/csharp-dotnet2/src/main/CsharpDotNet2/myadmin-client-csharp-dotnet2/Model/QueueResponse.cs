using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Response after sending an action queue to a service.
  /// </summary>
  [DataContract]
  public class QueueResponse {
    /// <summary>
    /// Response text
    /// </summary>
    /// <value>Response text</value>
    [DataMember(Name="text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "text")]
    public string Text { get; set; }

    /// <summary>
    /// The Queue ID attached to the action.
    /// </summary>
    /// <value>The Queue ID attached to the action.</value>
    [DataMember(Name="queueId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "queueId")]
    public int? QueueId { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QueueResponse {\n");
      sb.Append("  Text: ").Append(Text).Append("\n");
      sb.Append("  QueueId: ").Append(QueueId).Append("\n");
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
