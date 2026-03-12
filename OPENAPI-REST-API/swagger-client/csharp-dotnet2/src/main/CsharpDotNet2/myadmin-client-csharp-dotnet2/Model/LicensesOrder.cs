using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Available license packages and pricing for ordering a new software license.
  /// </summary>
  [DataContract]
  public class LicensesOrder {
    /// <summary>
    /// Gets or Sets ServiceCategories
    /// </summary>
    [DataMember(Name="serviceCategories", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceCategories")]
    public LicensesOrderServiceCategories ServiceCategories { get; set; }

    /// <summary>
    /// Gets or Sets PackageCosts
    /// </summary>
    [DataMember(Name="packageCosts", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "packageCosts")]
    public LicensesOrderPackageCosts PackageCosts { get; set; }

    /// <summary>
    /// Gets or Sets ServiceTypes
    /// </summary>
    [DataMember(Name="serviceTypes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceTypes")]
    public LicensesOrderServiceTypes ServiceTypes { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicensesOrder {\n");
      sb.Append("  ServiceCategories: ").Append(ServiceCategories).Append("\n");
      sb.Append("  PackageCosts: ").Append(PackageCosts).Append("\n");
      sb.Append("  ServiceTypes: ").Append(ServiceTypes).Append("\n");
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
