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
  public class DomainAllInfoAttributesContactSet {
    /// <summary>
    /// Gets or Sets Owner
    /// </summary>
    [DataMember(Name="owner", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "owner")]
    public DomainOwnerContact Owner { get; set; }

    /// <summary>
    /// Gets or Sets Admin
    /// </summary>
    [DataMember(Name="admin", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "admin")]
    public DomainAdminContact Admin { get; set; }

    /// <summary>
    /// Gets or Sets Tech
    /// </summary>
    [DataMember(Name="tech", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "tech")]
    public DomainTechContact Tech { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainAllInfoAttributesContactSet {\n");
      sb.Append("  Owner: ").Append(Owner).Append("\n");
      sb.Append("  Admin: ").Append(Admin).Append("\n");
      sb.Append("  Tech: ").Append(Tech).Append("\n");
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
