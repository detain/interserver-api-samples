using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Costs of license packages
  /// </summary>
  [DataContract]
  public class LicensesOrderPackageCosts {
    /// <summary>
    /// Cost of package with ID 11468
    /// </summary>
    /// <value>Cost of package with ID 11468</value>
    [DataMember(Name="LicensesOrderPackageCosts11468", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "LicensesOrderPackageCosts11468")]
    public decimal? LicensesOrderPackageCosts11468 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicensesOrderPackageCosts {\n");
      sb.Append("  LicensesOrderPackageCosts11468: ").Append(LicensesOrderPackageCosts11468).Append("\n");
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
