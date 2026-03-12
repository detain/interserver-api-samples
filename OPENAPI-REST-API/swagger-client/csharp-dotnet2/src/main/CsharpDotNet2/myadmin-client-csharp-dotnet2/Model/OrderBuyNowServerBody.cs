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
  public class OrderBuyNowServerBody {
    /// <summary>
    /// The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
    /// </summary>
    /// <value>The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.</value>
    [DataMember(Name="server_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_id")]
    public decimal? ServerId { get; set; }

    /// <summary>
    /// The fully-qualified hostname to assign to the server.
    /// </summary>
    /// <value>The fully-qualified hostname to assign to the server.</value>
    [DataMember(Name="server_hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_hostname")]
    public string ServerHostname { get; set; }

    /// <summary>
    /// The root or administrator password to set on the server.
    /// </summary>
    /// <value>The root or administrator password to set on the server.</value>
    [DataMember(Name="server_root_password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "server_root_password")]
    public string ServerRootPassword { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class OrderBuyNowServerBody {\n");
      sb.Append("  ServerId: ").Append(ServerId).Append("\n");
      sb.Append("  ServerHostname: ").Append(ServerHostname).Append("\n");
      sb.Append("  ServerRootPassword: ").Append(ServerRootPassword).Append("\n");
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
