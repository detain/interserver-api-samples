using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Create firewall rule for your ip
  /// </summary>
  [DataContract]
  public class CreateGeoFirewallRule {
    /// <summary>
    /// Gets or Sets DestinationPort
    /// </summary>
    [DataMember(Name="destination_port", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "destination_port")]
    public int? DestinationPort { get; set; }

    /// <summary>
    /// To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode
    /// </summary>
    /// <value>To get country code refer our countries api - https://my.interserver.net/apiv2/account/countries?fetch_by=numcode</value>
    [DataMember(Name="country_code", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "country_code")]
    public int? CountryCode { get; set; }

    /// <summary>
    /// ASN number
    /// </summary>
    /// <value>ASN number</value>
    [DataMember(Name="asn", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "asn")]
    public int? Asn { get; set; }

    /// <summary>
    /// 1 = Block,  0 = Whitelist
    /// </summary>
    /// <value>1 = Block,  0 = Whitelist</value>
    [DataMember(Name="xdp_action", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "xdp_action")]
    public int? XdpAction { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class CreateGeoFirewallRule {\n");
      sb.Append("  DestinationPort: ").Append(DestinationPort).Append("\n");
      sb.Append("  CountryCode: ").Append(CountryCode).Append("\n");
      sb.Append("  Asn: ").Append(Asn).Append("\n");
      sb.Append("  XdpAction: ").Append(XdpAction).Append("\n");
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
