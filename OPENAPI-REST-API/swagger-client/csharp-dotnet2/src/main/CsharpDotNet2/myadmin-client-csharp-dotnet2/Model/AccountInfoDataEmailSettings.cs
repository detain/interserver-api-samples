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
  public class AccountInfoDataEmailSettings {
    /// <summary>
    /// Gets or Sets AdminccBadResponse
    /// </summary>
    [DataMember(Name="admin/cc_bad_response", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "admin/cc_bad_response")]
    public string AdminccBadResponse { get; set; }

    /// <summary>
    /// Gets or Sets AdminmassCommunicationsTpl
    /// </summary>
    [DataMember(Name="admin/mass_communications.tpl", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "admin/mass_communications.tpl")]
    public string AdminmassCommunicationsTpl { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AccountInfoDataEmailSettings {\n");
      sb.Append("  AdminccBadResponse: ").Append(AdminccBadResponse).Append("\n");
      sb.Append("  AdminmassCommunicationsTpl: ").Append(AdminmassCommunicationsTpl).Append("\n");
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
