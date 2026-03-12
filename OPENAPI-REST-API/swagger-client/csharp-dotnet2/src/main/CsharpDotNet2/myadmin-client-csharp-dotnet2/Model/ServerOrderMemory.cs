using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A memory (RAM) option available when ordering a dedicated server.
  /// </summary>
  [DataContract]
  public class ServerOrderMemory {
    /// <summary>
    /// Memory ID.
    /// </summary>
    /// <value>Memory ID.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// Memory price.
    /// </summary>
    /// <value>Memory price.</value>
    [DataMember(Name="price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price")]
    public string Price { get; set; }

    /// <summary>
    /// Memory image.
    /// </summary>
    /// <value>Memory image.</value>
    [DataMember(Name="img", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "img")]
    public string Img { get; set; }

    /// <summary>
    /// Short description of the memory.
    /// </summary>
    /// <value>Short description of the memory.</value>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Long description of the memory.
    /// </summary>
    /// <value>Long description of the memory.</value>
    [DataMember(Name="long_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "long_desc")]
    public string LongDesc { get; set; }

    /// <summary>
    /// Manufacturer information.
    /// </summary>
    /// <value>Manufacturer information.</value>
    [DataMember(Name="manu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "manu")]
    public string Manu { get; set; }

    /// <summary>
    /// Memory size.
    /// </summary>
    /// <value>Memory size.</value>
    [DataMember(Name="size", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "size")]
    public string Size { get; set; }

    /// <summary>
    /// Memory type.
    /// </summary>
    /// <value>Memory type.</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// Hidden status.
    /// </summary>
    /// <value>Hidden status.</value>
    [DataMember(Name="hidden", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hidden")]
    public string Hidden { get; set; }

    /// <summary>
    /// Monthly price.
    /// </summary>
    /// <value>Monthly price.</value>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public int? MonthlyPrice { get; set; }

    /// <summary>
    /// Drive type.
    /// </summary>
    /// <value>Drive type.</value>
    [DataMember(Name="drive_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "drive_type")]
    public string DriveType { get; set; }

    /// <summary>
    /// Display of monthly memory price.
    /// </summary>
    /// <value>Display of monthly memory price.</value>
    [DataMember(Name="monthly_price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price_display")]
    public string MonthlyPriceDisplay { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderMemory {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
      sb.Append("  Img: ").Append(Img).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  LongDesc: ").Append(LongDesc).Append("\n");
      sb.Append("  Manu: ").Append(Manu).Append("\n");
      sb.Append("  Size: ").Append(Size).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Hidden: ").Append(Hidden).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
      sb.Append("  DriveType: ").Append(DriveType).Append("\n");
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
