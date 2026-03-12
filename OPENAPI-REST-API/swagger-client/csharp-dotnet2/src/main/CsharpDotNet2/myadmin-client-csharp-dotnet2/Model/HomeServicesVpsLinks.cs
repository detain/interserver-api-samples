using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Map of VPS service IDs to their hostnames for the account dashboard.
  /// </summary>
  [DataContract]
  public class HomeServicesVpsLinks {
    /// <summary>
    /// Link to a VPS.
    /// </summary>
    /// <value>Link to a VPS.</value>
    [DataMember(Name="465503", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "465503")]
    public string _465503 { get; set; }

    /// <summary>
    /// Link to a VPS.
    /// </summary>
    /// <value>Link to a VPS.</value>
    [DataMember(Name="2500081", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2500081")]
    public string _2500081 { get; set; }

    /// <summary>
    /// Link to a VPS.
    /// </summary>
    /// <value>Link to a VPS.</value>
    [DataMember(Name="2578866", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "2578866")]
    public string _2578866 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeServicesVpsLinks {\n");
      sb.Append("  _465503: ").Append(_465503).Append("\n");
      sb.Append("  _2500081: ").Append(_2500081).Append("\n");
      sb.Append("  _2578866: ").Append(_2578866).Append("\n");
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
