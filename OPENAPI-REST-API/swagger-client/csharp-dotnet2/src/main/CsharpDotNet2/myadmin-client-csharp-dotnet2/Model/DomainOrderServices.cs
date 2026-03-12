using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Available domain service catalog entries keyed by service ID.
  /// </summary>
  [DataContract]
  public class DomainOrderServices {
    /// <summary>
    /// Gets or Sets DomainOrderServices10001
    /// </summary>
    [DataMember(Name="DomainOrderServices10001", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "DomainOrderServices10001")]
    public DomainOrderServices10001 DomainOrderServices10001 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainOrderServices {\n");
      sb.Append("  DomainOrderServices10001: ").Append(DomainOrderServices10001).Append("\n");
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
