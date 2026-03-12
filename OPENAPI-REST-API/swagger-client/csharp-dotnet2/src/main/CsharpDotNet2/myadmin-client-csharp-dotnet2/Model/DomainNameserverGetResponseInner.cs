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
  public class DomainNameserverGetResponseInner {
    /// <summary>
    /// Gets or Sets Name
    /// </summary>
    [DataMember(Name="name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "name")]
    public string Name { get; set; }

    /// <summary>
    /// Gets or Sets Ipaddress
    /// </summary>
    [DataMember(Name="ipaddress", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ipaddress")]
    public string Ipaddress { get; set; }

    /// <summary>
    /// Whether the registrar allows deletion of this nameserver entry.
    /// </summary>
    /// <value>Whether the registrar allows deletion of this nameserver entry.</value>
    [DataMember(Name="can_delete", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "can_delete")]
    public string CanDelete { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainNameserverGetResponseInner {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Ipaddress: ").Append(Ipaddress).Append("\n");
      sb.Append("  CanDelete: ").Append(CanDelete).Append("\n");
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
