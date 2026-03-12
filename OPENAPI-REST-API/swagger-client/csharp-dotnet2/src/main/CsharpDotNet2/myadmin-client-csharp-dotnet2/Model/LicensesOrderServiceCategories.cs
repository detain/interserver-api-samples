using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// License service categories
  /// </summary>
  [DataContract]
  public class LicensesOrderServiceCategories {
    /// <summary>
    /// Gets or Sets LicensesOrderServiceCategories509
    /// </summary>
    [DataMember(Name="LicensesOrderServiceCategories509", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "LicensesOrderServiceCategories509")]
    public LicensesOrderServiceCategories509 LicensesOrderServiceCategories509 { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicensesOrderServiceCategories {\n");
      sb.Append("  LicensesOrderServiceCategories509: ").Append(LicensesOrderServiceCategories509).Append("\n");
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
