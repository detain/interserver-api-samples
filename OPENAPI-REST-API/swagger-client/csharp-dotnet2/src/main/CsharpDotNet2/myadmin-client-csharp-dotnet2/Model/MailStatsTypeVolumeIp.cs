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
  public class MailStatsTypeVolumeIp {
    /// <summary>
    /// Gets or Sets _1111
    /// </summary>
    [DataMember(Name="1.1.1.1", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "1.1.1.1")]
    public int? _1111 { get; set; }

    /// <summary>
    /// Gets or Sets _2222
    /// </summary>
    [DataMember(Name="2.2.2.2", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2.2.2.2")]
    public int? _2222 { get; set; }

    /// <summary>
    /// Gets or Sets _3333
    /// </summary>
    [DataMember(Name="3.3.3.3", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "3.3.3.3")]
    public int? _3333 { get; set; }

    /// <summary>
    /// Gets or Sets _4444
    /// </summary>
    [DataMember(Name="4.4.4.4", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "4.4.4.4")]
    public int? _4444 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailStatsTypeVolumeIp {\n");
      sb.Append("  _1111: ").Append(_1111).Append("\n");
      sb.Append("  _2222: ").Append(_2222).Append("\n");
      sb.Append("  _3333: ").Append(_3333).Append("\n");
      sb.Append("  _4444: ").Append(_4444).Append("\n");
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
