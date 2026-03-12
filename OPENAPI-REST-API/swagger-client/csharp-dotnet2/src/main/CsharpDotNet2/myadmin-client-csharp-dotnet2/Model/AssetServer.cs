using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A pre-configured asset server available for immediate provisioning.
  /// </summary>
  [DataContract]
  public class AssetServer {
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public int? Id { get; set; }

    /// <summary>
    /// Gets or Sets Region
    /// </summary>
    [DataMember(Name="Region", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Region")]
    public string Region { get; set; }

    /// <summary>
    /// Gets or Sets Price
    /// </summary>
    [DataMember(Name="price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price")]
    public string Price { get; set; }

    /// <summary>
    /// Gets or Sets CPU
    /// </summary>
    [DataMember(Name="CPU", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "CPU")]
    public List<OneOfAssetServerCPUItems> CPU { get; set; }

    /// <summary>
    /// Gets or Sets Memory
    /// </summary>
    [DataMember(Name="Memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Memory")]
    public List<OneOfAssetServerMemoryItems> Memory { get; set; }

    /// <summary>
    /// Gets or Sets Bandwidth
    /// </summary>
    [DataMember(Name="Bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Bandwidth")]
    public List<OneOfAssetServerBandwidthItems> Bandwidth { get; set; }

    /// <summary>
    /// Gets or Sets IPs
    /// </summary>
    [DataMember(Name="IPs", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "IPs")]
    public List<OneOfAssetServerIPsItems> IPs { get; set; }

    /// <summary>
    /// Gets or Sets HD
    /// </summary>
    [DataMember(Name="HD", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "HD")]
    public Dictionary<string, string> HD { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AssetServer {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  Region: ").Append(Region).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
      sb.Append("  CPU: ").Append(CPU).Append("\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
      sb.Append("  Bandwidth: ").Append(Bandwidth).Append("\n");
      sb.Append("  IPs: ").Append(IPs).Append("\n");
      sb.Append("  HD: ").Append(HD).Append("\n");
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
