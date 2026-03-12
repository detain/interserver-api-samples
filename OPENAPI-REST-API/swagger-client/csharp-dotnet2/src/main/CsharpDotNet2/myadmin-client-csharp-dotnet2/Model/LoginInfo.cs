using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Basic information useful for rendering a login page.
  /// </summary>
  [DataContract]
  public class LoginInfo {
    /// <summary>
    /// A logo image url.
    /// </summary>
    /// <value>A logo image url.</value>
    [DataMember(Name="logo", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "logo")]
    public string Logo { get; set; }

    /// <summary>
    /// A base64 encoded image to use for rendering the alternateive captcha.
    /// </summary>
    /// <value>A base64 encoded image to use for rendering the alternateive captcha.</value>
    [DataMember(Name="captcha", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "captcha")]
    public string Captcha { get; set; }

    /// <summary>
    /// The desired langauge to render the site with.
    /// </summary>
    /// <value>The desired langauge to render the site with.</value>
    [DataMember(Name="language", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "language")]
    public string Language { get; set; }

    /// <summary>
    /// Gets or Sets Counts
    /// </summary>
    [DataMember(Name="counts", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "counts")]
    public LoginServiceCounts Counts { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LoginInfo {\n");
      sb.Append("  Logo: ").Append(Logo).Append("\n");
      sb.Append("  Captcha: ").Append(Captcha).Append("\n");
      sb.Append("  Language: ").Append(Language).Append("\n");
      sb.Append("  Counts: ").Append(Counts).Append("\n");
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
