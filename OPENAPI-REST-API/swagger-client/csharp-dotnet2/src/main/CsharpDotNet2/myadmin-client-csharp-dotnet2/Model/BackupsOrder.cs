using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Available backup storage packages and pricing for ordering a new backup service.
  /// </summary>
  [DataContract]
  public class BackupsOrder {
    /// <summary>
    /// Gets or Sets PackageCosts
    /// </summary>
    [DataMember(Name="packageCosts", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "packageCosts")]
    public BackupsOrderPackageCosts PackageCosts { get; set; }

    /// <summary>
    /// Gets or Sets ServiceTypes
    /// </summary>
    [DataMember(Name="serviceTypes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceTypes")]
    public BackupsOrderServiceTypes ServiceTypes { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class BackupsOrder {\n");
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
