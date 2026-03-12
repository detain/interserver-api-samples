using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A hard drive option available for a dedicated server configuration.
  /// </summary>
  [DataContract]
  public class HardDrive {
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public int? Id { get; set; }

    /// <summary>
    /// Gets or Sets ShortDesc
    /// </summary>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Gets or Sets Size
    /// </summary>
    [DataMember(Name="size", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "size")]
    public string Size { get; set; }

    /// <summary>
    /// Gets or Sets DriveType
    /// </summary>
    [DataMember(Name="drive_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "drive_type")]
    public string DriveType { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyPrice
    /// </summary>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public decimal? MonthlyPrice { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyPriceDisplay
    /// </summary>
    [DataMember(Name="monthly_price_display", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price_display")]
    public string MonthlyPriceDisplay { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HardDrive {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  Size: ").Append(Size).Append("\n");
      sb.Append("  DriveType: ").Append(DriveType).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
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
