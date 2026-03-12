using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A navigation link for VPS-related actions in the client portal.
  /// </summary>
  [DataContract]
  public class VpsClientLink {
    /// <summary>
    /// Display label for the link.
    /// </summary>
    /// <value>Display label for the link.</value>
    [DataMember(Name="label", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "label")]
    public string Label { get; set; }

    /// <summary>
    /// URL or route for the action.
    /// </summary>
    /// <value>URL or route for the action.</value>
    [DataMember(Name="link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "link")]
    public string Link { get; set; }

    /// <summary>
    /// Icon class for the link.
    /// </summary>
    /// <value>Icon class for the link.</value>
    [DataMember(Name="icon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon")]
    public string Icon { get; set; }

    /// <summary>
    /// Icon text label.
    /// </summary>
    /// <value>Icon text label.</value>
    [DataMember(Name="icon_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon_text")]
    public string IconText { get; set; }

    /// <summary>
    /// Help tooltip text for the link.
    /// </summary>
    /// <value>Help tooltip text for the link.</value>
    [DataMember(Name="help_text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "help_text")]
    public string HelpText { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsClientLink {\n");
      sb.Append("  Label: ").Append(Label).Append("\n");
      sb.Append("  Link: ").Append(Link).Append("\n");
      sb.Append("  Icon: ").Append(Icon).Append("\n");
      sb.Append("  IconText: ").Append(IconText).Append("\n");
      sb.Append("  HelpText: ").Append(HelpText).Append("\n");
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
