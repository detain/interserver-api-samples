using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Field labels for the server order.
  /// </summary>
  [DataContract]
  public class ServerOrderFieldLabels {
    /// <summary>
    /// Bandwidth field label.
    /// </summary>
    /// <value>Bandwidth field label.</value>
    [DataMember(Name="bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth")]
    public AllOfServerOrderFieldLabelsBandwidth Bandwidth { get; set; }

    /// <summary>
    /// IPs field label.
    /// </summary>
    /// <value>IPs field label.</value>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public AllOfServerOrderFieldLabelsIps Ips { get; set; }

    /// <summary>
    /// Operating System field label.
    /// </summary>
    /// <value>Operating System field label.</value>
    [DataMember(Name="os", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "os")]
    public AllOfServerOrderFieldLabelsOs Os { get; set; }

    /// <summary>
    /// Control Panel field label.
    /// </summary>
    /// <value>Control Panel field label.</value>
    [DataMember(Name="cp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cp")]
    public AllOfServerOrderFieldLabelsCp Cp { get; set; }

    /// <summary>
    /// RAID field label.
    /// </summary>
    /// <value>RAID field label.</value>
    [DataMember(Name="raid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "raid")]
    public AllOfServerOrderFieldLabelsRaid Raid { get; set; }

    /// <summary>
    /// Memory field label.
    /// </summary>
    /// <value>Memory field label.</value>
    [DataMember(Name="memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory")]
    public AllOfServerOrderFieldLabelsMemory Memory { get; set; }

    /// <summary>
    /// Hard Drives field label
    /// </summary>
    /// <value>Hard Drives field label</value>
    [DataMember(Name="hd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd")]
    public AllOfServerOrderFieldLabelsHd Hd { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerOrderFieldLabels {\n");
      sb.Append("  Bandwidth: ").Append(Bandwidth).Append("\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
      sb.Append("  Os: ").Append(Os).Append("\n");
      sb.Append("  Cp: ").Append(Cp).Append("\n");
      sb.Append("  Raid: ").Append(Raid).Append("\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
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
