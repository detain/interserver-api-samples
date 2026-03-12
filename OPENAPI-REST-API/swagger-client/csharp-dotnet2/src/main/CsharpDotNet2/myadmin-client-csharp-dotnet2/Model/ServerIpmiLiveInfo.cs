using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Information about the IPMI connectioj.
  /// </summary>
  [DataContract]
  public class ServerIpmiLiveInfo {
    /// <summary>
    /// Gets or Sets Text
    /// </summary>
    [DataMember(Name="text", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "text")]
    public string Text { get; set; }

    /// <summary>
    /// Gets or Sets PublicIp
    /// </summary>
    [DataMember(Name="public_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "public_ip")]
    public string PublicIp { get; set; }

    /// <summary>
    /// Gets or Sets AllowedIp
    /// </summary>
    [DataMember(Name="allowed_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "allowed_ip")]
    public string AllowedIp { get; set; }

    /// <summary>
    /// Gets or Sets ClientUsername
    /// </summary>
    [DataMember(Name="client_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_username")]
    public string ClientUsername { get; set; }

    /// <summary>
    /// Gets or Sets ClientPassword
    /// </summary>
    [DataMember(Name="client_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client_password")]
    public string ClientPassword { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerIpmiLiveInfo {\n");
      sb.Append("  Text: ").Append(Text).Append("\n");
      sb.Append("  PublicIp: ").Append(PublicIp).Append("\n");
      sb.Append("  AllowedIp: ").Append(AllowedIp).Append("\n");
      sb.Append("  ClientUsername: ").Append(ClientUsername).Append("\n");
      sb.Append("  ClientPassword: ").Append(ClientPassword).Append("\n");
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
