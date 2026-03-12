using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Dashboard module configuration for webhosting services.
  /// </summary>
  [DataContract]
  public class HomeDetailsModulesWebhosting {
    /// <summary>
    /// The icon for web hosting.
    /// </summary>
    /// <value>The icon for web hosting.</value>
    [DataMember(Name="icon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon")]
    public string Icon { get; set; }

    /// <summary>
    /// Link to view website.
    /// </summary>
    /// <value>Link to view website.</value>
    [DataMember(Name="view_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "view_link")]
    public string ViewLink { get; set; }

    /// <summary>
    /// Heading for web hosting.
    /// </summary>
    /// <value>Heading for web hosting.</value>
    [DataMember(Name="heading", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "heading")]
    public string Heading { get; set; }

    /// <summary>
    /// Link to order website.
    /// </summary>
    /// <value>Link to order website.</value>
    [DataMember(Name="buy_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "buy_link")]
    public string BuyLink { get; set; }

    /// <summary>
    /// Link to view websites list.
    /// </summary>
    /// <value>Link to view websites list.</value>
    [DataMember(Name="list_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "list_link")]
    public string ListLink { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeDetailsModulesWebhosting {\n");
      sb.Append("  Icon: ").Append(Icon).Append("\n");
      sb.Append("  ViewLink: ").Append(ViewLink).Append("\n");
      sb.Append("  Heading: ").Append(Heading).Append("\n");
      sb.Append("  BuyLink: ").Append(BuyLink).Append("\n");
      sb.Append("  ListLink: ").Append(ListLink).Append("\n");
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
