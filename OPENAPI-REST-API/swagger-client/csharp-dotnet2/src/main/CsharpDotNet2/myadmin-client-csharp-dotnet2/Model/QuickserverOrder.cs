using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Available QuickServer options and OS templates for ordering a new QuickServer.
  /// </summary>
  [DataContract]
  public class QuickserverOrder {
    /// <summary>
    /// Quickserver ID.
    /// </summary>
    /// <value>Quickserver ID.</value>
    [DataMember(Name="qs_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_id")]
    public string QsId { get; set; }

    /// <summary>
    /// Gets or Sets ServerDetails
    /// </summary>
    [DataMember(Name="server_details", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_details")]
    public QuickserverOrderServerDetails ServerDetails { get; set; }

    /// <summary>
    /// Gets or Sets Templates
    /// </summary>
    [DataMember(Name="templates", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "templates")]
    public QuickserverOrderTemplates Templates { get; set; }

    /// <summary>
    /// Gets or Sets Version
    /// </summary>
    [DataMember(Name="version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "version")]
    public QuickserverOrderVersion Version { get; set; }

    /// <summary>
    /// Gets or Sets DistroSel
    /// </summary>
    [DataMember(Name="distro_sel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "distro_sel")]
    public QuickserverOrderDistroSel DistroSel { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverOrder {\n");
      sb.Append("  QsId: ").Append(QsId).Append("\n");
      sb.Append("  ServerDetails: ").Append(ServerDetails).Append("\n");
      sb.Append("  Templates: ").Append(Templates).Append("\n");
      sb.Append("  Version: ").Append(Version).Append("\n");
      sb.Append("  DistroSel: ").Append(DistroSel).Append("\n");
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
