using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// New helpdesk ticket request.  
  /// </summary>
  [DataContract]
  public class TicketNew {
    /// <summary>
    /// Gets or Sets Subject
    /// </summary>
    [DataMember(Name="subject", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "subject")]
    public string Subject { get; set; }

    /// <summary>
    /// Gets or Sets Body
    /// </summary>
    [DataMember(Name="body", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "body")]
    public string Body { get; set; }

    /// <summary>
    /// Gets or Sets ServiceId
    /// </summary>
    [DataMember(Name="service_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_id")]
    public int? ServiceId { get; set; }

    /// <summary>
    /// Gets or Sets ServiceModule
    /// </summary>
    [DataMember(Name="service_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "service_module")]
    public string ServiceModule { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TicketNew {\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("  Body: ").Append(Body).Append("\n");
      sb.Append("  ServiceId: ").Append(ServiceId).Append("\n");
      sb.Append("  ServiceModule: ").Append(ServiceModule).Append("\n");
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
