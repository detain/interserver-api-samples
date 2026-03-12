using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Blocklist status information for a mail service.
  /// </summary>
  [DataContract]
  public class MailDelistResponse {
    /// <summary>
    /// Mail service ID.
    /// </summary>
    /// <value>Mail service ID.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public int? Id { get; set; }

    /// <summary>
    /// Local blocklist entries.
    /// </summary>
    /// <value>Local blocklist entries.</value>
    [DataMember(Name="local", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "local")]
    public List<Object> Local { get; set; }

    /// <summary>
    /// MailBaby trap block entries.
    /// </summary>
    /// <value>MailBaby trap block entries.</value>
    [DataMember(Name="mbtrap", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mbtrap")]
    public List<Object> Mbtrap { get; set; }

    /// <summary>
    /// Subject-based block entries.
    /// </summary>
    /// <value>Subject-based block entries.</value>
    [DataMember(Name="subject", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "subject")]
    public List<Object> Subject { get; set; }

    /// <summary>
    /// Manually blocked entries.
    /// </summary>
    /// <value>Manually blocked entries.</value>
    [DataMember(Name="manual", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "manual")]
    public List<Object> Manual { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailDelistResponse {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Local: ").Append(Local).Append("\n");
      sb.Append("  Mbtrap: ").Append(Mbtrap).Append("\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
      sb.Append("  Manual: ").Append(Manual).Append("\n");
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
