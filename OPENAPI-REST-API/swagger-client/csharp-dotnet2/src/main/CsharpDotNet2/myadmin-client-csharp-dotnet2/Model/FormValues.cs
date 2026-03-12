using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Currently selected configuration option IDs for a server order form.
  /// </summary>
  [DataContract]
  public class FormValues {
    /// <summary>
    /// Selected memory option ID.
    /// </summary>
    /// <value>Selected memory option ID.</value>
    [DataMember(Name="memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory")]
    public int? Memory { get; set; }

    /// <summary>
    /// Selected bandwidth option ID.
    /// </summary>
    /// <value>Selected bandwidth option ID.</value>
    [DataMember(Name="bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth")]
    public int? Bandwidth { get; set; }

    /// <summary>
    /// Selected IP block option ID.
    /// </summary>
    /// <value>Selected IP block option ID.</value>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public int? Ips { get; set; }

    /// <summary>
    /// Selected operating system option ID.
    /// </summary>
    /// <value>Selected operating system option ID.</value>
    [DataMember(Name="os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os")]
    public int? Os { get; set; }

    /// <summary>
    /// Selected control panel option ID.
    /// </summary>
    /// <value>Selected control panel option ID.</value>
    [DataMember(Name="cp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp")]
    public int? Cp { get; set; }

    /// <summary>
    /// Selected RAID option ID.
    /// </summary>
    /// <value>Selected RAID option ID.</value>
    [DataMember(Name="raid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "raid")]
    public int? Raid { get; set; }

    /// <summary>
    /// Selected hard drive option ID.
    /// </summary>
    /// <value>Selected hard drive option ID.</value>
    [DataMember(Name="hd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd")]
    public int? Hd { get; set; }

    /// <summary>
    /// Selected datacenter region ID.
    /// </summary>
    /// <value>Selected datacenter region ID.</value>
    [DataMember(Name="region", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "region")]
    public int? Region { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class FormValues {\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
      sb.Append("  Bandwidth: ").Append(Bandwidth).Append("\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
      sb.Append("  Os: ").Append(Os).Append("\n");
      sb.Append("  Cp: ").Append(Cp).Append("\n");
      sb.Append("  Raid: ").Append(Raid).Append("\n");
      sb.Append("  Hd: ").Append(Hd).Append("\n");
      sb.Append("  Region: ").Append(Region).Append("\n");
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
