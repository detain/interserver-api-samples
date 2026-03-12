using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A buy-it-now dedicated server listing from the marketplace, with hardware specs and pricing.
  /// </summary>
  [DataContract]
  public class BuyItNowRow {
    /// <summary>
    /// Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.
    /// </summary>
    /// <value>Unique server ID. Use this as `server_id` in `POST /servers/order/buy_now_server`.</value>
    [DataMember(Name="server_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_id")]
    public string ServerId { get; set; }

    /// <summary>
    /// Gets or Sets Cpu
    /// </summary>
    [DataMember(Name="cpu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu")]
    public List<OneOfBuyItNowRowCpuItems> Cpu { get; set; }

    /// <summary>
    /// Gets or Sets Memory
    /// </summary>
    [DataMember(Name="memory", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory")]
    public string Memory { get; set; }

    /// <summary>
    /// Gets or Sets Disk
    /// </summary>
    [DataMember(Name="disk", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "disk")]
    public Dictionary<string, string> Disk { get; set; }

    /// <summary>
    /// Gets or Sets Bandwidth
    /// </summary>
    [DataMember(Name="bandwidth", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bandwidth")]
    public string Bandwidth { get; set; }

    /// <summary>
    /// Gets or Sets Ips
    /// </summary>
    [DataMember(Name="ips", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ips")]
    public string Ips { get; set; }

    /// <summary>
    /// Gets or Sets Location
    /// </summary>
    [DataMember(Name="location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location")]
    public string Location { get; set; }

    /// <summary>
    /// Gets or Sets Price
    /// </summary>
    [DataMember(Name="price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "price")]
    public int? Price { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BuyItNowRow {\n");
      sb.Append("  ServerId: ").Append(ServerId).Append("\n");
      sb.Append("  Cpu: ").Append(Cpu).Append("\n");
      sb.Append("  Memory: ").Append(Memory).Append("\n");
      sb.Append("  Disk: ").Append(Disk).Append("\n");
      sb.Append("  Bandwidth: ").Append(Bandwidth).Append("\n");
      sb.Append("  Ips: ").Append(Ips).Append("\n");
      sb.Append("  Location: ").Append(Location).Append("\n");
      sb.Append("  Price: ").Append(Price).Append("\n");
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
