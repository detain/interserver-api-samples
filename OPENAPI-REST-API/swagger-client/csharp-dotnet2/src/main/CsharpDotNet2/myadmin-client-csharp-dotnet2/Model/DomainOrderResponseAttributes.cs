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
  public class DomainOrderResponseAttributes {
    /// <summary>
    /// Registrar order ID.
    /// </summary>
    /// <value>Registrar order ID.</value>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public string Id { get; set; }

    /// <summary>
    /// Administrative contact email provided for the order.
    /// </summary>
    /// <value>Administrative contact email provided for the order.</value>
    [DataMember(Name="admin_email", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "admin_email")]
    public string AdminEmail { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainOrderResponseAttributes {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  AdminEmail: ").Append(AdminEmail).Append("\n");
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
