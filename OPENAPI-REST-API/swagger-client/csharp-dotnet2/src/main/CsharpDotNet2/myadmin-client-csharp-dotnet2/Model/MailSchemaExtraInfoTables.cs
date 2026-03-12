using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Additional information tables for the mail service.
  /// </summary>
  [DataContract]
  public class MailSchemaExtraInfoTables {
    /// <summary>
    /// Gets or Sets Mail
    /// </summary>
    [DataMember(Name="mail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mail")]
    public MailExtraInfoTable Mail { get; set; }

    /// <summary>
    /// Gets or Sets Tutorials
    /// </summary>
    [DataMember(Name="tutorials", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tutorials")]
    public MailTutorialsTable Tutorials { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailSchemaExtraInfoTables {\n");
      sb.Append("  Mail: ").Append(Mail).Append("\n");
      sb.Append("  Tutorials: ").Append(Tutorials).Append("\n");
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
