using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Information about a single ticket.
  /// </summary>
  [DataContract]
  public class TicketsRow {
    /// <summary>
    /// Gets or Sets Title
    /// </summary>
    [DataMember(Name="title", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "title")]
    public string Title { get; set; }

    /// <summary>
    /// Gets or Sets Ticketmaskid
    /// </summary>
    [DataMember(Name="ticketmaskid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticketmaskid")]
    public string Ticketmaskid { get; set; }

    /// <summary>
    /// Gets or Sets Lastreplier
    /// </summary>
    [DataMember(Name="lastreplier", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "lastreplier")]
    public string Lastreplier { get; set; }

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
    /// Gets or Sets TotalReplies
    /// </summary>
    [DataMember(Name="total_replies", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "total_replies")]
    public int? TotalReplies { get; set; }

    /// <summary>
    /// Gets or Sets Lastactivity
    /// </summary>
    [DataMember(Name="lastactivity", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "lastactivity")]
    public string Lastactivity { get; set; }

    /// <summary>
    /// Gets or Sets Departmenttitle
    /// </summary>
    [DataMember(Name="departmenttitle", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "departmenttitle")]
    public string Departmenttitle { get; set; }

    /// <summary>
    /// Gets or Sets Ticketid
    /// </summary>
    [DataMember(Name="ticketid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ticketid")]
    public int? Ticketid { get; set; }

    /// <summary>
    /// Gets or Sets CanClose
    /// </summary>
    [DataMember(Name="can_close", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "can_close")]
    public string CanClose { get; set; }

    /// <summary>
    /// Gets or Sets Attachments
    /// </summary>
    [DataMember(Name="attachments", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "attachments")]
    public Object Attachments { get; set; }

    /// <summary>
    /// Gets or Sets StatusText
    /// </summary>
    [DataMember(Name="status_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "status_text")]
    public string StatusText { get; set; }

    /// <summary>
    /// Gets or Sets _Checked
    /// </summary>
    [DataMember(Name="checked", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "checked")]
    public bool? _Checked { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TicketsRow {\n");
      sb.Append("  Title: ").Append(Title).Append("\n");
      sb.Append("  Ticketmaskid: ").Append(Ticketmaskid).Append("\n");
      sb.Append("  Lastreplier: ").Append(Lastreplier).Append("\n");
      sb.Append("  Status: ").Append(Status).Append("\n");
      sb.Append("  Priority: ").Append(Priority).Append("\n");
      sb.Append("  TotalReplies: ").Append(TotalReplies).Append("\n");
      sb.Append("  Lastactivity: ").Append(Lastactivity).Append("\n");
      sb.Append("  Departmenttitle: ").Append(Departmenttitle).Append("\n");
      sb.Append("  Ticketid: ").Append(Ticketid).Append("\n");
      sb.Append("  CanClose: ").Append(CanClose).Append("\n");
      sb.Append("  Attachments: ").Append(Attachments).Append("\n");
      sb.Append("  StatusText: ").Append(StatusText).Append("\n");
      sb.Append("  _Checked: ").Append(_Checked).Append("\n");
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
