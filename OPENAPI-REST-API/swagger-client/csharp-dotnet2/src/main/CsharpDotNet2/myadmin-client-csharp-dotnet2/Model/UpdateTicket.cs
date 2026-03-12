using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Update custom fields of the ticket
  /// </summary>
  [DataContract]
  public class UpdateTicket {
    /// <summary>
    /// Gets or Sets Ip
    /// </summary>
    [DataMember(Name="ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip")]
    public string Ip { get; set; }

    /// <summary>
    /// Gets or Sets IpAddress
    /// </summary>
    [DataMember(Name="ip_address", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_address")]
    public string IpAddress { get; set; }

    /// <summary>
    /// Gets or Sets CustomerServerAccess
    /// </summary>
    [DataMember(Name="customer_server_access", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "customer_server_access")]
    public string CustomerServerAccess { get; set; }

    /// <summary>
    /// Gets or Sets RootPassword
    /// </summary>
    [DataMember(Name="root_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "root_password")]
    public string RootPassword { get; set; }

    /// <summary>
    /// Gets or Sets SudoUsername
    /// </summary>
    [DataMember(Name="sudo_username", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sudo_username")]
    public string SudoUsername { get; set; }

    /// <summary>
    /// Gets or Sets SudoPassword
    /// </summary>
    [DataMember(Name="sudo_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sudo_password")]
    public string SudoPassword { get; set; }

    /// <summary>
    /// Gets or Sets Port
    /// </summary>
    [DataMember(Name="port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "port")]
    public int? Port { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class UpdateTicket {\n");
      sb.Append("  Ip: ").Append(Ip).Append("\n");
      sb.Append("  IpAddress: ").Append(IpAddress).Append("\n");
      sb.Append("  CustomerServerAccess: ").Append(CustomerServerAccess).Append("\n");
      sb.Append("  RootPassword: ").Append(RootPassword).Append("\n");
      sb.Append("  SudoUsername: ").Append(SudoUsername).Append("\n");
      sb.Append("  SudoPassword: ").Append(SudoPassword).Append("\n");
      sb.Append("  Port: ").Append(Port).Append("\n");
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
