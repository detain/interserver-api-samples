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
  public class ServerLocation1 {
    /// <summary>
    /// Gets or Sets LocationId
    /// </summary>
    [DataMember(Name="location_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location_id")]
    public int? LocationId { get; set; }

    /// <summary>
    /// Gets or Sets LocationName
    /// </summary>
    [DataMember(Name="location_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location_name")]
    public string LocationName { get; set; }

    /// <summary>
    /// Gets or Sets LocationDescription
    /// </summary>
    [DataMember(Name="location_description", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location_description")]
    public string LocationDescription { get; set; }

    /// <summary>
    /// Gets or Sets LocationLat
    /// </summary>
    [DataMember(Name="location_lat", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location_lat")]
    public string LocationLat { get; set; }

    /// <summary>
    /// Gets or Sets LocationLong
    /// </summary>
    [DataMember(Name="location_long", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location_long")]
    public string LocationLong { get; set; }

    /// <summary>
    /// Gets or Sets LocationIpmiGroup
    /// </summary>
    [DataMember(Name="location_ipmi_group", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location_ipmi_group")]
    public int? LocationIpmiGroup { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class ServerLocation1 {\n");
      sb.Append("  LocationId: ").Append(LocationId).Append("\n");
      sb.Append("  LocationName: ").Append(LocationName).Append("\n");
      sb.Append("  LocationDescription: ").Append(LocationDescription).Append("\n");
      sb.Append("  LocationLat: ").Append(LocationLat).Append("\n");
      sb.Append("  LocationLong: ").Append(LocationLong).Append("\n");
      sb.Append("  LocationIpmiGroup: ").Append(LocationIpmiGroup).Append("\n");
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
