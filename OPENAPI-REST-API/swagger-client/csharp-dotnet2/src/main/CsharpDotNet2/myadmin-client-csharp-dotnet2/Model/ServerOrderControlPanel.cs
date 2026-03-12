using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A control panel option available when ordering a dedicated server.
  /// </summary>
  [DataContract]
  public class ServerOrderControlPanel {
    /// <summary>
    /// Control Panel ID.
    /// </summary>
    /// <value>Control Panel ID.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// Control Panel price.
    /// </summary>
    /// <value>Control Panel price.</value>
    [DataMember(Name="price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price")]
    public int? Price { get; set; }

    /// <summary>
    /// Control Panel image.
    /// </summary>
    /// <value>Control Panel image.</value>
    [DataMember(Name="img", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "img")]
    public string Img { get; set; }

    /// <summary>
    /// Short description of the control panel.
    /// </summary>
    /// <value>Short description of the control panel.</value>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Long description of the control panel.
    /// </summary>
    /// <value>Long description of the control panel.</value>
    [DataMember(Name="long_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "long_desc")]
    public string LongDesc { get; set; }

    /// <summary>
    /// OS types compatible with the control panel.
    /// </summary>
    /// <value>OS types compatible with the control panel.</value>
    [DataMember(Name="os_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os_type")]
    public string OsType { get; set; }

    /// <summary>
    /// Monthly price.
    /// </summary>
    /// <value>Monthly price.</value>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public int? MonthlyPrice { get; set; }

    /// <summary>
    /// List of types.
    /// </summary>
    /// <value>List of types.</value>
    [DataMember(Name="types", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "types")]
    public List<string> Types { get; set; }

    /// <summary>
    /// Display of control panel price.
    /// </summary>
    /// <value>Display of control panel price.</value>
    [DataMember(Name="price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price_display")]
    public string PriceDisplay { get; set; }

    /// <summary>
    /// Display of monthly control panel price.
    /// </summary>
    /// <value>Display of monthly control panel price.</value>
    [DataMember(Name="monthly_price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price_display")]
    public string MonthlyPriceDisplay { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderControlPanel {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
      sb.Append("  Img: ").Append(Img).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  LongDesc: ").Append(LongDesc).Append("\n");
      sb.Append("  OsType: ").Append(OsType).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
      sb.Append("  Types: ").Append(Types).Append("\n");
      sb.Append("  PriceDisplay: ").Append(PriceDisplay).Append("\n");
      sb.Append("  MonthlyPriceDisplay: ").Append(MonthlyPriceDisplay).Append("\n");
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
