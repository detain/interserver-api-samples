using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class LicensesOrderServiceCategories509 {
    /// <summary>
    /// Category ID
    /// </summary>
    /// <value>Category ID</value>
    [DataMember(Name="category_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_id")]
    public string CategoryId { get; set; }

    /// <summary>
    /// Category Name
    /// </summary>
    /// <value>Category Name</value>
    [DataMember(Name="category_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_name")]
    public string CategoryName { get; set; }

    /// <summary>
    /// Category Tag
    /// </summary>
    /// <value>Category Tag</value>
    [DataMember(Name="category_tag", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_tag")]
    public string CategoryTag { get; set; }

    /// <summary>
    /// Category Module
    /// </summary>
    /// <value>Category Module</value>
    [DataMember(Name="category_module", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "category_module")]
    public string CategoryModule { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class LicensesOrderServiceCategories509 {\n");
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
