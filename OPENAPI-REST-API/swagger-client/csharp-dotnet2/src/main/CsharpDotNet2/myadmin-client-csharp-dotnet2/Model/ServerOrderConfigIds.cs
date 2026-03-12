using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Configuration IDs for the server order.
  /// </summary>
  [DataContract]
  public class ServerOrderConfigIds {
    /// <summary>
    /// Memory configuration ID for the server order.
    /// </summary>
    /// <value>Memory configuration ID for the server order.</value>
    [DataMember(Name="memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory")]
    public int? Memory { get; set; }

    /// <summary>
    /// Bandwidth configuration ID for the server order.
    /// </summary>
    /// <value>Bandwidth configuration ID for the server order.</value>
    [DataMember(Name="bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth")]
    public string Bandwidth { get; set; }

    /// <summary>
    /// IPs configuration ID for the server order.
    /// </summary>
    /// <value>IPs configuration ID for the server order.</value>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public string Ips { get; set; }

    /// <summary>
    /// Operating System configuration ID for the server order.
    /// </summary>
    /// <value>Operating System configuration ID for the server order.</value>
    [DataMember(Name="os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os")]
    public string Os { get; set; }

    /// <summary>
    /// Control Panel configuration ID for the server order.
    /// </summary>
    /// <value>Control Panel configuration ID for the server order.</value>
    [DataMember(Name="cp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp")]
    public int? Cp { get; set; }

    /// <summary>
    /// RAID configuration ID for the server order.
    /// </summary>
    /// <value>RAID configuration ID for the server order.</value>
    [DataMember(Name="raid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "raid")]
    public string Raid { get; set; }

    /// <summary>
    /// Hard Drives configuration ID for the server order.
    /// </summary>
    /// <value>Hard Drives configuration ID for the server order.</value>
    [DataMember(Name="hd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd")]
    public string Hd { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderConfigIds {\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
      sb.Append("  Bandwidth: ").Append(Bandwidth).Append("\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
      sb.Append("  Os: ").Append(Os).Append("\n");
      sb.Append("  Cp: ").Append(Cp).Append("\n");
      sb.Append("  Raid: ").Append(Raid).Append("\n");
      sb.Append("  Hd: ").Append(Hd).Append("\n");
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
