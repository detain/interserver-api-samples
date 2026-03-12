using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// A single registered nameserver entry with glue IPs.
  /// </summary>
  [DataContract]
  public class DomainNameServer {
    /// <summary>
    /// Gets or Sets Sortorder
    /// </summary>
    [DataMember(Name="sortorder", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sortorder")]
    public string Sortorder { get; set; }

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
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class DomainNameServer {\n");
      sb.Append("  Sortorder: ").Append(Sortorder).Append("\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  Ipaddress: ").Append(Ipaddress).Append("\n");
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
