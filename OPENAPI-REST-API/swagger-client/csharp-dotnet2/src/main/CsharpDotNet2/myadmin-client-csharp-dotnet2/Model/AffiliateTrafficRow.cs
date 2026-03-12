using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Affiliate Web Traffic Entry
  /// </summary>
  [DataContract]
  public class AffiliateTrafficRow {
    /// <summary>
    /// Gets or Sets TrafficId
    /// </summary>
    [DataMember(Name="traffic_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "traffic_id")]
    public string TrafficId { get; set; }

    /// <summary>
    /// Gets or Sets TrafficIp
    /// </summary>
    [DataMember(Name="traffic_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "traffic_ip")]
    public string TrafficIp { get; set; }

    /// <summary>
    /// Gets or Sets TrafficUrl
    /// </summary>
    [DataMember(Name="traffic_url", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "traffic_url")]
    public string TrafficUrl { get; set; }

    /// <summary>
    /// Gets or Sets TrafficAffiliate
    /// </summary>
    [DataMember(Name="traffic_affiliate", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "traffic_affiliate")]
    public string TrafficAffiliate { get; set; }

    /// <summary>
    /// Gets or Sets TrafficReferrer
    /// </summary>
    [DataMember(Name="traffic_referrer", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "traffic_referrer")]
    public string TrafficReferrer { get; set; }

    /// <summary>
    /// Gets or Sets TrafficTimestamp
    /// </summary>
    [DataMember(Name="traffic_timestamp", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "traffic_timestamp")]
    public string TrafficTimestamp { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class AffiliateTrafficRow {\n");
      sb.Append("  TrafficId: ").Append(TrafficId).Append("\n");
      sb.Append("  TrafficIp: ").Append(TrafficIp).Append("\n");
      sb.Append("  TrafficUrl: ").Append(TrafficUrl).Append("\n");
      sb.Append("  TrafficAffiliate: ").Append(TrafficAffiliate).Append("\n");
      sb.Append("  TrafficReferrer: ").Append(TrafficReferrer).Append("\n");
      sb.Append("  TrafficTimestamp: ").Append(TrafficTimestamp).Append("\n");
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
