using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Optional fields providing additional info in ticket
  /// </summary>
  [DataContract]
  public class TicketCustomFieldDetails {
    /// <summary>
    /// Gets or Sets CustomerServerAccess
    /// </summary>
    [DataMember(Name="Customer Server Access", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Customer Server Access")]
    public string CustomerServerAccess { get; set; }

    /// <summary>
    /// Gets or Sets IpAddress
    /// </summary>
    [DataMember(Name="Ip Address", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Ip Address")]
    public string IpAddress { get; set; }

    /// <summary>
    /// Gets or Sets RootPassword
    /// </summary>
    [DataMember(Name="Root Password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Root Password")]
    public string RootPassword { get; set; }

    /// <summary>
    /// Gets or Sets SudoUser
    /// </summary>
    [DataMember(Name="Sudo User", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Sudo User")]
    public string SudoUser { get; set; }

    /// <summary>
    /// Gets or Sets SudoPassword
    /// </summary>
    [DataMember(Name="Sudo Password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Sudo Password")]
    public int? SudoPassword { get; set; }

    /// <summary>
    /// Gets or Sets Port
    /// </summary>
    [DataMember(Name="Port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "Port")]
    public int? Port { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TicketCustomFieldDetails {\n");
      sb.Append("  CustomerServerAccess: ").Append(CustomerServerAccess).Append("\n");
      sb.Append("  IpAddress: ").Append(IpAddress).Append("\n");
      sb.Append("  RootPassword: ").Append(RootPassword).Append("\n");
      sb.Append("  SudoUser: ").Append(SudoUser).Append("\n");
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
