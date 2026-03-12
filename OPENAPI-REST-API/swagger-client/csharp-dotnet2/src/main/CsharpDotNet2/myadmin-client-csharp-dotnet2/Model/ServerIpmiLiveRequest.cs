using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Request body to setup an IPMI Live connection.
  /// </summary>
  [DataContract]
  public class ServerIpmiLiveRequest {
    /// <summary>
    /// Asset ID
    /// </summary>
    /// <value>Asset ID</value>
    [DataMember(Name="asset", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asset")]
    public int? Asset { get; set; }

    /// <summary>
    /// Your IP Address you wish to connect to the IPMI system from.
    /// </summary>
    /// <value>Your IP Address you wish to connect to the IPMI system from.</value>
    [DataMember(Name="ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip")]
    public string Ip { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerIpmiLiveRequest {\n");
      sb.Append("  Asset: ").Append(Asset).Append("\n");
      sb.Append("  Ip: ").Append(Ip).Append("\n");
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
