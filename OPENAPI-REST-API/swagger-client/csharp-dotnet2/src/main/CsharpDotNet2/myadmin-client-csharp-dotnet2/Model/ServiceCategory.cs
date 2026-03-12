using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A Category of Services.  This is the broadest grouping within a module.
  /// </summary>
  [DataContract]
  public class ServiceCategory {
    /// <summary>
    /// Gets or Sets CategoryId
    /// </summary>
    [DataMember(Name="category_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_id")]
    public int? CategoryId { get; set; }

    /// <summary>
    /// Gets or Sets CategoryName
    /// </summary>
    [DataMember(Name="category_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_name")]
    public string CategoryName { get; set; }

    /// <summary>
    /// Gets or Sets CategoryTag
    /// </summary>
    [DataMember(Name="category_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_tag")]
    public string CategoryTag { get; set; }

    /// <summary>
    /// Gets or Sets CategoryModule
    /// </summary>
    [DataMember(Name="category_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_module")]
    public string CategoryModule { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServiceCategory {\n");
      sb.Append("  CategoryId: ").Append(CategoryId).Append("\n");
      sb.Append("  CategoryName: ").Append(CategoryName).Append("\n");
      sb.Append("  CategoryTag: ").Append(CategoryTag).Append("\n");
      sb.Append("  CategoryModule: ").Append(CategoryModule).Append("\n");
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
