using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// request to validate a vps order
  /// </summary>
  [DataContract]
  public class VpsOrderPutRequest {
    /// <summary>
    /// OS Distribution
    /// </summary>
    /// <value>OS Distribution</value>
    [DataMember(Name="osDistro", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "osDistro")]
    public string OsDistro { get; set; }

    /// <summary>
    /// Number of slices
    /// </summary>
    /// <value>Number of slices</value>
    [DataMember(Name="slices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "slices")]
    public int? Slices { get; set; }

    /// <summary>
    /// VPS Platform
    /// </summary>
    /// <value>VPS Platform</value>
    [DataMember(Name="vpsPlatform", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsPlatform")]
    public string VpsPlatform { get; set; }

    /// <summary>
    /// Control Panel
    /// </summary>
    /// <value>Control Panel</value>
    [DataMember(Name="controlpanel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "controlpanel")]
    public string Controlpanel { get; set; }

    /// <summary>
    /// Billing Period or Frequency
    /// </summary>
    /// <value>Billing Period or Frequency</value>
    [DataMember(Name="period", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "period")]
    public int? Period { get; set; }

    /// <summary>
    /// Location
    /// </summary>
    /// <value>Location</value>
    [DataMember(Name="location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "location")]
    public int? Location { get; set; }

    /// <summary>
    /// OS Version
    /// </summary>
    /// <value>OS Version</value>
    [DataMember(Name="osVersion", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "osVersion")]
    public string OsVersion { get; set; }

    /// <summary>
    /// The hostname to assign to the VPS
    /// </summary>
    /// <value>The hostname to assign to the VPS</value>
    [DataMember(Name="hostname", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hostname")]
    public string Hostname { get; set; }

    /// <summary>
    /// Coupon
    /// </summary>
    /// <value>Coupon</value>
    [DataMember(Name="coupon", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "coupon")]
    public string Coupon { get; set; }

    /// <summary>
    /// Root password to assign to the VVPS
    /// </summary>
    /// <value>Root password to assign to the VVPS</value>
    [DataMember(Name="rootpass", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "rootpass")]
    public string Rootpass { get; set; }

    /// <summary>
    /// Order comments or notes
    /// </summary>
    /// <value>Order comments or notes</value>
    [DataMember(Name="comment", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "comment")]
    public string Comment { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrderPutRequest {\n");
      sb.Append("  OsDistro: ").Append(OsDistro).Append("\n");
      sb.Append("  Slices: ").Append(Slices).Append("\n");
      sb.Append("  VpsPlatform: ").Append(VpsPlatform).Append("\n");
      sb.Append("  Controlpanel: ").Append(Controlpanel).Append("\n");
      sb.Append("  Period: ").Append(Period).Append("\n");
      sb.Append("  Location: ").Append(Location).Append("\n");
      sb.Append("  OsVersion: ").Append(OsVersion).Append("\n");
      sb.Append("  Hostname: ").Append(Hostname).Append("\n");
      sb.Append("  Coupon: ").Append(Coupon).Append("\n");
      sb.Append("  Rootpass: ").Append(Rootpass).Append("\n");
      sb.Append("  Comment: ").Append(Comment).Append("\n");
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
