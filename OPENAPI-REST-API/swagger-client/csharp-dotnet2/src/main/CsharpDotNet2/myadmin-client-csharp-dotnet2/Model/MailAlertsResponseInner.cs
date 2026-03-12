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
  public class MailAlertsResponseInner {
    /// <summary>
    /// Gets or Sets AlertId
    /// </summary>
    [DataMember(Name="alert_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "alert_id")]
    public int? AlertId { get; set; }

    /// <summary>
    /// Gets or Sets AlertType
    /// </summary>
    [DataMember(Name="alert_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "alert_type")]
    public string AlertType { get; set; }

    /// <summary>
    /// Gets or Sets AlertValue
    /// </summary>
    [DataMember(Name="alert_value", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "alert_value")]
    public string AlertValue { get; set; }

    /// <summary>
    /// Gets or Sets AlertTo
    /// </summary>
    [DataMember(Name="alert_to", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "alert_to")]
    public string AlertTo { get; set; }

    /// <summary>
    /// Gets or Sets AlertEnabled
    /// </summary>
    [DataMember(Name="alert_enabled", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "alert_enabled")]
    public string AlertEnabled { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MailAlertsResponseInner {\n");
      sb.Append("  AlertId: ").Append(AlertId).Append("\n");
      sb.Append("  AlertType: ").Append(AlertType).Append("\n");
      sb.Append("  AlertValue: ").Append(AlertValue).Append("\n");
      sb.Append("  AlertTo: ").Append(AlertTo).Append("\n");
      sb.Append("  AlertEnabled: ").Append(AlertEnabled).Append("\n");
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
