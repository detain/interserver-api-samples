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
  public class ServerLease {
    /// <summary>
    /// MAC address associated with the lease.
    /// </summary>
    /// <value>MAC address associated with the lease.</value>
    [DataMember(Name="mac", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "mac")]
    public string Mac { get; set; }

    /// <summary>
    /// Indicates if the lease is authenticated.
    /// </summary>
    /// <value>Indicates if the lease is authenticated.</value>
    [DataMember(Name="authenticated", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "authenticated")]
    public bool? Authenticated { get; set; }

    /// <summary>
    /// Group identifier for the lease.
    /// </summary>
    /// <value>Group identifier for the lease.</value>
    [DataMember(Name="group", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "group")]
    public string Group { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerLease {\n");
      sb.Append("  Mac: ").Append(Mac).Append("\n");
      sb.Append("  Authenticated: ").Append(Authenticated).Append("\n");
      sb.Append("  Group: ").Append(Group).Append("\n");
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
