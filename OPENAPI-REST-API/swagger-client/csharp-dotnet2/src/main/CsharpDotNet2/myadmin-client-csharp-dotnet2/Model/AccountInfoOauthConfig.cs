using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// OAuth integration configuration including callback URL and available providers.
  /// </summary>
  [DataContract]
  public class AccountInfoOauthConfig {
    /// <summary>
    /// Gets or Sets Callback
    /// </summary>
    [DataMember(Name="callback", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "callback")]
    public string Callback { get; set; }

    /// <summary>
    /// Gets or Sets Providers
    /// </summary>
    [DataMember(Name="providers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "providers")]
    public AccountInfoOauthConfigProviders Providers { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfoOauthConfig {\n");
      sb.Append("  Callback: ").Append(Callback).Append("\n");
      sb.Append("  Providers: ").Append(Providers).Append("\n");
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
