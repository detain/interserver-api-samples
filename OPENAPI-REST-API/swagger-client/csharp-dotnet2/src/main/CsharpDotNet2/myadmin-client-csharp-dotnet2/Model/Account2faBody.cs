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
  public class Account2faBody {
    /// <summary>
    /// The 6-digit verification code from your authenticator app.
    /// </summary>
    /// <value>The 6-digit verification code from your authenticator app.</value>
    [DataMember(Name="2fa_google_code", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2fa_google_code")]
    public string _2faGoogleCode { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Account2faBody {\n");
      sb.Append("  _2faGoogleCode: ").Append(_2faGoogleCode).Append("\n");
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
