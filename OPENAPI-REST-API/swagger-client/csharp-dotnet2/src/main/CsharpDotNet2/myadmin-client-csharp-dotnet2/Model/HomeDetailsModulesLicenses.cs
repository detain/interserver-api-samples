using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Dashboard module configuration for software license services.
  /// </summary>
  [DataContract]
  public class HomeDetailsModulesLicenses {
    /// <summary>
    /// The icon for licenses.
    /// </summary>
    /// <value>The icon for licenses.</value>
    [DataMember(Name="icon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "icon")]
    public string Icon { get; set; }

    /// <summary>
    /// Link to view license.
    /// </summary>
    /// <value>Link to view license.</value>
    [DataMember(Name="view_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "view_link")]
    public string ViewLink { get; set; }

    /// <summary>
    /// Heading for licenses.
    /// </summary>
    /// <value>Heading for licenses.</value>
    [DataMember(Name="heading", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "heading")]
    public string Heading { get; set; }

    /// <summary>
    /// Link to order license.
    /// </summary>
    /// <value>Link to order license.</value>
    [DataMember(Name="buy_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "buy_link")]
    public string BuyLink { get; set; }

    /// <summary>
    /// Link to view licenses list.
    /// </summary>
    /// <value>Link to view licenses list.</value>
    [DataMember(Name="list_link", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "list_link")]
    public string ListLink { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeDetailsModulesLicenses {\n");
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
