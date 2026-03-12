using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A navigation link for mail service actions in the client portal.
  /// </summary>
  [DataContract]
  public class MailClientLink {
    /// <summary>
    /// The label of the client link.
    /// </summary>
    /// <value>The label of the client link.</value>
    [DataMember(Name="label", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "label")]
    public string Label { get; set; }

    /// <summary>
    /// The link URL of the client link.
    /// </summary>
    /// <value>The link URL of the client link.</value>
    [DataMember(Name="link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "link")]
    public string Link { get; set; }

    /// <summary>
    /// The icon class of the client link.
    /// </summary>
    /// <value>The icon class of the client link.</value>
    [DataMember(Name="icon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon")]
    public string Icon { get; set; }

    /// <summary>
    /// The text for the icon of the client link.
    /// </summary>
    /// <value>The text for the icon of the client link.</value>
    [DataMember(Name="icon_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon_text")]
    public string IconText { get; set; }

    /// <summary>
    /// Help text for the client link.
    /// </summary>
    /// <value>Help text for the client link.</value>
    [DataMember(Name="help_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "help_text")]
    public string HelpText { get; set; }

    /// <summary>
    /// Additional attributes for the client link.
    /// </summary>
    /// <value>Additional attributes for the client link.</value>
    [DataMember(Name="other_attr", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "other_attr")]
    public string OtherAttr { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailClientLink {\n");
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
