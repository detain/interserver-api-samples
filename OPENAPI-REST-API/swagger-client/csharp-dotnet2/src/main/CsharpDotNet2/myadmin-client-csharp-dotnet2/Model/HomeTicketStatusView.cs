using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Ticket statuses with view numbers.
  /// </summary>
  [DataContract]
  public class HomeTicketStatusView {
    /// <summary>
    /// Status corresponding to view number 4.
    /// </summary>
    /// <value>Status corresponding to view number 4.</value>
    [DataMember(Name="4", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "4")]
    public string _4 { get; set; }

    /// <summary>
    /// Status corresponding to view number 5.
    /// </summary>
    /// <value>Status corresponding to view number 5.</value>
    [DataMember(Name="5", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "5")]
    public string _5 { get; set; }

    /// <summary>
    /// Status corresponding to view number 6.
    /// </summary>
    /// <value>Status corresponding to view number 6.</value>
    [DataMember(Name="6", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "6")]
    public string _6 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeTicketStatusView {\n");
      sb.Append("  _4: ").Append(_4).Append("\n");
      sb.Append("  _5: ").Append(_5).Append("\n");
      sb.Append("  _6: ").Append(_6).Append("\n");
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
