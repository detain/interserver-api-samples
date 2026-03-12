using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// The request to update the time zone of a vps.
  /// </summary>
  [DataContract]
  public class TimezoneUpdate {
    /// <summary>
    /// The time zone
    /// </summary>
    /// <value>The time zone</value>
    [DataMember(Name="timezone", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "timezone")]
    public string Timezone { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TimezoneUpdate {\n");
      sb.Append("  Timezone: ").Append(Timezone).Append("\n");
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
