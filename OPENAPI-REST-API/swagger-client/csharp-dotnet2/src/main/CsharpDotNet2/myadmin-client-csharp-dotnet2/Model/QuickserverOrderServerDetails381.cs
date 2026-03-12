using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class QuickserverOrderServerDetails381 {
    /// <summary>
    /// CPU details of the server.
    /// </summary>
    /// <value>CPU details of the server.</value>
    [DataMember(Name="cpu", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpu")]
    public string Cpu { get; set; }

    /// <summary>
    /// RAM capacity of the server.
    /// </summary>
    /// <value>RAM capacity of the server.</value>
    [DataMember(Name="ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ram")]
    public string Ram { get; set; }

    /// <summary>
    /// Hard disk capacity of the server.
    /// </summary>
    /// <value>Hard disk capacity of the server.</value>
    [DataMember(Name="hd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd")]
    public string Hd { get; set; }

    /// <summary>
    /// Number of CPU cores.
    /// </summary>
    /// <value>Number of CPU cores.</value>
    [DataMember(Name="cores", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cores")]
    public int? Cores { get; set; }

    /// <summary>
    /// Cost of the server.
    /// </summary>
    /// <value>Cost of the server.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public string Cost { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverOrderServerDetails381 {\n");
      sb.Append("  Cpu: ").Append(Cpu).Append("\n");
      sb.Append("  Ram: ").Append(Ram).Append("\n");
      sb.Append("  Hd: ").Append(Hd).Append("\n");
      sb.Append("  Cores: ").Append(Cores).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
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
