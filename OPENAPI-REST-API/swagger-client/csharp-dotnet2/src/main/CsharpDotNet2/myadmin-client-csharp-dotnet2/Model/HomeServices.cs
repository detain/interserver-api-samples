using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Users services.
  /// </summary>
  [DataContract]
  public class HomeServices {
    /// <summary>
    /// Gets or Sets Domains
    /// </summary>
    [DataMember(Name="domains", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domains")]
    public HomeServicesDomains Domains { get; set; }

    /// <summary>
    /// Gets or Sets Webhosting
    /// </summary>
    [DataMember(Name="webhosting", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "webhosting")]
    public HomeServicesWebhosting Webhosting { get; set; }

    /// <summary>
    /// Gets or Sets Vps
    /// </summary>
    [DataMember(Name="vps", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps")]
    public HomeServicesVps Vps { get; set; }

    /// <summary>
    /// Gets or Sets Licenses
    /// </summary>
    [DataMember(Name="licenses", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "licenses")]
    public HomeServicesLicenses Licenses { get; set; }

    /// <summary>
    /// Gets or Sets Servers
    /// </summary>
    [DataMember(Name="servers", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "servers")]
    public HomeServicesServers Servers { get; set; }

    /// <summary>
    /// Gets or Sets Backups
    /// </summary>
    [DataMember(Name="backups", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "backups")]
    public HomeServicesBackups Backups { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class HomeServices {\n");
      sb.Append("  Domains: ").Append(Domains).Append("\n");
      sb.Append("  Webhosting: ").Append(Webhosting).Append("\n");
      sb.Append("  Vps: ").Append(Vps).Append("\n");
      sb.Append("  Licenses: ").Append(Licenses).Append("\n");
      sb.Append("  Servers: ").Append(Servers).Append("\n");
      sb.Append("  Backups: ").Append(Backups).Append("\n");
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
