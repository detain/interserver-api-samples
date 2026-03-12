using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Ticket details
  /// </summary>
  [DataContract]
  public class ViewTicketResponse {
    /// <summary>
    /// Gets or Sets Success
    /// </summary>
    [DataMember(Name="success", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "success")]
    public bool? Success { get; set; }

    /// <summary>
    /// Gets or Sets Ticket
    /// </summary>
    [DataMember(Name="ticket", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticket")]
    public TicketDetails Ticket { get; set; }

    /// <summary>
    /// Gets or Sets TicketCustomFields
    /// </summary>
    [DataMember(Name="ticket_custom_fields", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticket_custom_fields")]
    public TicketCustomFieldDetails TicketCustomFields { get; set; }

    /// <summary>
    /// Gets or Sets TicketPosts
    /// </summary>
    [DataMember(Name="ticket_posts", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticket_posts")]
    public TicketPostDetails TicketPosts { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ViewTicketResponse {\n");
      sb.Append("  Success: ").Append(Success).Append("\n");
      sb.Append("  Ticket: ").Append(Ticket).Append("\n");
      sb.Append("  TicketCustomFields: ").Append(TicketCustomFields).Append("\n");
      sb.Append("  TicketPosts: ").Append(TicketPosts).Append("\n");
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
