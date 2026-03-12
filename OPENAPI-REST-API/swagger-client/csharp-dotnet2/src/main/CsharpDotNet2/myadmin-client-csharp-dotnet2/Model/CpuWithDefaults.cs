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
  public class CpuWithDefaults : Cpu {
    /// <summary>
    /// Gets or Sets MemoryDet
    /// </summary>
    [DataMember(Name="memory_det", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "memory_det")]
    public MemoryOption MemoryDet { get; set; }

    /// <summary>
    /// Gets or Sets HdDet
    /// </summary>
    [DataMember(Name="hd_det", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hd_det")]
    public HardDrive HdDet { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyFee
    /// </summary>
    [DataMember(Name="monthly_fee", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_fee")]
    public string MonthlyFee { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class CpuWithDefaults {\n");
      sb.Append("  MemoryDet: ").Append(MemoryDet).Append("\n");
      sb.Append("  HdDet: ").Append(HdDet).Append("\n");
      sb.Append("  MonthlyFee: ").Append(MonthlyFee).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public  new string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
