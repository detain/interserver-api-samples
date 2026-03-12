using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class TicketPostDetailsInner {
    /// <summary>
    /// Gets or Sets PostId
    /// </summary>
    [DataMember(Name="post_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "post_id")]
    public int? PostId { get; set; }

    /// <summary>
    /// Gets or Sets Date
    /// </summary>
    [DataMember(Name="date", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "date")]
    public string Date { get; set; }

    /// <summary>
    /// Gets or Sets Contents
    /// </summary>
    [DataMember(Name="contents", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "contents")]
    public string Contents { get; set; }

    /// <summary>
    /// Gets or Sets Creator
    /// </summary>
    [DataMember(Name="creator", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "creator")]
    public string Creator { get; set; }

    /// <summary>
    /// Gets or Sets CreatorEmail
    /// </summary>
    [DataMember(Name="creator_email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "creator_email")]
    public string CreatorEmail { get; set; }

    /// <summary>
    /// Gets or Sets CreatorName
    /// </summary>
    [DataMember(Name="creator_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "creator_name")]
    public string CreatorName { get; set; }

    /// <summary>
    /// Gets or Sets Hasattachments
    /// </summary>
    [DataMember(Name="hasattachments", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hasattachments")]
    public int? Hasattachments { get; set; }

    /// <summary>
    /// Gets or Sets AttachmentDownload
    /// </summary>
    [DataMember(Name="attachment_download", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "attachment_download")]
    public string AttachmentDownload { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TicketPostDetailsInner {\n");
      sb.Append("  PostId: ").Append(PostId).Append("\n");
      sb.Append("  Date: ").Append(Date).Append("\n");
      sb.Append("  Contents: ").Append(Contents).Append("\n");
      sb.Append("  Creator: ").Append(Creator).Append("\n");
      sb.Append("  CreatorEmail: ").Append(CreatorEmail).Append("\n");
      sb.Append("  CreatorName: ").Append(CreatorName).Append("\n");
      sb.Append("  Hasattachments: ").Append(Hasattachments).Append("\n");
      sb.Append("  AttachmentDownload: ").Append(AttachmentDownload).Append("\n");
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
