using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A base-64 encoded captcha image.
  /// </summary>
  [DataContract]
  public class CaptchaResponse {
    /// <summary>
    /// The base64 encoded captcha image.
    /// </summary>
    /// <value>The base64 encoded captcha image.</value>
    [DataMember(Name="captcha", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "captcha")]
    public string Captcha { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class CaptchaResponse {\n");
      sb.Append("  Captcha: ").Append(Captcha).Append("\n");
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
