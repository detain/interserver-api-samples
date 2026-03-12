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
  public class InlineResponse200 {
    /// <summary>
    /// Base64-encoded secret key for TOTP setup.
    /// </summary>
    /// <value>Base64-encoded secret key for TOTP setup.</value>
    [DataMember(Name="2fa_google_key", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_key")]
    public string _2faGoogleKey { get; set; }

    /// <summary>
    /// Human-readable formatted key (chunks of 4 characters).
    /// </summary>
    /// <value>Human-readable formatted key (chunks of 4 characters).</value>
    [DataMember(Name="2fa_google_split", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_split")]
    public string _2faGoogleSplit { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class InlineResponse200 {\n");
      sb.Append("  _2faGoogleKey: ").Append(_2faGoogleKey).Append("\n");
      sb.Append("  _2faGoogleSplit: ").Append(_2faGoogleSplit).Append("\n");
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
