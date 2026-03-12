using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The data to submit in the login request.
  /// </summary>
  [DataContract]
  public class LoginSubmissionExample {
    /// <summary>
    /// Gets or Sets Login
    /// </summary>
    [DataMember(Name="login", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "login")]
    public string Login { get; set; }

    /// <summary>
    /// Gets or Sets Passwd
    /// </summary>
    [DataMember(Name="passwd", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "passwd")]
    public string Passwd { get; set; }

    /// <summary>
    /// Gets or Sets Remember
    /// </summary>
    [DataMember(Name="remember", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "remember")]
    public string Remember { get; set; }

    /// <summary>
    /// Gets or Sets GRecaptchaResponse
    /// </summary>
    [DataMember(Name="g-recaptcha-response", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "g-recaptcha-response")]
    public LoginSubmissionExampleGrecaptcharesponse GRecaptchaResponse { get; set; }

    /// <summary>
    /// Two Factor Authentication Response.
    /// </summary>
    /// <value>Two Factor Authentication Response.</value>
    [DataMember(Name="tfa", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tfa")]
    public string Tfa { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LoginSubmissionExample {\n");
      sb.Append("  Login: ").Append(Login).Append("\n");
      sb.Append("  Passwd: ").Append(Passwd).Append("\n");
      sb.Append("  Remember: ").Append(Remember).Append("\n");
      sb.Append("  GRecaptchaResponse: ").Append(GRecaptchaResponse).Append("\n");
      sb.Append("  Tfa: ").Append(Tfa).Append("\n");
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
