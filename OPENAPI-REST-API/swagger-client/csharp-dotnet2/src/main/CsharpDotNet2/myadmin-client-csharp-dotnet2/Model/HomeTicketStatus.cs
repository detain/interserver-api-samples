using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Ticket statuses.
  /// </summary>
  [DataContract]
  public class HomeTicketStatus {
    /// <summary>
    /// Count of open tickets.
    /// </summary>
    /// <value>Count of open tickets.</value>
    [DataMember(Name="Open", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Open")]
    public int? Open { get; set; }

    /// <summary>
    /// Count of tickets on hold.
    /// </summary>
    /// <value>Count of tickets on hold.</value>
    [DataMember(Name="On Hold", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "On Hold")]
    public int? OnHold { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeTicketStatus {\n");
      sb.Append("  Open: ").Append(Open).Append("\n");
      sb.Append("  OnHold: ").Append(OnHold).Append("\n");
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
