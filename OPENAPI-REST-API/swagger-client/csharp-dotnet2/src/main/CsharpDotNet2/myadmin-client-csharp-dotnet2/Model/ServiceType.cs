using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A general grouping of services within a category.
  /// </summary>
  [DataContract]
  public class ServiceType {
    /// <summary>
    /// Gets or Sets StId
    /// </summary>
    [DataMember(Name="st_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "st_id")]
    public int? StId { get; set; }

    /// <summary>
    /// Gets or Sets StName
    /// </summary>
    [DataMember(Name="st_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "st_name")]
    public string StName { get; set; }

    /// <summary>
    /// Gets or Sets StCategory
    /// </summary>
    [DataMember(Name="st_category", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "st_category")]
    public int? StCategory { get; set; }

    /// <summary>
    /// Gets or Sets StModule
    /// </summary>
    [DataMember(Name="st_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "st_module")]
    public string StModule { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServiceType {\n");
      sb.Append("  StId: ").Append(StId).Append("\n");
      sb.Append("  StName: ").Append(StName).Append("\n");
      sb.Append("  StCategory: ").Append(StCategory).Append("\n");
      sb.Append("  StModule: ").Append(StModule).Append("\n");
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
