using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The listing of blocked emails.
  /// </summary>
  [DataContract]
  public class MailBlocks {
    /// <summary>
    /// Gets or Sets Local
    /// </summary>
    [DataMember(Name="local", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "local")]
    public List<MailBlockClickHouse> Local { get; set; }

    /// <summary>
    /// Gets or Sets Mbtrap
    /// </summary>
    [DataMember(Name="mbtrap", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mbtrap")]
    public List<MailBlockClickHouse> Mbtrap { get; set; }

    /// <summary>
    /// Gets or Sets Subject
    /// </summary>
    [DataMember(Name="subject", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "subject")]
    public List<MailBlockRspamd> Subject { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailBlocks {\n");
      sb.Append("  Local: ").Append(Local).Append("\n");
      sb.Append("  Mbtrap: ").Append(Mbtrap).Append("\n");
      sb.Append("  Subject: ").Append(Subject).Append("\n");
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
