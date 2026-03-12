using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The data for a email deny rule record.
  /// </summary>
  [DataContract]
  public class DenyRuleNew {
    /// <summary>
    /// Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
    /// </summary>
    /// <value>Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.</value>
    [DataMember(Name="user", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "user")]
    public string User { get; set; }

    /// <summary>
    /// The type of deny rule.
    /// </summary>
    /// <value>The type of deny rule.</value>
    [DataMember(Name="type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "type")]
    public string Type { get; set; }

    /// <summary>
    /// The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
    /// </summary>
    /// <value>The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.</value>
    [DataMember(Name="data", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "data")]
    public string Data { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DenyRuleNew {\n");
      sb.Append("  User: ").Append(User).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("  Data: ").Append(Data).Append("\n");
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
