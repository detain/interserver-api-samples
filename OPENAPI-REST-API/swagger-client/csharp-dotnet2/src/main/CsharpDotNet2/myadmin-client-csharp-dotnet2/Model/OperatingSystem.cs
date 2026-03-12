using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// An operating system option available for server provisioning.
  /// </summary>
  [DataContract]
  public class OperatingSystem {
    /// <summary>
    /// Gets or Sets Id
    /// </summary>
    [DataMember(Name="id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "id")]
    public int? Id { get; set; }

    /// <summary>
    /// Gets or Sets ShortDesc
    /// </summary>
    [DataMember(Name="short_desc", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "short_desc")]
    public string ShortDesc { get; set; }

    /// <summary>
    /// Gets or Sets MonthlyPrice
    /// </summary>
    [DataMember(Name="monthly_price", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "monthly_price")]
    public decimal? MonthlyPrice { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class OperatingSystem {\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("  ShortDesc: ").Append(ShortDesc).Append("\n");
      sb.Append("  MonthlyPrice: ").Append(MonthlyPrice).Append("\n");
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
