using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Map of license service IDs to their IP addresses for the account dashboard.
  /// </summary>
  [DataContract]
  public class HomeServicesLicensesLinks {
    /// <summary>
    /// Link to a license.
    /// </summary>
    /// <value>Link to a license.</value>
    [DataMember(Name="386522", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "386522")]
    public string _386522 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeServicesLicensesLinks {\n");
      sb.Append("  _386522: ").Append(_386522).Append("\n");
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
