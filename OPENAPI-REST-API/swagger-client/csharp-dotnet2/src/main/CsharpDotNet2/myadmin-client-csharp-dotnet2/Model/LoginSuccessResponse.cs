using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The response from a successful login.
  /// </summary>
  [DataContract]
  public class LoginSuccessResponse {
    /// <summary>
    /// Gets or Sets SessionId
    /// </summary>
    [DataMember(Name="sessionId", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sessionId")]
    public string SessionId { get; set; }

    /// <summary>
    /// Gets or Sets AccountId
    /// </summary>
    [DataMember(Name="account_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "account_id")]
    public int? AccountId { get; set; }

    /// <summary>
    /// Gets or Sets AccountLid
    /// </summary>
    [DataMember(Name="account_lid", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "account_lid")]
    public string AccountLid { get; set; }

    /// <summary>
    /// Gets or Sets Ima
    /// </summary>
    [DataMember(Name="ima", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ima")]
    public string Ima { get; set; }

    /// <summary>
    /// Gets or Sets Gravatar
    /// </summary>
    [DataMember(Name="gravatar", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "gravatar")]
    public string Gravatar { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LoginSuccessResponse {\n");
      sb.Append("  SessionId: ").Append(SessionId).Append("\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("  AccountLid: ").Append(AccountLid).Append("\n");
      sb.Append("  Ima: ").Append(Ima).Append("\n");
      sb.Append("  Gravatar: ").Append(Gravatar).Append("\n");
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
