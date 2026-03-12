using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Types of license services
  /// </summary>
  [DataContract]
  public class LicensesOrderServiceTypes {
    /// <summary>
    /// Gets or Sets LicensesOrderServiceTypes11482
    /// </summary>
    [DataMember(Name="LicensesOrderServiceTypes11482", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "LicensesOrderServiceTypes11482")]
    public LicensesOrderServiceTypes11482 LicensesOrderServiceTypes11482 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicensesOrderServiceTypes {\n");
      sb.Append("  LicensesOrderServiceTypes11482: ").Append(LicensesOrderServiceTypes11482).Append("\n");
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
