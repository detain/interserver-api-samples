using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Supplementary information tables for a backup service (IP info, etc.).
  /// </summary>
  [DataContract]
  public class BackupExtraInfoTables {
    /// <summary>
    /// Gets or Sets IpInfo
    /// </summary>
    [DataMember(Name="ip_info", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ip_info")]
    public BackupIPInfo IpInfo { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupExtraInfoTables {\n");
      sb.Append("  IpInfo: ").Append(IpInfo).Append("\n");
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
