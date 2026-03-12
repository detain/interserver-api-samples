using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Internal configuration IDs mapped from the selected form values for a server order.
  /// </summary>
  [DataContract]
  public class ConfigIds {
    /// <summary>
    /// Configuration ID for the selected memory option.
    /// </summary>
    /// <value>Configuration ID for the selected memory option.</value>
    [DataMember(Name="memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory")]
    public int? Memory { get; set; }

    /// <summary>
    /// Configuration ID for the selected hard drive option.
    /// </summary>
    /// <value>Configuration ID for the selected hard drive option.</value>
    [DataMember(Name="hd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd")]
    public int? Hd { get; set; }

    /// <summary>
    /// Configuration ID for the selected bandwidth option.
    /// </summary>
    /// <value>Configuration ID for the selected bandwidth option.</value>
    [DataMember(Name="bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth")]
    public int? Bandwidth { get; set; }

    /// <summary>
    /// Configuration ID for the selected IP block option.
    /// </summary>
    /// <value>Configuration ID for the selected IP block option.</value>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public int? Ips { get; set; }

    /// <summary>
    /// Configuration ID for the selected operating system.
    /// </summary>
    /// <value>Configuration ID for the selected operating system.</value>
    [DataMember(Name="os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os")]
    public int? Os { get; set; }

    /// <summary>
    /// Configuration ID for the selected control panel.
    /// </summary>
    /// <value>Configuration ID for the selected control panel.</value>
    [DataMember(Name="cp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp")]
    public int? Cp { get; set; }

    /// <summary>
    /// Configuration ID for the selected RAID option.
    /// </summary>
    /// <value>Configuration ID for the selected RAID option.</value>
    [DataMember(Name="raid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "raid")]
    public int? Raid { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ConfigIds {\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
      sb.Append("  Hd: ").Append(Hd).Append("\n");
      sb.Append("  Bandwidth: ").Append(Bandwidth).Append("\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
      sb.Append("  Os: ").Append(Os).Append("\n");
      sb.Append("  Cp: ").Append(Cp).Append("\n");
      sb.Append("  Raid: ").Append(Raid).Append("\n");
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
