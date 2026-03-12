using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Detailed ticket information
  /// </summary>
  [DataContract]
  public class TicketDetails {
    /// <summary>
    /// Gets or Sets Ticketid
    /// </summary>
    [DataMember(Name="ticketid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticketid")]
    public int? Ticketid { get; set; }

    /// <summary>
    /// Gets or Sets Ticketmaskid
    /// </summary>
    [DataMember(Name="ticketmaskid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticketmaskid")]
    public string Ticketmaskid { get; set; }

    /// <summary>
    /// Gets or Sets Department
    /// </summary>
    [DataMember(Name="department", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "department")]
    public string Department { get; set; }

    /// <summary>
    /// Gets or Sets Status
    /// </summary>
    [DataMember(Name="status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "status")]
    public string Status { get; set; }

    /// <summary>
    /// Gets or Sets Priority
    /// </summary>
    [DataMember(Name="priority", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "priority")]
    public string Priority { get; set; }

    /// <summary>
    /// Gets or Sets Subject
    /// </summary>
    [DataMember(Name="subject", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "subject")]
    public string Subject { get; set; }

    /// <summary>
    /// Gets or Sets CreatedOn
    /// </summary>
    [DataMember(Name="created_on", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "created_on")]
    public string CreatedOn { get; set; }

    /// <summary>
    /// Gets or Sets UpdatedOn
    /// </summary>
    [DataMember(Name="updated_on", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "updated_on")]
    public string UpdatedOn { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TicketDetails {\n");
      sb.Append("  Ticketid: ").Append(Ticketid).Append("\n");
      sb.Append("  Ticketmaskid: ").Append(Ticketmaskid).Append("\n");
      sb.Append("  Department: ").Append(Department).Append("\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  Priority: ").Append(Priority).Append("\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("  CreatedOn: ").Append(CreatedOn).Append("\n");
      sb.Append("  UpdatedOn: ").Append(UpdatedOn).Append("\n");
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
