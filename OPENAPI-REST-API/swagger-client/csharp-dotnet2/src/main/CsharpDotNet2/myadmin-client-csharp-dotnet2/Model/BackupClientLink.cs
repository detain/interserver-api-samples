using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A navigation link for backup service actions in the client portal.
  /// </summary>
  [DataContract]
  public class BackupClientLink {
    /// <summary>
    /// Label of the client link.
    /// </summary>
    /// <value>Label of the client link.</value>
    [DataMember(Name="label", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "label")]
    public string Label { get; set; }

    /// <summary>
    /// Link URL of the client link.
    /// </summary>
    /// <value>Link URL of the client link.</value>
    [DataMember(Name="link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "link")]
    public string Link { get; set; }

    /// <summary>
    /// Icon of the client link.
    /// </summary>
    /// <value>Icon of the client link.</value>
    [DataMember(Name="icon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon")]
    public string Icon { get; set; }

    /// <summary>
    /// Icon text of the client link.
    /// </summary>
    /// <value>Icon text of the client link.</value>
    [DataMember(Name="icon_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon_text")]
    public string IconText { get; set; }

    /// <summary>
    /// Help text of the client link.
    /// </summary>
    /// <value>Help text of the client link.</value>
    [DataMember(Name="help_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "help_text")]
    public string HelpText { get; set; }

    /// <summary>
    /// Other attributes of the client link.
    /// </summary>
    /// <value>Other attributes of the client link.</value>
    [DataMember(Name="other_attr", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "other_attr")]
    public string OtherAttr { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupClientLink {\n");
      sb.Append("  Label: ").Append(Label).Append("\n");
      sb.Append("  Link: ").Append(Link).Append("\n");
      sb.Append("  Icon: ").Append(Icon).Append("\n");
      sb.Append("  IconText: ").Append(IconText).Append("\n");
      sb.Append("  HelpText: ").Append(HelpText).Append("\n");
      sb.Append("  OtherAttr: ").Append(OtherAttr).Append("\n");
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
