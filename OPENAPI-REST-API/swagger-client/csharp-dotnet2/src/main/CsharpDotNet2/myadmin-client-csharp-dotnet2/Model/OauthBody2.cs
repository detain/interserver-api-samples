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
  public class OauthBody2 {
    /// <summary>
    /// The account ID returned from the POST callback.
    /// </summary>
    /// <value>The account ID returned from the POST callback.</value>
    [DataMember(Name="account_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "account_id")]
    public int? AccountId { get; set; }

    /// <summary>
    /// The 6-digit two-factor authentication code.
    /// </summary>
    /// <value>The 6-digit two-factor authentication code.</value>
    [DataMember(Name="code", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "code")]
    public string Code { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class OauthBody2 {\n");
      sb.Append("  AccountId: ").Append(AccountId).Append("\n");
      sb.Append("  Code: ").Append(Code).Append("\n");
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
