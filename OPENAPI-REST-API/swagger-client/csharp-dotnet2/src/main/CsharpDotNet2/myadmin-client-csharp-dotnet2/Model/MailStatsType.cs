using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
  /// </summary>
  [DataContract]
  public class MailStatsType {
    /// <summary>
    /// Gets or Sets Time
    /// </summary>
    [DataMember(Name="time", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "time")]
    public string Time { get; set; }

    /// <summary>
    /// Gets or Sets Usage
    /// </summary>
    [DataMember(Name="usage", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "usage")]
    public int? Usage { get; set; }

    /// <summary>
    /// Gets or Sets Currency
    /// </summary>
    [DataMember(Name="currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currency")]
    public string Currency { get; set; }

    /// <summary>
    /// Gets or Sets CurrencySymbol
    /// </summary>
    [DataMember(Name="currencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currencySymbol")]
    public string CurrencySymbol { get; set; }

    /// <summary>
    /// Gets or Sets Cost
    /// </summary>
    [DataMember(Name="cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cost")]
    public double? Cost { get; set; }

    /// <summary>
    /// Gets or Sets Received
    /// </summary>
    [DataMember(Name="received", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "received")]
    public int? Received { get; set; }

    /// <summary>
    /// Gets or Sets Sent
    /// </summary>
    [DataMember(Name="sent", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "sent")]
    public int? Sent { get; set; }

    /// <summary>
    /// Gets or Sets Volume
    /// </summary>
    [DataMember(Name="volume", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "volume")]
    public MailStatsTypeVolume Volume { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailStatsType {\n");
      sb.Append("  Time: ").Append(Time).Append("\n");
      sb.Append("  Usage: ").Append(Usage).Append("\n");
      sb.Append("  Currency: ").Append(Currency).Append("\n");
      sb.Append("  CurrencySymbol: ").Append(CurrencySymbol).Append("\n");
      sb.Append("  Cost: ").Append(Cost).Append("\n");
      sb.Append("  Received: ").Append(Received).Append("\n");
      sb.Append("  Sent: ").Append(Sent).Append("\n");
      sb.Append("  Volume: ").Append(Volume).Append("\n");
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
