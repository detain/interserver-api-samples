using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// VPS OS Template Request
  /// </summary>
  [DataContract]
  public class TemplateRequest {
    /// <summary>
    /// OS Template Filename
    /// </summary>
    /// <value>OS Template Filename</value>
    [DataMember(Name="template", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "template")]
    public string Template { get; set; }

    /// <summary>
    /// Password for Root / Administrator Account.
    /// </summary>
    /// <value>Password for Root / Administrator Account.</value>
    [DataMember(Name="password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "password")]
    public string Password { get; set; }

    /// <summary>
    /// Password for this account.
    /// </summary>
    /// <value>Password for this account.</value>
    [DataMember(Name="localPassword", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "localPassword")]
    public string LocalPassword { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TemplateRequest {\n");
      sb.Append("  Template: ").Append(Template).Append("\n");
      sb.Append("  Password: ").Append(Password).Append("\n");
      sb.Append("  LocalPassword: ").Append(LocalPassword).Append("\n");
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
