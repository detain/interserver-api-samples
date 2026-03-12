using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A DirectAdmin license tier option.
  /// </summary>
  [DataContract]
  public class VpsDALicense {
    /// <summary>
    /// License tier name.
    /// </summary>
    /// <value>License tier name.</value>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// License tier sub-name.
    /// </summary>
    /// <value>License tier sub-name.</value>
    [DataMember(Name="sub_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sub_name")]
    public string SubName { get; set; }

    /// <summary>
    /// Monthly cost in cents.
    /// </summary>
    /// <value>Monthly cost in cents.</value>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public int? Cost { get; set; }

    /// <summary>
    /// Image path for the disabled state icon.
    /// </summary>
    /// <value>Image path for the disabled state icon.</value>
    [DataMember(Name="img_disabled", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "img_disabled")]
    public string ImgDisabled { get; set; }

    /// <summary>
    /// Image path for the active state icon.
    /// </summary>
    /// <value>Image path for the active state icon.</value>
    [DataMember(Name="img_active", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "img_active")]
    public string ImgActive { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsDALicense {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  SubName: ").Append(SubName).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
      sb.Append("  ImgDisabled: ").Append(ImgDisabled).Append("\n");
      sb.Append("  ImgActive: ").Append(ImgActive).Append("\n");
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
