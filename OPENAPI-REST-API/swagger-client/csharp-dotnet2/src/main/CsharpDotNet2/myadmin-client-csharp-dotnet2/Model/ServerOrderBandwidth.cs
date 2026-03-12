using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A bandwidth option available when ordering a dedicated server.
  /// </summary>
  [DataContract]
  public class ServerOrderBandwidth {
    /// <summary>
    /// Bandwidth ID.
    /// </summary>
    /// <value>Bandwidth ID.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// Bandwidth price.
    /// </summary>
    /// <value>Bandwidth price.</value>
    [DataMember(Name="price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price")]
    public int? Price { get; set; }

    /// <summary>
    /// Bandwidth image.
    /// </summary>
    /// <value>Bandwidth image.</value>
    [DataMember(Name="img", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "img")]
    public string Img { get; set; }

    /// <summary>
    /// Short description of the bandwidth.
    /// </summary>
    /// <value>Short description of the bandwidth.</value>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Long description of the bandwidth.
    /// </summary>
    /// <value>Long description of the bandwidth.</value>
    [DataMember(Name="long_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "long_desc")]
    public string LongDesc { get; set; }

    /// <summary>
    /// Bandwidth type.
    /// </summary>
    /// <value>Bandwidth type.</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// Quantity of bandwidth.
    /// </summary>
    /// <value>Quantity of bandwidth.</value>
    [DataMember(Name="qty", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qty")]
    public string Qty { get; set; }

    /// <summary>
    /// Active status.
    /// </summary>
    /// <value>Active status.</value>
    [DataMember(Name="active", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "active")]
    public string Active { get; set; }

    /// <summary>
    /// Monthly price.
    /// </summary>
    /// <value>Monthly price.</value>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public int? MonthlyPrice { get; set; }

    /// <summary>
    /// Display of bandwidth price.
    /// </summary>
    /// <value>Display of bandwidth price.</value>
    [DataMember(Name="price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price_display")]
    public string PriceDisplay { get; set; }

    /// <summary>
    /// Display of monthly bandwidth price.
    /// </summary>
    /// <value>Display of monthly bandwidth price.</value>
    [DataMember(Name="monthly_price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price_display")]
    public string MonthlyPriceDisplay { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderBandwidth {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
      sb.Append("  Img: ").Append(Img).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  LongDesc: ").Append(LongDesc).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Qty: ").Append(Qty).Append("\n");
      sb.Append("  Active: ").Append(Active).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
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
