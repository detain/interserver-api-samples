using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Platform Names
  /// </summary>
  [DataContract]
  public class VpsOrderPlatformNames {
    /// <summary>
    /// Gets or Sets Kvm
    /// </summary>
    [DataMember(Name="kvm", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "kvm")]
    public string Kvm { get; set; }

    /// <summary>
    /// Gets or Sets Kvmstorage
    /// </summary>
    [DataMember(Name="kvmstorage", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "kvmstorage")]
    public string Kvmstorage { get; set; }

    /// <summary>
    /// Gets or Sets Hyperv
    /// </summary>
    [DataMember(Name="hyperv", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hyperv")]
    public string Hyperv { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderPlatformNames {\n");
      sb.Append("  Kvm: ").Append(Kvm).Append("\n");
      sb.Append("  Kvmstorage: ").Append(Kvmstorage).Append("\n");
      sb.Append("  Hyperv: ").Append(Hyperv).Append("\n");
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
