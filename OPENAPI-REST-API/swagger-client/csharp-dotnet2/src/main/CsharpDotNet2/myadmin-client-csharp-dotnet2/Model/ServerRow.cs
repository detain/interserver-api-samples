using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A result row from the &#x60;Servers&#x60; &#x60;GET&#x60; request.
  /// </summary>
  [DataContract]
  public class ServerRow {
    /// <summary>
    /// The id of the server.
    /// </summary>
    /// <value>The id of the server.</value>
    [DataMember(Name="server_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_id")]
    public string ServerId { get; set; }

    /// <summary>
    /// The account lid of the server.
    /// </summary>
    /// <value>The account lid of the server.</value>
    [DataMember(Name="account_lid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "account_lid")]
    public string AccountLid { get; set; }

    /// <summary>
    /// The hostname of the server.
    /// </summary>
    /// <value>The hostname of the server.</value>
    [DataMember(Name="server_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_hostname")]
    public string ServerHostname { get; set; }

    /// <summary>
    /// The status of the server.
    /// </summary>
    /// <value>The status of the server.</value>
    [DataMember(Name="server_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_status")]
    public string ServerStatus { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerRow {\n");
      sb.Append("  ServerId: ").Append(ServerId).Append("\n");
      sb.Append("  AccountLid: ").Append(AccountLid).Append("\n");
      sb.Append("  ServerHostname: ").Append(ServerHostname).Append("\n");
      sb.Append("  ServerStatus: ").Append(ServerStatus).Append("\n");
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
