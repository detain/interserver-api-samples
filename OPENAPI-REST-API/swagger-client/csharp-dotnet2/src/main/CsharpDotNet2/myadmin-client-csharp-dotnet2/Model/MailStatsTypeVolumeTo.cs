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
  public class MailStatsTypeVolumeTo {
    /// <summary>
    /// Gets or Sets ClientdomainCom
    /// </summary>
    [DataMember(Name="client@domain.com", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client@domain.com")]
    public int? ClientdomainCom { get; set; }

    /// <summary>
    /// Gets or Sets UsersiteNet
    /// </summary>
    [DataMember(Name="user@site.net", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "user@site.net")]
    public int? UsersiteNet { get; set; }

    /// <summary>
    /// Gets or Sets SalescompanyCom
    /// </summary>
    [DataMember(Name="sales@company.com", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sales@company.com")]
    public int? SalescompanyCom { get; set; }

    /// <summary>
    /// Gets or Sets ClientanothersiteCom
    /// </summary>
    [DataMember(Name="client@anothersite.com", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "client@anothersite.com")]
    public int? ClientanothersiteCom { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailStatsTypeVolumeTo {\n");
      sb.Append("  ClientdomainCom: ").Append(ClientdomainCom).Append("\n");
      sb.Append("  UsersiteNet: ").Append(UsersiteNet).Append("\n");
      sb.Append("  SalescompanyCom: ").Append(SalescompanyCom).Append("\n");
      sb.Append("  ClientanothersiteCom: ").Append(ClientanothersiteCom).Append("\n");
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
